// Text - Read Handle Offset Set Button
// sets the read handle offset with the number value inputted by the user

//user inputs a valid value (less than file size)
If (Form:C1466.text_readHandleOffset<=Form:C1466.text_fileObject.size)
	Form:C1466.text_readHandle.offset:=Form:C1466.text_readHandleOffset
	Form:C1466.text_readHandlePrevOffset:=Form:C1466.text_readHandleOffset
Else   // else, an alert window is displayed and the text_OffsetInput field is reset to previous value (Form.text_readHandleOffset remains unchanged)
	ALERT:C41("Your input reaches past the end of the file.\r\rFile size: "+String:C10(Form:C1466.text_fileObject.size)+"\rYour input: "+String:C10(Form:C1466.text_readHandleOffset)+"\r\rPlease use a smaller value.")
	Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandlePrevOffset
End if 
