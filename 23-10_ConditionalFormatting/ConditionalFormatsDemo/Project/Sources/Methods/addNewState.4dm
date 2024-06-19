//%attributes = {}
// Add New State Method
// if the state does not exist, creates a new state object to add to states property
// if it does exist, takes the existing state object and toggles either the "row" \
 or "column" property according to the $ruleType being added to the conditional format rules

// $ruleType enums
// 14 = rowStateRule
// 15 = columnStateRule

// declare parameters
#DECLARE($statesObj : Object; $state : Real; $ruleType : Real)->$newStatesObj : Object

// declare variables
var $stateObj : Object

// if the state defined in $state is not found in the states property
If (Undefined:C82($statesObj[String:C10($state)])=True:C214)
	// create a new state object 
	$stateObj:=New object:C1471
	Case of 
		: ($ruleType=14)  // row state rule
			$stateObj.row:=True:C214
			$stateObj.column:=False:C215
		: ($ruleType=15)  // column state rule
			$stateObj.row:=False:C215
			$stateObj.column:=True:C214
	End case 
	
	// add state object to states object
	$statesObj[String:C10($state)]:=$stateObj
	
	// return states object
	return $statesObj
Else   // the state already exists 
	// toggle the row or column property to True (depending on $ruleType)
	Case of 
		: ($ruleType=14)  // row state rule
			$statesObj[String:C10($state)].row:=True:C214
		: ($ruleType=15)  // column state rule
			$statesObj[String:C10($state)].column:=True:C214
	End case 
	
	// return states object
	return $statesObj
End if 
