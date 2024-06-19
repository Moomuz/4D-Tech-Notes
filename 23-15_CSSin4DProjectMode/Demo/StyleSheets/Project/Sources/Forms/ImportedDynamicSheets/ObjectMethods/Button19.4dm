// Refresh Form Button Object Method
// refreshes the subform

Case of 
	: (FORM Event.code=On Clicked)
		// refresh the subform container to reflect changes in the style sheet
		OBJECT SET SUBFORM(*; "subformArea"; "ImportedDynamicSheets_Subform")
End case 