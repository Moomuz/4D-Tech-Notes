//%attributes = {}
// Blob - Create Read Handle Method
// creates the read file handle for "FoxInSocks_Blob.txt"
// sets the read handle properties on the "Read" tab of the form

// declare variables
var $optionsObj : Object

// create read file handle
Form:C1466.blob_readHandle:=Form:C1466.blob_fileObject.open("read")

// or customize the handle using the "options" object parameter
$optionsObj:=New object:C1471
$optionsObj.mode:="read"
$optionsObj.charset:="UTF-8"
$optionsObj.breakModeRead:=Document with CRLF:K24:20
$optionsObj.breakModeWrite:=Document with CRLF:K24:20
//Form.blob_readHandle:=Form.blob_fileObject.open($optionsObj)

// set offset value
Form:C1466.blob_readHandleOffset:=Form:C1466.blob_readHandle.offset

// set previous offset to current offset value (used in error handling)
Form:C1466.blob_readHandlePrevOffset:=Form:C1466.blob_readHandle.offset



