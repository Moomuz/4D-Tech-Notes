//%attributes = {}
// Create Date Occurring Rule Object Method
// creates and returns the date occurring rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create date occurring rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=4  // establishes date occuring rule type
$ruleObj.type:=14  // this year date range
$ruleObj.style:=New object:C1471("backColor"; "#1D7D68")

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=3
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj