//%attributes = {}
// Blob - Create Append Handle Method
// creates the append file handle for "FoxInSocks_Blob.txt"
// sets the append handle properties on the "Append" tab of the form

// declare variables
var $optionsObj : Object

// create append file handle
Form:C1466.blob_appendHandle:=Form:C1466.blob_fileObject.open("append")

// or customize the handle using the "options" object parameter
$optionsObj:=New object:C1471
$optionsObj.mode:="append"
$optionsObj.charset:="UTF-8"
$optionsObj.breakModeRead:=Document with CRLF:K24:20
$optionsObj.breakModeWrite:=Document with CRLF:K24:20
//Form.blob_appendHandle:=Form.blob_fileObject.open($optionsObj)

// set offset value (when offset is in middle of file)
If (Form:C1466.blob_appendHandleOffset#1)
	Form:C1466.blob_appendHandle.offset:=Form:C1466.blob_appendHandleOffset
	Form:C1466.blob_appendHandlePrevOffset:=Form:C1466.blob_appendHandleOffset
End if 



