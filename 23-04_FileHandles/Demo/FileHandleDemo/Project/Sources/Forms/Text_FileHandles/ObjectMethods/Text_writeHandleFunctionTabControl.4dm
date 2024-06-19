// Text - Write Handle Tab Control Object Method
// changes the form page according to the tab selected

Case of 
	: (Self:C308->=1)  // writeLine()
		// display write line input + button
		OBJECT SET VISIBLE:C603(*; "Text_WriteLineInput"; True:C214)
		OBJECT SET VISIBLE:C603(*; "Text_WriteLineButton"; True:C214)
		
		// hide write text input + button
		OBJECT SET VISIBLE:C603(*; "Text_WriteTextInput"; False:C215)
		OBJECT SET VISIBLE:C603(*; "Text_WriteTextButton"; False:C215)
	: (Self:C308->=2)  // writeText()
		// hide write line input + button
		OBJECT SET VISIBLE:C603(*; "Text_WriteLineInput"; False:C215)
		OBJECT SET VISIBLE:C603(*; "Text_WriteLineButton"; False:C215)
		
		// display write text input + button
		OBJECT SET VISIBLE:C603(*; "Text_WriteTextInput"; True:C214)
		OBJECT SET VISIBLE:C603(*; "Text_WriteTextButton"; True:C214)
End case 