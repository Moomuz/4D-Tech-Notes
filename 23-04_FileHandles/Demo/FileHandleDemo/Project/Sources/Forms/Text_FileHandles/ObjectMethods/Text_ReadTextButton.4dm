// Text - Read Text Button Object Method
// reads section of file according to number of bytes inputted by user
// outputs to "Text_ReadHandleOutput" text field on form

// declare variables
var $text : Text

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// read from file using user input
		If (Form:C1466.text_stopCharInput#"")
			$text:=Form:C1466.text_readHandle.readText(Form:C1466.text_stopCharInput)
			
			// find stopChar in file
			Case of 
					// stopChar is found at beginning of file (has same conditions as if stopChar was not found in file)
				: ($text="") & (Form:C1466.text_readHandle.offset=1)
					// set output to "Text_readHandleOutput" text field on form
					Form:C1466.text_readHandleOutput:=$text
					
					// update offset and previous offset values 
					Form:C1466.text_readHandle.offset:=Form:C1466.text_readHandle.offset+Length:C16(Form:C1466.text_stopCharInput)
					Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandle.offset
					Form:C1466.text_readHandlePrevOffset:=Form:C1466.text_readHandleOffset
					
					// stopChar is in middle/at end of file (general case)
				: ($text#"")
					// set output to "Text_readHandleOutput" text field on form
					Form:C1466.text_readHandleOutput:=$text
					
					// update offset and previous offset values 
					Form:C1466.text_readHandle.offset:=Form:C1466.text_readHandle.offset+Length:C16(Form:C1466.text_stopCharInput)
					Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandle.offset
					Form:C1466.text_readHandlePrevOffset:=Form:C1466.text_readHandleOffset
					
					// stopChar is not in file at all
				: ($text="")
					ALERT:C41("\""+Form:C1466.text_stopCharInput+"\" was not found in the file. The offset will remain unchanged.")
					Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandlePrevOffset
			End case 
		End if 
End case 
