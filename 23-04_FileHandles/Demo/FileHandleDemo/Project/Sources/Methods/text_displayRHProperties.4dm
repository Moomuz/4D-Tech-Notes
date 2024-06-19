//%attributes = {}
// Text - Display Read Handle Propertes Method
// displays the properties of the read file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Text_ModeValue"; Form:C1466.text_readHandle.mode)
OBJECT SET TITLE:C194(*; "Text_CharsetValue"; Form:C1466.text_readHandle.charset)
OBJECT SET TITLE:C194(*; "Text_EOFValue"; String:C10(Form:C1466.text_readHandle.eof))
OBJECT SET TITLE:C194(*; "Text_BreakModeReadValue"; Form:C1466.text_readHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Text_BreakModeWriteValue"; Form:C1466.text_readHandle.breakModeWrite)
Form:C1466.text_readHandleOffset:=Form:C1466.text_readHandle.offset