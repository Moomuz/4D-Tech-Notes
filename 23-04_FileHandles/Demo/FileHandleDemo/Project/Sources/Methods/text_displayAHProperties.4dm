//%attributes = {}
// Text - Display Append Handle Propertes Method
// displays the properties of the append file handle on the form

// set properties on form
OBJECT SET TITLE:C194(*; "Text_ModeValue"; Form:C1466.text_appendHandle.mode)
OBJECT SET TITLE:C194(*; "Text_CharsetValue"; Form:C1466.text_appendHandle.charset)
OBJECT SET TITLE:C194(*; "Text_EOFValue"; String:C10(Form:C1466.text_appendHandle.eof))
OBJECT SET TITLE:C194(*; "Text_BreakModeReadValue"; Form:C1466.text_appendHandle.breakModeRead)
OBJECT SET TITLE:C194(*; "Text_BreakModeWriteValue"; Form:C1466.text_appendHandle.breakModeWrite)
Form:C1466.text_appendHandleOffset:=Form:C1466.text_appendHandle.offset