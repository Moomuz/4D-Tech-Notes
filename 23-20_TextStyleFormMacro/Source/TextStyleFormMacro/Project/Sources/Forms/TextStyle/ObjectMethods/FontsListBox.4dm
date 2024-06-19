// Fonts List Box Object Method
// changes the font of the sample text + adds the currently-selected font to the \
 current style in the form data
// enable/disable the bold and italic checkboxes depending on whether font includes \
 font style

Case of 
	: (FORM Event.code=On Selection Change)
		// declare variables
		ARRAY TEXT($stylesArray; 0)
		ARRAY TEXT($namesArray; 0)
		var $index; $fontStyleInteger : Integer
		
		//// apply the currently-selected font to the sample text + current style object
		OBJECT SET FONT(*; "SampleText"; Form.currentFont.fontName)
		Form.currentStyle.fontName:=Form.currentFont.fontName
		
		//// enable/disable font style checkboxes depending if font has attribute
		// get font style list of the currently-selected font
		FONT STYLE LIST(Form.currentFont.fontName; $stylesArray; $namesArray)  // $namesArray will not be used
		
		// bold checkbox
		$index:=Find in array($stylesArray; "Bold")
		If ($index#-1)
			// enable bold font style if font has property
			OBJECT SET ENABLED(*; "BoldCheckBox"; True)
		Else 
			// else, set bold property to false + set font style
			OBJECT SET ENABLED(*; "BoldCheckBox"; False)
			Form.currentStyle.fontStyle.bold:=False
			$fontStyleInteger:=calcFontStyleInt
			OBJECT SET FONT STYLE(*; "SampleText"; $fontStyleInteger)
		End if 
		
		// italic checkbox
		$index:=Find in array($stylesArray; "Italic")
		If ($index#-1)
			// enable italic font style if font has property
			OBJECT SET ENABLED(*; "ItalicCheckBox"; True)
		Else 
			// else, set italic property to false + set font style
			OBJECT SET ENABLED(*; "ItalicCheckBox"; False)
			Form.currentStyle.fontStyle.italic:=False
			$fontStyleInteger:=calcFontStyleInt
			OBJECT SET FONT STYLE(*; "SampleText"; $fontStyleInteger)
		End if 
		
		// underline checkbox will always be enabled (all fonts can be underlined)
End case 
