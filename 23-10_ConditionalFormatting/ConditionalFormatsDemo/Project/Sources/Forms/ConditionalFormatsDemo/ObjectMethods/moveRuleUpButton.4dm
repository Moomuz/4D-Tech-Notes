// Move Rule Up Button
// moves the current rule up the collection by one, changing it's rule priority/precedence

// declare variables
var $tempObj; $viewProObj : Object
var $curSheet : Integer
var $curSheetName : Text

// if the currently selected rule is not the first item in the collection
If (Form:C1466.curItemPos>1)
	// save current item into a temporary variable
	$tempObj:=Form:C1466.currentItem
	
	// delete current item
	Form:C1466.rulesCol.remove(Form:C1466.curItemPos-1; 1)
	
	// insert before previous item
	Form:C1466.rulesCol.insert(Form:C1466.curItemPos-2; Form:C1466.currentItem)
	
	// refresh the list box highlight
	LISTBOX SELECT ROW:C912(*; "rulesListBox"; Form:C1466.curItemPos-1)
	
	// get View Pro object
	$viewProObj:=VP Export to object("ViewProArea")
	$curSheet:=VP Get current sheet("ViewProArea")
	$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
	
	// export back to View Pro
	$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules:=Form:C1466.rulesCol
	VP IMPORT FROM OBJECT("ViewProArea"; $viewProObj)
End if 
