Function onInvoke($editor : Object)->$result : Object
	// Open Text Style Dialog Class
	// includes the code to open the text style editor dialog window
	// also handles applying the text style to selected form objects when the user is done
	// creating a text style in the dialog
	
	// declare variables
	var $form; $objectName : Text
	var $window : Integer
	var $formData; $result : Object
	
	// warns the user that the style will not be applied to form definition
	// when no form objects are selected
	If ($editor.editor.currentSelection.length=0)
		ALERT("No form objects selected. The text style may only be copied as JSON text (can also be used in CSS).")
	End if 
	
	// open a dialog to edit text style of current selection
	$form:="TextStyle"
	$window:=Open form window($form; Movable form dialog box; *)
	$formData:=New object
	$formData.editor:=$editor
	$formData.currentSelection:=$editor.editor.currentSelection
	DIALOG($form; $formData)
	CLOSE WINDOW
	
	// apply text style to current selection if "Apply" button was clicked
	If ($formData.applyButtonClicked=True)
		For each ($objectName; $editor.editor.currentSelection)
			$editor.editor.currentPage.objects[$objectName].fontFamily:=$formData.currentStyle.fontName
			$editor.editor.currentPage.objects[$objectName].fontSize:=$formData.currentStyle.fontSize
			$editor.editor.currentPage.objects[$objectName].stroke:=$formData.currentStyle.fontColor
			If ($formData.currentStyle.fontStyle.bold=True)
				$editor.editor.currentPage.objects[$objectName].fontWeight:="bold"
			Else 
				$editor.editor.currentPage.objects[$objectName].fontWeight:="normal"
			End if 
			If ($formData.currentStyle.fontStyle.italic=True)
				$editor.editor.currentPage.objects[$objectName].fontStyle:="italic"
			Else 
				$editor.editor.currentPage.objects[$objectName].fontStyle:="normal"
			End if 
			If ($formData.currentStyle.fontStyle.underline=True)
				$editor.editor.currentPage.objects[$objectName].textDecoration:="underline"
			Else 
				$editor.editor.currentPage.objects[$objectName].textDecoration:="normal"
			End if 
		End for each 
		
		// then signals the changes to 4D by returning the modified current selection
		// which will then apply the changes inherently via the form macro
		$result:=New object("currentPage"; $editor.editor.currentPage)
	End if 
	