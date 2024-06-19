//%attributes = {}
// Create Top 10 Rule Object Method
// creates and returns the average rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create top 10 rule object
$ruleObj:=New object:C1471
$ruleObj.ruleType:=5  // establishes top 10 rule type
$ruleObj.type:=0
$ruleObj.rank:=2
$ruleObj.style:=New object:C1471("backColor"; "#FFFC94")

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=11
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// return rule object
return $ruleObj