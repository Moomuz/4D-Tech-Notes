//%attributes = {}
// Open Welcome Screen Method
// opens the "WelcomeScreen" form to start the demonstration

// declare variables
var $win_l : Integer
var $form_t : Text

// open form window
$form_t:="WelcomeScreen"
$win_l:=Open form window($form_t)
DIALOG($form_t)
CLOSE WINDOW($win_l)