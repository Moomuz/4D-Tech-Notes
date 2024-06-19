// Text - File Handle Tab Control Object Method
// changes the "Text_FileHandleSubform" page according to the file handle mode selected

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		Case of 
				// read handle
			: (Self:C308->=1)
				EXECUTE METHOD IN SUBFORM:C1085("Text_FileHandleSubform"; "text_changeFileHandle"; *; 1)
				
				// write handle
			: (Self:C308->=2)
				EXECUTE METHOD IN SUBFORM:C1085("Text_FileHandleSubform"; "text_changeFileHandle"; *; 2)
				
				// append handle
			: (Self:C308->=3)
				EXECUTE METHOD IN SUBFORM:C1085("Text_FileHandleSubform"; "text_changeFileHandle"; *; 3)
		End case 
End case 