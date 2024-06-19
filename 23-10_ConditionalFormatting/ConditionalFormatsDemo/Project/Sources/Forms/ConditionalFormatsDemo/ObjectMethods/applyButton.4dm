// Apply New Conditional Format Rule Button Object Method
// applies a new conditional format rule to the current sheet in the View Pro area

// declare variables
var $viewProObj; $condFormatObj; $ruleObj; $statesObj : Object
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
		
		// create rule object according to current rule type, configure other properties if needed
		Case of 
			: (Form:C1466.curRuleType="Average Rule")
				$ruleObj:=createAverageRuleObject
			: (Form:C1466.curRuleType="Cell Value Rule")
				$ruleObj:=createCellValueRuleObject
			: (Form:C1466.curRuleType="Column State Rule")
				$ruleObj:=createColumnStateRuleObject
				// configure "states" property
				$statesObj:=$viewProObj.spreadJS.sheets[$curSheetName].states
				$statesObj:=addNewState($statesObj; $ruleObj.state; $ruleObj.ruleType)
			: (Form:C1466.curRuleType="Data Bar Rule")
				$ruleObj:=createDataBarRuleObject
			: (Form:C1466.curRuleType="Date Occurring Rule")
				$ruleObj:=createDateOccurringRuleObject
			: (Form:C1466.curRuleType="Duplicate Rule")
				$ruleObj:=createDuplicateRuleObject
			: (Form:C1466.curRuleType="Formula Rule")
				$ruleObj:=createFormulaRuleObject
			: (Form:C1466.curRuleType="Formula Rule - 4D Method")
				$ruleObj:=create4DMethodFormulaRuleObject
			: (Form:C1466.curRuleType="Icon Set Rule - Easy")
				$ruleObj:=createEasyIconSetRuleObject
			: (Form:C1466.curRuleType="Icon Set Rule - Custom")
				$ruleObj:=createCustomIconSetRuleObject
			: (Form:C1466.curRuleType="Row State Rule")
				$ruleObj:=createRowStateRuleObject
				// configure "states" property
				$statesObj:=$viewProObj.spreadJS.sheets[$curSheetName].states
				$statesObj:=addNewState($statesObj; $ruleObj.state; $ruleObj.ruleType)
			: (Form:C1466.curRuleType="Specific Text Rule")
				$ruleObj:=createSpecificTextRuleObject
			: (Form:C1466.curRuleType="Three Scale Rule")
				$ruleObj:=createThreeScaleRuleObject
			: (Form:C1466.curRuleType="Top 10 Rule")
				$ruleObj:=createTop10RuleObject
			: (Form:C1466.curRuleType="Two Scale Rule")
				$ruleObj:=createTwoScaleRuleObject
			: (Form:C1466.curRuleType="Unique Rule")
				$ruleObj:=createUniqueRuleObject
		End case 
		
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
