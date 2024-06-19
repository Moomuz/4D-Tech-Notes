// File Handle Demo Form Method
// main driver of the application
// handles on load functions and tab control functions

Case of 
	: (Form event code:C388=On Load:K2:1)
		// load "FoxInSocks_Text.txt" and "FoxInSocks_Blob.txt" into 4D as File objects
		text_loadFile
		
		// text file handles
		
		// set offset values in form data (since offsets do not get created until the file handle is created)
		// write and append handles get created once their functions are select in the "Text_FileHandleTabControl" tab control object
		Form:C1466.text_readHandleOffset:=1
		Form:C1466.text_writeHandleOffset:=1
		Form:C1466.text_appendHandleOffset:=1
		
		// create just the read handle
		// write and append handles are created every time each function is created
		// 1 write handle and 1 append handle cannot exist on the same file at the same time
		EXECUTE METHOD IN SUBFORM:C1085("Text_FileHandleSubform"; "text_createReadHandle")
		
		// display read handle properties (default handle on startup)
		EXECUTE METHOD IN SUBFORM:C1085("Text_FileHandleSubform"; "text_displayRHProperties")
End case 
