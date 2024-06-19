//%attributes = {}
// Create Column State Rule Object Method
// creates and returns the column state rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create column state rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=15  // establishes column state rule type
$ruleObj.state:=1  // "hover" state
$ruleObj.style:=New object:C1471("backColor"; "#FAEFDC")

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