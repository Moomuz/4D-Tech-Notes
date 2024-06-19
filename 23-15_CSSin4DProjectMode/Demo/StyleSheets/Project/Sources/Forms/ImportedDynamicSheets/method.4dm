// Imported Dynamic Sheets Form Method
// automatically refreshes the subform when a change is made to the "ImportedDynamicSheets.css" file
// detects the change by comparing the modification date + time of the file

Case of 
	: (FORM Event.code=On Activate)
		// declare variables
		var $path : Text
		var $file : Object
		
		// create file object for "ImportedDynamicSheets.css"
		$path:=Get 4D folder(Database folder)+"Data"+Folder separator+"Logs"+Folder separator+"ImportedDynamicSheets.css"
		$file:=File($path; fk platform path)
		
		// ** when the form is first loaded, Form.modDate and Form.modTime are not set
		
		// check if the modification date exists in the form data object
		If (Form.modDateNull)
			
			// set Form.modDate and Form.modTime to the values in the $file object (new values for comparison)
			Form.modDate:=$file.modificationDate
			Form.modTime:=$file.modificationTime
		End if 
End case 