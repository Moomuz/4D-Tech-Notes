//%attributes = {}
// Create Two Scale Rule Object Method
// creates and returns the two scale rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create two scale rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=10  // establishes two scale rule type
$ruleObj.minType:=5
//$ruleObj.minValue:=1
$ruleObj.minColor:="#5FB5FA"
$ruleObj.maxType:=7
//$ruleObj.maxValue:=10
$ruleObj.maxColor:="#D81BF7"

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=12
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj