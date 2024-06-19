//%attributes = {}
// Create Formula Rule Object Method
// creates and returns the formula rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create formula rule object - easy
$ruleObj:=New object:C1471
$ruleObj.ruleType:=3  // establishes formula rule type
$ruleObj.formula:="$F$4=$F$3+$F$2"
$ruleObj.style:=New object:C1471("backColor"; "#FA8D61")

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=5
$rangeObj.colCount:=1
$rangeObj.row:=4
$rangeObj.rowCount:=1
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj