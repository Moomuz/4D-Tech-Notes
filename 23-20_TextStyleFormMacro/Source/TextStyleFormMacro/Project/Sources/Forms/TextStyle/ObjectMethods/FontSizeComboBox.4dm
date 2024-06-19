// Font Size Combo Box Object Method
// update current style in the form data after the font size is changed
// apply new font size to sample text

Case of 
		// "On After Edit" refers to when the user selects a predefined font size from the dropdown list
		// "On Data Change" refers to when the user inputs a custom number value in the combo box
	: (FORM Event.code=On Data Change) || (FORM Event.code=On After Edit)
		// update the "currentStyle" object in the form data
		Form.currentStyle.fontSize:=Form.fontSizes.currentValue
		
		// change font size of sample text
		OBJECT SET FONT SIZE(*; "SampleText"; Form.fontSizes.currentValue)
		
		// resizes the "SampleText" input box coordinates + mimics vertical center alignment based on the 
		// "SampleTextRectangle" background rectangle
		resizeSampleText
End case 