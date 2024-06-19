//%attributes = {}
// Blob - Load File Method
// loads the file "FoxInSocks_Blob.txt" into 4D
// creates File object and sets file properties shown on form

// ASIDE: If you would like to use different files, you may edit "Form.blob_filePath"

// "FoxInSocks_Blob.txt"
// create path
Form:C1466.blob_filePath:=Get 4D folder:C485(Database folder:K5:14)+"Resources"+Folder separator:K24:12+"FoxInSocks_Blob.txt"

// check if document first
If (Test path name:C476(Form:C1466.blob_filePath)=Is a document:K24:1)
	Form:C1466.blob_fileObject:=File:C1566(Form:C1466.blob_filePath; fk platform path:K87:2)  // create file object
	
	// set file content and properties on form
	blob_displayFileContent
	OBJECT SET TITLE:C194(*; "Blob_NameValue"; Form:C1466.blob_fileObject.fullName)
	OBJECT SET TITLE:C194(*; "Blob_PlatformPathValue"; Form:C1466.blob_fileObject.platformPath)
	OBJECT SET TITLE:C194(*; "Blob_POSIXPathValue"; Form:C1466.blob_fileObject.path)
	OBJECT SET TITLE:C194(*; "Blob_SizeValue"; String:C10(Form:C1466.blob_fileObject.size)+" bytes")
End if 