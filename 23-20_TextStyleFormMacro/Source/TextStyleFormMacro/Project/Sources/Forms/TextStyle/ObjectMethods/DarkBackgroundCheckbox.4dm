// Dark Background Checkbox Object Method
// toggles between white and black backgrounds for the sample text

Case of 
	: (FORM Event.code=On Clicked)
		// checkbox is checked, change to black background
		If (Form.sampleTextDarkBG=True)
			OBJECT SET RGB COLORS(*; "SampleTextRectangle"; ""; "#000000")
		Else   // checkbox is unchecked, change to white background
			OBJECT SET RGB COLORS(*; "SampleTextRectangle"; ""; "#FFFFFF")
		End if 
End case 
