// Blob - Write Blob Button Object Method (Write)
// converts the text user input to a blob value
// write this blob value to "FoxInSocks_Blob.txt" at the write handle offset

// declare variables
var $textInput; $blobValue : Text
var $blob : Blob
var $blobObj : Object
var $count : Integer

// capture user text input
$textInput:=Form:C1466.blob_writeHandleTextInput

// convert to blob and blob object
TEXT TO BLOB:C554($textInput; $blob)
$blobObj:=4D:C1709.Blob.new($blob)

$blobValue:=""
// display blob value in Blob_WriteHandleBlobInput field
For ($count; 0; BLOB size:C605($blob)-1)  // get BLOB value
	$blobValue:=$blobValue+String:C10($blob{$count})+" "
End for 

// print output to blob value text field in form
Form:C1466.blob_writeHandleBlobInput:=$blobValue

// write blob to file + update fileContent field
Form:C1466.blob_writeHandle.writeBlob($blobObj)
blob_displayFileContent

// update offset value
Form:C1466.blob_writeHandleOffset:=Form:C1466.blob_writeHandle.offset


