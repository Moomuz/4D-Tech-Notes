//%attributes = {}
// Create Custom Icon Set Rule Object Method
// creates and returns the icon set rule object

// declare method parameters
#DECLARE->$ruleObj : Object

// declare variables
var $ruleObj; $iconCritObj; $iconObj; $iconObj1; $iconObj2; $rangeObj : Object
var $iconCritCol; $iconsCol; $rangesCol : Collection

// create icon set rule object - custom
$ruleObj:=New object:C1471
$ruleObj.ruleType:=13  // establishes icon set rule type
$ruleObj.iconSetType:=0  // "threeArrowsColored" icon set

// create iconCriteria collection
$iconCritCol:=New collection:C1472

// create 2 iconCriterion objects and push into iconCriteria collection
$iconCritObj:=New object:C1471
$iconCritObj.iconValue:=6
$iconCritObj.iconValueType:=1
$iconCritObj.isGreaterThanEqualTo:=True:C214
$iconCritCol.push($iconCritObj)

$iconCritObj:=New object:C1471
$iconCritObj.iconValue:=8
$iconCritObj.iconValueType:=1
$iconCritObj.isGreaterThanEqualTo:=True:C214
$iconCritCol.push($iconCritObj)

// add iconCriteria collection to rule object
$ruleObj.iconCriteria:=$iconCritCol

// create icons collection
$iconsCol:=New collection:C1472

// create 3 icon objects for "threeArrowsColored" icon set + push to icons collection
$iconObj:=New object:C1471
$iconObj.iconIndex:=2
$iconObj.iconSetType:=0  // has to match the "iconSetType" property of $ruleObj
$iconsCol.push($iconObj)

$iconObj1:=New object:C1471
$iconObj1.iconIndex:=2
$iconObj1.iconSetType:=1
$iconsCol.push($iconObj1)

$iconObj2:=New object:C1471
$iconObj2.iconIndex:=2
$iconObj2.iconSetType:=2
$iconsCol.push($iconObj2)

// add icons collection to rule object
$ruleObj.icons:=$iconsCol

// create ranges collection
$rangesCol:=New collection:C1472
$rangeObj:=New object:C1471
$rangeObj.col:=8
$rangeObj.colCount:=1
$rangeObj.row:=1
$rangeObj.rowCount:=10
$rangesCol.push($rangeObj)
$ruleObj.ranges:=$rangesCol  // insert ranges collection into rules object

// extra properties
$ruleObj.showIconOnly:=True:C214
//$ruleObj.reverseIconOrder:=True

// return rule object
return $ruleObj