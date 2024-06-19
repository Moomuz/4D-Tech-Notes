// Show Directory JSON on Disk Button Method
// opens the File Explorer/Finder application on the machine and highlights the \
 "cssDirectory.json" file for the user to open in his or her preferred text editor

// declare variables
var $path : Text

$path:=Get 4D folder(Current resources folder)+"cssDirectory.json"
SHOW ON DISK($path)