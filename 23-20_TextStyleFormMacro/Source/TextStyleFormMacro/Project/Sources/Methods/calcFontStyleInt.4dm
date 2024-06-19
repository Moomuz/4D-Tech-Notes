//%attributes = {}
// Calculate Font Style Integer Method
// gets the values from the font style checkboxes and calculates the integer \
 value to put into the OBJECT SET FONT STYLE command

// declare parameters
#DECLARE()->$fontStyleInteger : Integer
// set value to int value of plain font style
$fontStyleInteger:=Plain  // "Plain" has value of 0

// add int values for each font value attribute
If (Form.currentStyle.fontStyle.bold=True)
	$fontStyleInteger:=$fontStyleInteger+Bold  // "Bold" has a value of 1
End if 

If (Form.currentStyle.fontStyle.italic=True)
	$fontStyleInteger:=$fontStyleInteger+Italic  // "Italic" has a value of 2
End if 

If (Form.currentStyle.fontStyle.underline=True)
	$fontStyleInteger:=$fontStyleInteger+Underline  // "Underline" has a value of 4
End if 
