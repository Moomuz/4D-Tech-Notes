//%attributes = {}
// Open Demo Method
// opens the "ConditionalFormatsDemo" form to run the application

// declare variables
var $win_l : Integer
var $form_t : Text
var $formData : Object

// open form window
$form_t:="ConditionalFormatsDemo"
$win_l:=Open form window:C675($form_t)
$formData:=New object:C1471  // establish form data
DIALOG:C40($form_t; $formData)
CLOSE WINDOW:C154($win_l)