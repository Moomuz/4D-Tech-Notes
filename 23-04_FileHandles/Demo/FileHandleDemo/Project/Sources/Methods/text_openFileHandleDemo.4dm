//%attributes = {}
// Text - Open File Handle Demo Method
// opens the main file handle demo application (Text)

// declare variables
var $win_l : Integer
var $form_t : Text
var $formData : Object

// create form data object
$formData:=New object:C1471

// open form
$form_t:="Text_FileHandleDemo"
$win_l:=Open form window:C675($form_t)
DIALOG:C40($form_t; $formData)
CLOSE WINDOW:C154($win_l)
