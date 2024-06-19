//%attributes = {}
// Create Cell Value Rule Object Method
// creates and returns the cell value rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create cell value rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=1  // establishes cell value rule type
$ruleObj.operator:=6  // "between" operator
$ruleObj.value1:=3
$ruleObj.value2:=7
$ruleObj.style:=New object:C1471("backColor"; "#90B1DC")

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=1
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj