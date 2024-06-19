// Text - Write Handle Offset Set Button
// sets the write handle offset with the number value inputted by the user

//user inputs a valid value (less than file size)
If (Form:C1466.text_writeHandleOffset<=Form:C1466.text_fileObject.size)
	Form:C1466.text_writeHandle.offset:=Form:C1466.text_writeHandleOffset
	Form:C1466.text_writeHandlePrevOffset:=Form:C1466.text_writeHandleOffset
Else   // else, an alert window is displayed and the text_OffsetInput field is reset to previous value (Form.text_WriteHandleOffset remains unchanged)
	ALERT:C41("Your input reaches past the end of the file.\r\rFile size: "+String:C10(Form:C1466.text_fileObject.size)+"\rYour input: "+String:C10(Form:C1466.text_writeHandleOffset)+"\r\rPlease use a smaller value.")
	Form:C1466.text_writeHandleOffset:=Form:C1466.text_writeHandlePrevOffset
End if 
