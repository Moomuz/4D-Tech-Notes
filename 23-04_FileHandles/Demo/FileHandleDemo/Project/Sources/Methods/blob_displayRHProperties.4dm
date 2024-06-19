//%attributes = {}
// Blob - Display Read Handle Propertes Method
// displays the properties of the read file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Blob_ModeValue"; Form:C1466.blob_readHandle.mode)
OBJECT SET TITLE:C194(*; "Blob_CharsetValue"; Form:C1466.blob_readHandle.charset)
OBJECT SET TITLE:C194(*; "Blob_EOFValue"; String:C10(Form:C1466.blob_readHandle.eof))
OBJECT SET TITLE:C194(*; "Blob_BreakModeReadValue"; Form:C1466.blob_readHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Blob_BreakModeWriteValue"; Form:C1466.blob_readHandle.breakModeWrite)
Form:C1466.blob_readHandleOffset:=Form:C1466.blob_readHandle.offset