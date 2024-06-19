// Delete Button Object Method
// deletes rule object from Form.rulesCol and from the View Pro object

// declare variables
var $index; $curSheet : Integer
var $viewProObj : Object
var $curSheetName : Text

// first check if rules collection is empty
// then remove current item + set new current item
If (Form:C1466.rulesCol.length>0)
	$index:=Form:C1466.rulesCol.indexOf(Form:C1466.currentItem; 0)
	Form:C1466.rulesCol.remove($index)
	
	// set new current item of rules collection
	Case of 
			// the only item in collection is removed
		: (Form:C1466.rulesCol.length=0)
			Form:C1466.currentItem:=Null:C1517
			// last item is removed
		: ($index=Form:C1466.rulesCol.length)
			Form:C1466.currentItem:=Form:C1466.rulesCol[Form:C1466.rulesCol.length-1]
			LISTBOX SELECT ROW:C912(*; "rulesListBox"; Form:C1466.rulesCol.length)
			// first or middle item is removed
		: ($index<Form:C1466.rulesCol.length)
			Form:C1466.currentItem:=Form:C1466.rulesCol[$index]
			LISTBOX SELECT ROW:C912(*; "rulesListBox"; $index+1)
	End case 
	
	// get View Pro object
	$viewProObj:=VP Export to object("ViewProArea")
	$curSheet:=VP Get current sheet("ViewProArea")
	$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
	
	// attach to view pro object
	$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules:=Form:C1466.rulesCol
	
	// refresh the list box + highlight newly added rule
	If (Form:C1466.rulesCol.length>0)
		Form:C1466.rulesCol:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
		addFormRulesColProperties
	End if 
	
	// import into vp area
	VP IMPORT FROM OBJECT("ViewProArea"; $viewProObj)
End if 

