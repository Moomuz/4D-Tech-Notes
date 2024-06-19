// Text - Write Line Button Object Method (Write)
// writes the user input to "FoxInSocks_Text.txt" at the write handle offset (inserts new line character)

// declare variables
var $input : Text

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// get user input
		$input:=Form:C1466.text_writeLineInput
		
		// write directly to file
		Form:C1466.text_writeHandle.writeLine($input)
		
		// refresh file content field
		Form:C1466.text_fileContent:=Form:C1466.text_fileObject.getText()
		
		// update write handle offset
		Form:C1466.text_writeHandleOffset:=Form:C1466.text_writeHandle.offset
		Form:C1466.text_writeHandlePrevOffset:=Form:C1466.text_writeHandleOffset
End case 

