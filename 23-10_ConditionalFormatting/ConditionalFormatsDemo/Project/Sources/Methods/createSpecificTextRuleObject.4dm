//%attributes = {}
// Create Specific Text Rule Object Method
// creates and returns the specific text rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create specific text rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=2  // establishes specific text rule type
$ruleObj.operator:=0  // contains operator
$ruleObj.text:="l"
$ruleObj.style:=New object:C1471("backColor"; "#E8BEBA"; "showEllipsis"; True:C214)

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=9
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.push($rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj