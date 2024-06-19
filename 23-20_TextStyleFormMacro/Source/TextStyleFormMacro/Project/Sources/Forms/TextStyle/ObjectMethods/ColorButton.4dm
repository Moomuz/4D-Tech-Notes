// Button Object Method
// invisible button that opens the Color Picker dialog with "Select RGB color" command
// converts the chosen color into hexadecimal value to use with "OBJECT SET RGB COLORS" command

Case of 
	: (FORM Event.code=On Clicked)
		// declare variables
		var $rgbInteger : Integer
		var $string; $hexvalue : Text
		
		// open color picker for user to choose color
		$rgbInteger:=Select RGB color(hexToRGBInt(Form.currentStyle.fontColor))
		
		// if color was successfully chosen, get RGB integer value + convert to hexdecimal value
		If (OK=1)
			// convert to "0x0000" or "0x00000000" format
			$string:=String($rgbInteger; "&x")
			
			// add extra 0's if "0x0000" format
			If (Length($string)<10)
				$string:="0x00"+Substring($string; 3)
			End if 
			
			// remove leading 0's and add "#" to complete hexadecimal value
			If (Length($string)=8)
				$hexvalue:="#"+Substring($string; 3)
			Else 
				$hexValue:="#"+Substring($string; 5)
			End if 
		End if 
		
		// add selected color to form data
		Form.currentStyle.fontColor:=$hexValue
		
		// set color to color input and sample text
		OBJECT SET RGB COLORS(*; "ColorPickerRectangle"; "#000000"; Form.currentStyle.fontColor)
		OBJECT SET RGB COLORS(*; "SampleText"; Form.currentStyle.fontColor)
End case 