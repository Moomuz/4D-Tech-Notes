//%attributes = {}
// Text - Change File Handle Method
// changes the "Text_FileHandles" page according to the file handle selected in the "Text_FileHandleTabControl" tab control

// input parameter
#DECLARE($select : Integer)

Case of 
		// read mode
	: ($select=1)
		Form:C1466.text_appendHandle:=Null:C1517  // close write and append handles first
		Form:C1466.text_writeHandle:=Null:C1517
		FORM GOTO PAGE:C247(1; *)
		text_displayRHProperties
		
		// write mode
	: ($select=2)
		Form:C1466.text_appendHandle:=Null:C1517  // close append handle first
		text_createWriteHandle
		FORM GOTO PAGE:C247(2; *)
		text_displayWHProperties
		
		// append mode
	: ($select=3)
		Form:C1466.text_writeHandle:=Null:C1517  // close write handle first
		text_createAppendHandle
		FORM GOTO PAGE:C247(3; *)
		text_displayAHProperties
End case 