//%attributes = {}
// Blob - Create Write Handle Method
// creates the write file handle for "FoxInSocks_Blob.txt"
// sets the read handle properties on the "Write" tab of the form

// declare variables
var $optionsObj : Object

// create write file handle
Form:C1466.blob_writeHandle:=Form:C1466.blob_fileObject.open("write")

// or customize the handle using the "options" object parameter
$optionsObj:=New object:C1471
$optionsObj.mode:="write"
$optionsObj.charset:="UTF-8"
$optionsObj.breakModeRead:=Document with CRLF:K24:20
$optionsObj.breakModeWrite:=Document with CRLF:K24:20
//Form.blob_writeHandle:=Form.blob_fileObject.open($optionsObj)

// set offset value (when offset is in middle of file)
If (Form:C1466.blob_writeHandleOffset#1)
	Form:C1466.blob_writeHandle.offset:=Form:C1466.blob_writeHandleOffset
	Form:C1466.blob_writeHandlePrevOffset:=Form:C1466.blob_writeHandleOffset
End if 






