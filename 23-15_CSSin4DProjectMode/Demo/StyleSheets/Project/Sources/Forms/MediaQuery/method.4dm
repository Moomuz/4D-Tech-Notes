// Media Query Form Method
// automatically refreshes the subform when a change is made to the "styleSheets.css" file
// detects the change by comparing the modification date + time of the file

Case of 
	: (FORM Event.code=On Activate)
		// declare variables
		var $path : Text
		var $file : Object
		
		// create file object for "styleSheets.css"
		$path:=Get 4D folder(Database folder)+"Project"+Folder separator+"Sources"+Folder separator+"styleSheets.css"
		$file:=File($path; fk platform path)
		
		// ** when the form is first loaded, Form.modDate and Form.modTime are not set
		
		// check if the modification date exists in the form data object
		If (Form.modDate#Null)
			// then check if there was a change to the style sheet
			If (Form.modDate#$file.modificationDate) | (Form.modTime#$file.modificationTime)
				// refresh the subform container to reflect changes in the style sheet
				OBJECT SET SUBFORM(*; "subformArea"; "MediaQuery_Subform")
			End if 
		End if 
		// set Form.modDate and Form.modTime to the values in the $file object (new values for comparison)
		Form.modDate:=$file.modificationDate
		Form.modTime:=$file.modificationTime
End case 