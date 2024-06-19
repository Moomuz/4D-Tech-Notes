//%attributes = {}
// Text - Create Append Handle Method
// creates the append file handle for "FoxInSocks_Text.txt"
// sets the append handle properties on the "Append" tab of the form

// declare variables
var $optionsObj : Object

// create append file handle
Form:C1466.text_appendHandle:=Form:C1466.text_fileObject.open("append")

// or customize the handle using the "options" object parameter
$optionsObj:=New object:C1471
$optionsObj.mode:="append"
$optionsObj.charset:="UTF-8"
$optionsObj.breakModeRead:=Document with CRLF:K24:20
$optionsObj.breakModeWrite:=Document with CRLF:K24:20
//Form.text_appendHandle:=Form.text_fileObject.open($optionsObj)

// set offset value (when offset is in middle of file)
If (Form:C1466.text_appendHandleOffset#1)
	Form:C1466.text_appendHandle.offset:=Form:C1466.text_appendHandleOffset
	Form:C1466.text_appendHandlePrevOffset:=Form:C1466.text_appendHandleOffset
End if 



