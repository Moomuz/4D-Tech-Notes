// View Pro Area Object Method
// handles the View Pro Area events

// declare variables
var $functionObj; $viewProObj; $ruleObj : Object
var $path; $curSheetName : Text
var $curSheet : Integer
var $condFormatRules : Collection


Case of 
		// On Load event (the first event when application is booted up)
	: (Form event code:C388=On Load:K2:1)
		// add custom function to View Pro area
		$functionObj:=New object:C1471
		$functionObj.myCustomFunction:=New object:C1471
		$functionObj.myCustomFunction.formula:=Formula:C1597(addCustomFunction)
		VP SET CUSTOM FUNCTIONS("ViewProArea"; $functionObj)
		
		// declare rules collection in form data
		Form:C1466.rulesCol:=New collection:C1472
		
		// On VP Ready event (always executed after "On Load" event)
	: (Form event code:C388=On VP Ready:K2:59)
		// import "SampleSheet.4vp" spreadsheet
		$path:=Get 4D folder:C485(Current resources folder:K5:16)+"SampleSheet.4vp"
		VP IMPORT DOCUMENT("ViewProArea"; $path)
		
		// get View Pro object after VP area is initialized
		$viewProObj:=VP Export to object("ViewProArea")
		$curSheet:=VP Get current sheet("ViewProArea")
		$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
		
		// if imported sheet already has conditional formatting, add rules to "rulesListBox" form object
		If (Undefined:C82($viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats)=False:C215)
			Form:C1466.rulesCol:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
			addFormRulesColProperties
			LISTBOX SELECT ROW:C912(*; "rulesListBox"; Form:C1466.rulesCol.length)
			Form:C1466.currentItem:=Form:C1466.rulesCol[Form:C1466.rulesCol.length-1]
		End if 
		// execute when an edit is made to the sheet
	: (Form event code:C388=On After Edit:K2:43)
		// check if the "conditionalFormats" property in the View Pro object has been changed
		
		// get View Pro object + conditional format rules
		$viewProObj:=VP Export to object("ViewProArea")
		$curSheet:=VP Get current sheet("ViewProArea")
		$curSheetName:=VP Get sheet name("ViewProArea"; $curSheet)
		If (Undefined:C82($viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules)=False:C215)
			$condFormatRules:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
			
			// if the "conditionalFormats" property has been changed
			If (Form:C1466.rulesCol.equal($condFormatRules)=False:C215)
				// refresh the list box + highlight newly added rule
				Form:C1466.rulesCol:=$viewProObj.spreadJS.sheets[$curSheetName].conditionalFormats.rules
				addFormRulesColProperties
				LISTBOX SELECT ROW:C912(*; "rulesListBox"; Form:C1466.rulesCol.length)
				Form:C1466.currentItem:=Form:C1466.rulesCol[Form:C1466.rulesCol.length-1]
			End if 
		End if 
End case 


