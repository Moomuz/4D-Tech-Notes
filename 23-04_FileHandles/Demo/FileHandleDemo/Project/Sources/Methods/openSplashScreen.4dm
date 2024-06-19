//%attributes = {}
// Open Splash Screen Method
// opens the splash screen form

var $win_l : Integer
var $form_t : Text

$form_t:="SplashScreen"
$win_l:=Open form window:C675($form_t)

DIALOG:C40($form_t)
CLOSE WINDOW:C154($win_l)
