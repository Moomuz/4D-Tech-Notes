//%attributes = {}
// Create Easy Icon Set Rule Object Method
// creates and returns the icon set rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create icon set rule object - easy
$ruleObj:=New object:C1471
$ruleObj.ruleType:=13  // establishes icon set rule type
$ruleObj.iconSetType:=11

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=7
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj