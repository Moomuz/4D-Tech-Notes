// Welcome Screen Form Method
// enables/disables the "CSS Media Query" button depending on the platform 4D is running on

Case of 
	: (FORM Event.code=On Load)
		// check if running on Mac; if not, disable "CSS Media Query" Button
		If (Is macOS=False)
			OBJECT SET ENABLED(*; "mediaQueryButton"; False)
		End if 
End case 