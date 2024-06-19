//%attributes = {}
// Text - Display Write Handle Propertes Method
// displays the properties of the write file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Text_ModeValue"; Form:C1466.text_writeHandle.mode)
OBJECT SET TITLE:C194(*; "Text_CharsetValue"; Form:C1466.text_writeHandle.charset)
OBJECT SET TITLE:C194(*; "Text_EOFValue"; String:C10(Form:C1466.text_writeHandle.eof))
OBJECT SET TITLE:C194(*; "Text_BreakModeReadValue"; Form:C1466.text_writeHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Text_BreakModeWriteValue"; Form:C1466.text_writeHandle.breakModeWrite)
Form:C1466.text_writeHandleOffset:=Form:C1466.text_writeHandle.offset