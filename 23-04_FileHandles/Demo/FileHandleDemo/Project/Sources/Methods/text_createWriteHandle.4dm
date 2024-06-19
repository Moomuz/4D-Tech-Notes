//%attributes = {}
// Text - Create Write Handle Method
// creates the write file handle for "FoxInSocks_Text.txt"
// sets the read handle properties on the "Write" tab of the form

// declare variables
var $optionsObj : Object

// create append file handle
Form:C1466.text_writeHandle:=Form:C1466.text_fileObject.open("write")

// or customize the handle using the "options" object parameter
$optionsObj:=New object:C1471
$optionsObj.mode:="write"
$optionsObj.charset:="UTF-8"
$optionsObj.breakModeRead:=Document with CRLF:K24:20
$optionsObj.breakModeWrite:=Document with CRLF:K24:20
//Form.text_writeHandle:=Form.text_fileObject.open($optionsObj)

// set offset value (when offset is in middle of file)
If (Form:C1466.text_writeHandleOffset#1)
	Form:C1466.text_writeHandle.offset:=Form:C1466.text_writeHandleOffset
	Form:C1466.text_writeHandlePrevOffset:=Form:C1466.text_writeHandleOffset
End if 





