// Blob - Write Handle Offset Set Button
// sets the write handle offset with the number value inputted by the user

//user inputs a valid value (less than file size)
If (Form:C1466.blob_writeHandleOffset<=Form:C1466.blob_fileObject.size)
	Form:C1466.blob_writeHandle.offset:=Form:C1466.blob_writeHandleOffset
	Form:C1466.blob_writeHandlePrevOffset:=Form:C1466.blob_writeHandleOffset
Else   // else, an alert window is displayed and the RH_offset field is reset to previous value (Form.RH_Offset remains unchanged)
	ALERT:C41("Your input reaches past the end of the file.\r\rFile size: "+String:C10(Form:C1466.blob_fileObject.size)+"\rYour input: "+String:C10(Form:C1466.blob_writeHandleOffset)+"\r\rPlease use a smaller value.")
	Form:C1466.blob_writeHandleOffset:=Form:C1466.blob_writeHandlePrevOffset
End if 
