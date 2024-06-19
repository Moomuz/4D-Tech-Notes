//%attributes = {}
// Blob - Change File Handle Method
// changes the "Blob_FileHandles" page according to the file handle selected in the "Blob_FileHandleTabControl" tab control

// input parameter
#DECLARE($select : Integer)

Case of 
		// read mode
	: ($select=1)
		Form:C1466.blob_appendHandle:=Null:C1517  // close write and append handles first
		Form:C1466.blob_writeHandle:=Null:C1517
		FORM GOTO PAGE:C247(1; *)
		blob_displayRHProperties
		
		// write mode
	: ($select=2)
		Form:C1466.blob_appendHandle:=Null:C1517  // close append handle first
		blob_createWriteHandle
		FORM GOTO PAGE:C247(2; *)
		blob_displayWHProperties
		
		// append mode
	: ($select=3)
		Form:C1466.blob_writeHandle:=Null:C1517  // close write handle first
		blob_createAppendHandle
		FORM GOTO PAGE:C247(3; *)
		blob_displayAHProperties
End case 