//%attributes = {}
// Resize Sample Text Method
// mimics vertical center align for the  sample text (since there is no inherent \
 property for input boxes)

// declare variables
var $left; $top; $right; $bottom; $newWidth; $newHeight; $rectHeight; $topBottomMargins : Integer

// get coordinates of rectangle background behind sample text
OBJECT GET COORDINATES(*; "SampleTextRectangle"; $left; $top; $right; $bottom)

// resize height of text box
$newHeight:=Form.currentStyle.fontSize*1.5
OBJECT MOVE(*; "SampleText"; 0; 0; $right-$left; $newHeight)

// get top and bottom margins
$rectHeight:=$bottom-$top
$topBottomMargins:=($rectHeight-$newHeight)/2

// translate text box
// if the sample text is larger than the rectangle area, set the sample text area to the size of rectangle
If (Form.currentStyle.fontSize<$rectHeight)
	OBJECT MOVE(*; "SampleText"; $left; $top+$topBottomMargins; $right; $top+$topBottomMargins+$newHeight; *)
Else 
	OBJECT MOVE(*; "SampleText"; $left; $top; $right; $top+$rectHeight; *)
End if 
