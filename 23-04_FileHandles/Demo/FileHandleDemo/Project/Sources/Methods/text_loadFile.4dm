//%attributes = {}
// Load File Method
// loads the file "FoxInSocks_Text.txt" into 4D
// creates File object and sets file properties shown on form

// ASIDE: If you would like to use a different file, you may edit "Form.text_filePath"

// "FoxInSocks_Text.txt"
// create path
Form:C1466.text_filePath:=Get 4D folder:C485(Database folder:K5:14)+"Resources"+Folder separator:K24:12+"FoxInSocks_Text.txt"

// check if document first
If (Test path name:C476(Form:C1466.text_filePath)=Is a document:K24:1)
	Form:C1466.text_fileObject:=File:C1566(Form:C1466.text_filePath; fk platform path:K87:2)  // create file object
	
	// set file content and properties on form
	text_displayFileContent
	OBJECT SET TITLE:C194(*; "Text_NameValue"; Form:C1466.text_fileObject.fullName)
	OBJECT SET TITLE:C194(*; "Text_PlatformPathValue"; Form:C1466.text_fileObject.platformPath)
	OBJECT SET TITLE:C194(*; "Text_POSIXPathValue"; Form:C1466.text_fileObject.path)
	OBJECT SET TITLE:C194(*; "Text_SizeValue"; String:C10(Form:C1466.text_fileObject.size)+" bytes")
End if 