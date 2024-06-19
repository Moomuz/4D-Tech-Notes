//%attributes = {}
// Blob - Display File Content Method
// displays the entire content of "FoxInSocks_Blob.txt" in the "Blob_FileContent" text field

// declare variables
var $blobObject : Object
var $output : Text
var $count : Integer

// get 4D.Blob object
$blobObject:=Form:C1466.blob_fileObject.getContent()

// iterate through collection of bytes and concatenate to output string
$output:=""
For ($count; 0; $blobObject.size-1)  // get BLOB value
	$output:=$output+String:C10($blobObject[$count])+" "
End for 

// print output to "Blob_FileContent" text field on form
Form:C1466.blob_fileContent:=$output