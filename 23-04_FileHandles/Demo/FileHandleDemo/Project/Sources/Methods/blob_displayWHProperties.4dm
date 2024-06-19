//%attributes = {}
// Blob - Display Write Handle Propertes Method
// displays the properties of the write file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Blob_ModeValue"; Form:C1466.blob_writeHandle.mode)
OBJECT SET TITLE:C194(*; "Blob_CharsetValue"; Form:C1466.blob_writeHandle.charset)
OBJECT SET TITLE:C194(*; "Blob_EOFValue"; String:C10(Form:C1466.blob_writeHandle.eof))
OBJECT SET TITLE:C194(*; "Blob_BreakModeReadValue"; Form:C1466.blob_writeHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Blob_BreakModeWriteValue"; Form:C1466.blob_writeHandle.breakModeWrite)
Form:C1466.text_writeHandleOffset:=Form:C1466.blob_writeHandle.offset