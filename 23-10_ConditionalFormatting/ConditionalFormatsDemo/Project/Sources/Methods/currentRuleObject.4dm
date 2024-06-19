//%attributes = {}
// Current Rule Structure Method
// returns a JSON string (prettified) of the currently selected rule
// data source = "ConditionalFormats" property of the View Pro object, \
 since the objects in Form.rulesCol contain extra properties for display purposes

// declare method parameters
#DECLARE->$displayString : Text

// declare variables
var $viewProObj : Object
var $curSheet; $index : Integer
var $curSheetName; $ruleObjString : Text
var $condFormatRules : Collection

// first check that Form.currentItem has a rule object
If (Form:C1466.currentItem#Null:C1517)
	
	// get View Pro object + conditional format rules
	$viewProObj:=VP Export to object("ViewProArea")
	$curSheet:=VP Get current sheet("ViewProArea")
	$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
	If (Undefined:C82($viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules)=False:C215)
		$condFormatRules:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
		
		// get rule object in View Pro object, with same index as rule object in Form.rulesCol
		$index:=Form:C1466.rulesCol.indexOf(Form:C1466.currentItem)
		$ruleObjString:=JSON Stringify:C1217($condFormatRules[$index]; *)
	End if 
	
	// return final string to display in "currentRuleObjectInput" form object
	return $ruleObjString
End if 