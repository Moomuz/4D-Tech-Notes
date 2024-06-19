// Imported/Dynamic Sheets Button Method
// opens the Selector Types form

// declare variables
var $win_l : Integer
var $form_t : Text
var $formData : Object

// create form object
$formData:=New object
$formData.jsonPtr:="\"css\": {\r\t\"$ref\" : \"/RESOURCES/cssDirectory.json#/css1\"\r},"  // json pointer to add to form definition
$formData.cssDirContent:="{\"\r\t\"css1\" : [\r\t\t\"/LOGS/ImportedDynamicSheets.css\"\r\t]\r}"

// open the form
$form_t:="ImportedDynamicSheets"
$win_l:=Open form window($form_t)
DIALOG($form_t; $formData)
CLOSE WINDOW($win_l)
