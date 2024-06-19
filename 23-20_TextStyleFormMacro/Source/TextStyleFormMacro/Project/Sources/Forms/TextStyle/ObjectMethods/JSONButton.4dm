// Copy as JSON Button Object Method
// converts the current style to JSON text + attaches text to clipboard
// once copied to clipboard, can be pasted into .4dm/.css files or used in 4D code \
 using "Get text from pasteboard" command

// declare variable
var $currentStyleObj : Object

// create temporary object for .4DForm format of current style
$currentStyleObj:=New object

// add properties according to form object JSON properties
$currentStyleObj.fontFamily:=Form.currentStyle.fontName
$currentStyleObj.fontSize:=Form.currentStyle.fontSize
$currentStyleObj.stroke:=Form.currentStyle.fontColor
If (Form.currentStyle.fontStyle.bold=True)
	$currentStyleObj.fontWeight:="bold"
Else 
	$currentStyleObj.fontWeight:="normal"
End if 
If (Form.currentStyle.fontStyle.italic=True)
	$currentStyleObj.fontStyle:="italic"
Else 
	$currentStyleObj.fontStyle:="normal"
End if 
If (Form.currentStyle.fontStyle.underline=True)
	$currentStyleObj.textDecoration:="underline"
Else 
	$currentStyleObj.textDecoration:="normal"
End if 

// convert $currentStyleObj to string and set to clipboard
SET TEXT TO PASTEBOARD(JSON Stringify($currentStyleObj; *))