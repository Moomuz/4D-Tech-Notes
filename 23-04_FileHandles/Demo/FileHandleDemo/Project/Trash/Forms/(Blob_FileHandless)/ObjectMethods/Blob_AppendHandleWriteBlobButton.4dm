// Blob - Write Blob Button Object Method (Append)
// converts the text user input to a blob value
// write this blob value to "FoxInSocks_Blob.txt" at the append handle offset

// declare variables
var $textInput; $blobValue : Text
var $blob : Blob
var $blobObj : Object
var $count : Integer

// capture user text input
$textInput:=Form:C1466.blob_appendHandleTextInput

// convert to blob and blob object
TEXT TO BLOB:C554($textInput; $blob)
$blobObj:=4D:C1709.Blob.new($blob)

$blobValue:=""
// display blob value in WH_blobValueInput field
For ($count; 0; BLOB size:C605($blob)-1)  // get BLOB value
	$test:=$blob{$count}
	$blobValue:=$blobValue+String:C10($blob{$count})+" "
End for 

// print output to blob value text field in form
Form:C1466.blob_appendHandleBlobInput:=$blobValue

// write blob to file + update fileContent field
Form:C1466.blob_appendHandle.writeBlob($blobObj)
blob_displayFileContent

// update offset value
Form:C1466.blob_appendHandleOffset:=Form:C1466.blob_appendHandle.offset


