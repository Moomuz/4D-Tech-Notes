// My Rule Button Object Method
// here, you can create your own conditional format rule object, with the skeleton code below

// declare variables
var $viewProObj; $condFormatObj; $ruleObj : Object
var $curSheet : Integer
var $curSheetName : Text
var $rangesCol : Collection

Case of 
	: (Form event code:C388=On Clicked:K2:4)
		// get View Pro object
		$viewProObj:=VP Export to object("ViewProArea")
		$curSheet:=VP Get current sheet("ViewProArea")
		$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
		
		// if conditionalFormats property does not exist
		If (Undefined:C82($viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats)=True:C214)
			// create the conditionalFormats property and add to View Pro object
			$condFormatObj:=New object:C1471
			$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats:=New object:C1471
			$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules:=New collection:C1472
		End if 
		
		// **ADD YOUR OWN CODE HERE**
		// create your own rule object here
		// use the "Conditional Formatting Rule Types" document (included in tech note package) \
									 for the properties you need to configure for each rule type
		//$ruleObj:=New object
		//$ruleObj.ruleType:=  // establishes rule type
		////$ruleObj.style:=  // create your own style object, not all rule types require this
		
		//// create ranges collection
		//$rangesCol:=New collection
		//$rangeObj:=New object
		//$rangeObj.col:=
		//$rangeObj.colCount:=
		//$rangeObj.row:=
		//$rangeObj.rowCount:=
		//$rangesCol.insert(1; $rangeObj)
		//$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object
		
		// push new rule into rules collection (insert at end)
		// **items at end of collection have most priority
		$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules.push($ruleObj)
		
		// refresh the list box + highlight newly added rule
		Form:C1466.rulesCol:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
		addFormRulesColProperties
		LISTBOX SELECT ROW:C912(*; "rulesListBox"; Form:C1466.rulesCol.length)
		Form:C1466.currentItem:=Form:C1466.rulesCol[Form:C1466.rulesCol.length-1]
		
		// export back to View Pro
		VP IMPORT FROM OBJECT("ViewProArea"; $viewProObj)
End case 
