// View Pro Object Button Method
// allows the user to view the view pro object structure in the debugger
// if no expressions appear in the expresssions pane, add the "$viewProObj" variable \
 to view its enitre object structure

// declare variables
var $viewProObj : Object

$viewProObj:=VP Export to object("ViewProArea")
TRACE:C157