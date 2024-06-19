// Text - Write Text Button Object Method (Append)
// writes the user input to "FoxInSocks_Text.txt" at the append handle offset (does not insert new line character)

// declare variables
var $input : Text

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// get user input
		$input:=Form:C1466.text_writeTextInput1
		
		// write directly to file
		Form:C1466.text_appendHandle.writeText($input)
		
		// refresh file content field
		Form:C1466.text_fileContent:=Form:C1466.text_fileObject.getText()
		
		// update write handle offset and previous offset
		Form:C1466.text_appendHandleOffset:=Form:C1466.text_appendHandle.offset
		Form:C1466.text_appendHandlePrevOffset:=Form:C1466.text_appendHandleOffset
End case 

