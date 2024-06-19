// "TextStyle" Form Method

//// On Load Form Event
// create collection to display in "FontsListBox" list box
// create current style object (applies to sample text and currently-selected form elements in the form editor)
// miscellaneous code to display the form when form macro is executed

Case of 
	: (FORM Event.code=On Load)
		// declare variables
		ARRAY TEXT($fontsArray; 0)
		ARRAY TEXT($stylesArray; 0)
		ARRAY TEXT($namesArray; 0)
		var $fontsCol; $selection : Collection
		var $fontObj; $currentStyle; $fontStyleObj : Object
		var $i; $fontStyleInteger; $fontNameIndex : Integer
		var $font; $name; $objectName; $objectColor : Text
		var $found : Boolean
		
		//// create collection to display in "FontsListBox" list box
		// get array of fonts + convert to collection
		// ex: "Arial"
		$fontsCol:=New collection
		FONT LIST($fontsArray)
		ARRAY TO COLLECTION($fontsCol; $fontsArray)
		
		// get font style variations, create $fontsObj, push to $selection
		// ex: "Arial Bold", "Arial Black", "Arial Hebrew", etc.
		$selection:=New collection
		For each ($font; $fontsCol)
			// get font style arrays for each font
			FONT STYLE LIST($font; $stylesArray; $namesArray)
			
			// get specific font style names
			For ($i; 0; Size of array($namesArray))
				// ensure blank values are not added to collection
				If ($namesArray{$i}#"")
					// create $fontObj
					$fontObj:=New object
					$fontObj.fontName:=$namesArray{$i}
					$fontObj.fontNameDisplay:="<span style=\"font-family:'"+$namesArray{$i}+"'\">"+$namesArray{$i}+"</span>"
					
					// push temp obj to collection
					$selection.push($fontObj)
				End if 
			End for 
		End for each 
		
		// attach to form data, will then display in "FontsListBox" list box
		Form.fonts:=$selection
		
		//// create object to represent current style
		$currentStyle:=New object
		
		// if a single form element with text is selected, create its current style object 
		// based on the $editor object from the form macro and display its text 
		// style in "SampleText" + fills in "Font Style" section accordingly
		If (Form.editor.editor.currentSelection.length=1)
			// get name of selected form element
			$objectName:=Form.editor.editor.currentSelection[0]
			
			// set font + font size
			If (Form.editor.editor.currentPage.objects[$objectName].fontFamily#Null)
				$currentStyle.fontName:=Form.editor.editor.currentPage.objects[$objectName].fontFamily
			Else 
				$currentStyle.fontName:=$fontsArray{1}
			End if 
			If (Form.editor.editor.currentPage.objects[$objectName].fontSize#Null)
				$currentStyle.fontSize:=Form.editor.editor.currentPage.objects[$objectName].fontSize
			Else 
				$currentStyle.fontSize:=10
			End if 
			
			// set font style
			$currentStyle.fontStyle:=New object
			
			// bold 
			If (Form.editor.editor.currentPage.objects[$objectName].fontWeight="normal")
				$currentStyle.fontStyle.bold:=False
			Else 
				$currentStyle.fontStyle.bold:=True
			End if 
			
			// italic
			If (Form.editor.editor.currentPage.objects[$objectName].fontStyle="normal")
				$currentStyle.fontStyle.italic:=False
			Else 
				$currentStyle.fontStyle.italic:=True
			End if 
			
			// underline
			If (Form.editor.editor.currentPage.objects[$objectName].textDecoration="normal")
				$currentStyle.fontStyle.underline:=False
			Else 
				$currentStyle.fontStyle.underline:=True
			End if 
			
			// set font color
			If (Form.editor.editor.currentPage.objects[$objectName].stroke#Null)
				$currentStyle.fontColor:=Form.editor.editor.currentPage.objects[$objectName].stroke
			Else 
				$currentStyle.fontColor:=0x0000
			End if 
			// (for display purposes) select font name in FontsListBox
			$found:=False
			$i:=0
			While ($i<Form.fonts.length) & ($found=False)
				If (Form.fonts[$i].fontName=$currentStyle.fontName)
					// select list box row and break out of the loop
					LISTBOX SELECT ROW(*; "FontsListBox"; $i+1)
					OBJECT SET SCROLL POSITION(*; "FontsListBox"; $i+1; *)
					$found:=True
				End if 
				$i:=$i+1
			End while 
			
			// (for display purposes) apply font style to sample text
			OBJECT SET FONT STYLE(*; "SampleText"; $fontStyleInteger)
			
			// else, no form elements/multiple form elements are selected
		Else 
			$currentStyle.fontName:=$fontsArray{1}
			$currentStyle.fontSize:=10
			$currentStyle.fontStyle:=New object
			$currentStyle.fontStyle.bold:=False
			$currentStyle.fontStyle.underline:=False
			$currentStyle.fontStyle.italic:=False
			$currentStyle.fontColor:="#000000"  // default color is black
			
			// (for display purposes) select first font in listbox 
			LISTBOX SELECT ROW(*; "FontsListBox"; 1)
		End if 
		
		// attach current style object to form data
		Form.currentStyle:=$currentStyle
		
		//// miscellaneous code to display the form elements correctly when the form macro is executed
		
		// apply current style to sample text
		OBJECT SET FONT(*; "SampleText"; $currentStyle.fontName)
		OBJECT SET FONT SIZE(*; "SampleText"; $currentStyle.fontSize)
		OBJECT SET RGB COLORS(*; "SampleText"; $currentStyle.fontColor)
		OBJECT SET FONT STYLE(*; "SampleText"; calcFontStyleInt)
		
		// enable/disable font style checkboxes depending if font has attribute
		// get font style list of the currently-selected font
		FONT STYLE LIST(Form.currentStyle.fontName; $stylesArray; $namesArray)  // $namesArray will not be used
		
		// enable/disable bold checkbox, depending if font has "bold" font style
		$i:=Find in array($stylesArray; "Bold")
		If ($i#-1)
			// enable bold font style if font has property
			OBJECT SET ENABLED(*; "BoldCheckBox"; True)
		Else 
			// else, set bold property to false + set font style
			OBJECT SET ENABLED(*; "BoldCheckBox"; False)
			Form.currentStyle.fontStyle.bold:=False
		End if 
		
		// enable/disable italic checkbox, depending if font has "italic" font style
		$i:=Find in array($stylesArray; "Italic")
		If ($i#-1)
			// enable italic font style if font has property
			OBJECT SET ENABLED(*; "ItalicCheckBox"; True)
		Else 
			// else, set italic property to false + set font style
			OBJECT SET ENABLED(*; "ItalicCheckBox"; False)
			Form.currentStyle.fontStyle.italic:=False
		End if 
		
		// underline checkbox will always be enabled (all fonts can be underlined)
		
		// add "fontSizes" object to form data (used with "FontSizeComboBox" combo box)
		Form.fontSizes:=New object
		Form.fontSizes.values:=New collection(8; 9; 10; 12; 14; 18; 24)
		Form.fontSizes.currentValue:=Form.currentStyle.fontSize
		
		// set font color rectangle to the current style's font color
		OBJECT SET RGB COLORS(*; "ColorPickerRectangle"; "#000000"; Form.currentStyle.fontColor)
		
		// set SampleTextBackground checkbox to false
		Form.sampleTextDarkBG:=False
		
		// disable "Apply" button if no form objects are selected
		If (Form.editor.editor.currentSelection.length=0)
			OBJECT SET ENABLED(*; "ApplyButton"; False)
		End if 
		
		// resizes the "SampleText" input box coordinates + mimics vertical center alignment based on the 
		// "SampleTextRectangle" background rectangle
		resizeSampleText
End case 
