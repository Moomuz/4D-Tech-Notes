//%attributes = {}
// Blob - Display Append Handle Propertes Method
// displays the properties of the append file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Blob_ModeValue"; Form:C1466.blob_appendHandle.mode)
OBJECT SET TITLE:C194(*; "Blob_CharsetValue"; Form:C1466.blob_appendHandle.charset)
OBJECT SET TITLE:C194(*; "Blob_EOFValue"; String:C10(Form:C1466.blob_appendHandle.eof))
OBJECT SET TITLE:C194(*; "Blob_BreakModeReadValue"; Form:C1466.blob_appendHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Blob_BreakModeWriteValue"; Form:C1466.blob_appendHandle.breakModeWrite)
Form:C1466.blob_appendHandleOffset:=Form:C1466.blob_appendHandle.offset