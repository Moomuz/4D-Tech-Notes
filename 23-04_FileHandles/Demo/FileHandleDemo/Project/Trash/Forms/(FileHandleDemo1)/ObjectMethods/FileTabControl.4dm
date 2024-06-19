// File Tab Control Object Method
// changes the form page according to the tab selected

Case of 
	: (Self:C308->=1)  // Text
		FORM GOTO PAGE:C247(1; *)
	: (Self:C308->=2)  // Blob
		FORM GOTO PAGE:C247(2; *)
End case 