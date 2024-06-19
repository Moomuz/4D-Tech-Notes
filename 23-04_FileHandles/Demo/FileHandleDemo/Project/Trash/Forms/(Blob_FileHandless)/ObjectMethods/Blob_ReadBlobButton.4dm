// Blob - Read Blob Button Object Method
// reads section of "FoxInSocks_Blob.txt" according to number of bytes inputted by user \
 and outputs to "Blob_readHandleOutput" text field on form

// declare variables
var $bytesInput; $fileSize; $sum; $count : Real
var $blob : Object
var $output : Text

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// get user input and size of file
		$bytesInput:=Num:C11(Form:C1466.blob_bytesInput)
		$fileSize:=Form:C1466.blob_fileObject.size
		
		// read from file
		If (($bytesInput+Form:C1466.blob_readHandleOffset)<$fileSize)
			$blob:=Form:C1466.blob_readHandle.readBlob($bytesInput)  // get 4D.Blob object
			$output:="4D.Blob:\r"+JSON Stringify:C1217($blob)+"\r\rBLOB value:\r"  // convert object to string
			
			For ($count; 0; $bytesInput-1)  // get BLOB value
				$output:=$output+String:C10($blob[$count])+" "
			End for 
			
			// print output to output text field in form
			Form:C1466.blob_readHandleOutput:=$output
			
			// highlight text in original file content text field
			$length:=Length:C16($output)
			HIGHLIGHT TEXT:C210(*; "FileContent"; 1; $length)
			
			// update offset
			Form:C1466.blob_readHandleOffset:=Form:C1466.blob_readHandle.offset
			
		Else   // else, display error message
			ALERT:C41("Your input reaches past the end of the file.\r\rFile size: "+String:C10($fileSize)+"\rOffset value + your input: "+String:C10($sum)+"\r\rPlease use a smaller value.")
		End if 
End case 
