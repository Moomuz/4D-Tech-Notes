//%attributes = {}
// Create Data Bar Rule Object Method
// creates and returns the data bar rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $rangeObj : Object
var $rangesCol : Collection

// create data bar rule object
$ruleObj:=New object:C1471

// establishes row state rule type
$ruleObj.ruleType:=12

// min and max value of the range
$ruleObj.minValue:="(Automatic)"
$ruleObj.maxValue:="(Automatic)"

// styling of the data bars
$ruleObj.gradient:=True:C214
$ruleObj.color:="purple"
$ruleObj.showBorder:=True:C214  // must use with "borderColor"
$ruleObj.borderColor:="purple"
$ruleObj.useNegativeBorderColor:=True:C214  // must use with "negativeBorderColor
$ruleObj.negativeBorderColor:="orange"
$ruleObj.useNegativeFillColor:=True:C214  // must use with "negativeFillColor"
$ruleObj.negativeFillColor:="orange"
$ruleObj.showBarOnly:=True:C214
$ruleObj.axisColor:="green"
$ruleObj.axisPosition:=1  // "cellMidPoint" axis position
//$ruleObj.dataBarDirection:=0  // does not have affect on cell ranges with both +/- values

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=2
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.insert(1; $rangeObj)

// insert ranges collection into rules object
$ruleObj.ranges:=$rangesCol

// return rule object
return $ruleObj