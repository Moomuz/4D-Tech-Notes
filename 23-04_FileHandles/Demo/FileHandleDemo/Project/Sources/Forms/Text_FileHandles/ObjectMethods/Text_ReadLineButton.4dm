// Text - Read Line Button Object Method
// reads a line from "FoxInSocks_Text.txt" and outputs to the "Text_ReadhandleOutput" text field on form

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// read line
		Form:C1466.text_readHandleOutput:=Form:C1466.text_readHandle.readLine()
		
		// update offset and previous offset values on form
		Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandle.offset
		Form:C1466.text_readHandlePrevOffset:=Form:C1466.text_readHandleOffset
End case 