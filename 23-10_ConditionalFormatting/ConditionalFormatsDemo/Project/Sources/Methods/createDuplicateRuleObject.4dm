//%attributes = {}
// Create Duplicate Rule Object Method
// creates and returns the duplicate rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create duplicate rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=7  // establishes duplicate rule type
$ruleObj.style:=New object:C1471("backColor"; "#57E6BD")  // makes the background color teal

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=4
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj