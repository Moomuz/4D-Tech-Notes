// Italic Check Box Object Method
// enables/disables italic font style to the sample text
// **does not directly affect the italic property in the current style object \
 (already handled inherently by 4D)**

Case of 
	: (FORM Event.code=On Clicked)
		// declare variable
		var $fontStyleInteger : Integer
		
		// calculate integer value to put into OBJECT SET FONT STYLE command
		$fontStyleInteger:=calcFontStyleInt
		
		// set font style
		OBJECT SET FONT STYLE(*; "SampleText"; $fontStyleInteger)
End case 
