//%attributes = {}
// Create Row State Rule Object Method
// creates and returns the row state rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create row state rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=14  // establishes row state rule type
$ruleObj.state:=16  // "active" state
$ruleObj.style:=New object:C1471("backColor"; "#C8D0E0")  // makes the background color blue

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=-1  // if you apply -1 to all parts of $rangeObj, you can apply the conditional format to the entire sheet
$rangeObj.colCount:=-1
$rangeObj.row:=-1
$rangeObj.rowCount:=-1
$rangesCol.insert(1; $rangeObj)

// insert ranges collection into rules object
$ruleObj.ranges:=$rangesCol

// return rule object
return $ruleObj