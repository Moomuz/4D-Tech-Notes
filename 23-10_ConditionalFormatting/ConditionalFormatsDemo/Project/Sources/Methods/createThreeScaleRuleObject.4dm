//%attributes = {}
// Create Three Scale Rule Object Method
// creates and returns the three scale rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create three scale rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=11  // establishes three scale rule type
$ruleObj.minType:=1
//$ruleObj.minValue:=1
$ruleObj.minColor:="#5FB5FA"
$ruleObj.midType:=0
$ruleObj.midValue:=3  // the only number value that is required
$ruleObj.midColor:="#6AF4E8"
$ruleObj.maxType:=7
//$ruleObj.maxValue:=10
$ruleObj.maxColor:="#D81BF7"

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=10
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj