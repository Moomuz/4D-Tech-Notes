// Selector Type Button Method
// opens the Selector Types form

// declare variables
var $win_l : Integer
var $form_t : Text
var $formData : Object

// create form object
$formData:=New object

// open the form
$form_t:="SelectorTypes"
$win_l:=Open form window($form_t)
DIALOG($form_t)
CLOSE WINDOW($win_l)
