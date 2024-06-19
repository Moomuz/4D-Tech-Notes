//%attributes = {}
// Edit Rules Collection Method
// adds extra properties to the Form.rulesCol object for UI display purposes
// **these extra properties do not affect the "ConditionalFormats" property \
 in the View Pro object**

// declare variables
var $ruleObj; $rangeObj : Object
var $colNumber : Integer
var $colLetter : Text
ARRAY TEXT:C222($colsArray; 15)

// create columns text array (only goes up to letter N for SampleSheet.4vp)
$colsArray{0}:="A"
$colsArray{1}:="B"
$colsArray{2}:="C"
$colsArray{3}:="D"
$colsArray{4}:="E"
$colsArray{5}:="F"
$colsArray{6}:="G"
$colsArray{7}:="H"
$colsArray{8}:="I"
$colsArray{9}:="J"
$colsArray{10}:="K"
$colsArray{11}:="L"
$colsArray{12}:="M"
$colsArray{13}:="N"
$colsArray{14}:="0"

// translate the constant value of each rule type into the rule type's name
For each ($ruleObj; Form:C1466.rulesCol)
	Case of 
		: ($ruleObj.ruleType=8)
			$ruleObj.ruleTypeName:="Average Rule"
		: ($ruleObj.ruleType=1)
			$ruleObj.ruleTypeName:="Cell Value Rule"
		: ($ruleObj.ruleType=15)
			$ruleObj.ruleTypeName:="Column State Rule"
		: ($ruleObj.ruleType=12)
			$ruleObj.ruleTypeName:="Data Bar Rule"
		: ($ruleObj.ruleType=4)
			$ruleObj.ruleTypeName:="Date Occurring Rule"
		: ($ruleObj.ruleType=7)
			$ruleObj.ruleTypeName:="Duplicate Rule"
		: ($ruleObj.ruleType=3)
			$ruleObj.ruleTypeName:="Formula Rule"
		: ($ruleObj.ruleType=13)
			$ruleObj.ruleTypeName:="Icon Set Rule"
		: ($ruleObj.ruleType=14)
			$ruleObj.ruleTypeName:="Row State Rule"
		: ($ruleObj.ruleType=2)
			$ruleObj.ruleTypeName:="Specific Text Rule"
		: ($ruleObj.ruleType=11)
			$ruleObj.ruleTypeName:="Three Scale Rule"
		: ($ruleObj.ruleType=5)
			$ruleObj.ruleTypeName:="Top 10 Rule"
		: ($ruleObj.ruleType=10)
			$ruleObj.ruleTypeName:="Two Scale Rule"
		: ($ruleObj.ruleType=6)
			$ruleObj.ruleTypeName:="Unique Rule"
	End case 
	
	// instantialize Form.rangesName with empty string
	$ruleObj.rangesName:=""
	
	// translate the ranges collection into a readable form of the sheet's indices (ex: A1:A10)
	If ($ruleObj.ranges[0].col=-1)
		$ruleObj.rangesName:="Entire Sheet"
	Else 
		For each ($rangeObj; $ruleObj.ranges)
			$ruleObj.rangesName:=$ruleObj.rangesName+$colsArray{$rangeObj.col}+String:C10($rangeObj.row+1)+":"+\
				$colsArray{$rangeObj.col+$rangeObj.colCount-1}+String:C10($rangeObj.row+$rangeObj.rowCount+1)+" "
		End for each 
	End if 
End for each 


