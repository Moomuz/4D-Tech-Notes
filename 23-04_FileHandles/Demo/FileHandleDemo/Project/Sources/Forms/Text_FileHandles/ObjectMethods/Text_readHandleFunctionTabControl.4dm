// Text - Read Handle Tab Control Object Method
// changes the form page according to the tab selected

Case of 
	: (Self:C308->=1)  // readLine()
		// display read line button
		OBJECT SET VISIBLE:C603(*; "Text_ReadLineButton"; True:C214)
		
		// hide stopChar input and read text button
		OBJECT SET VISIBLE:C603(*; "Text_StopCharInput"; False:C215)
		OBJECT SET VISIBLE:C603(*; "Text_ReadTextButton"; False:C215)
	: (Self:C308->=2)  // readText()
		// hide read line button
		OBJECT SET VISIBLE:C603(*; "Text_ReadLineButton"; False:C215)
		
		// display stopChar input and read text button
		OBJECT SET VISIBLE:C603(*; "Text_StopCharInput"; True:C214)
		OBJECT SET VISIBLE:C603(*; "Text_ReadTextButton"; True:C214)
End case 