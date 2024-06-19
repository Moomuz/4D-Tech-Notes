//%attributes = {}
// Create Unique Rule Object Method
// creates and returns the unique rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create unique rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=6  // establishes unique rule type
$ruleObj.style:=New object:C1471("backColor"; "#C9BAFF")

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=13
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj