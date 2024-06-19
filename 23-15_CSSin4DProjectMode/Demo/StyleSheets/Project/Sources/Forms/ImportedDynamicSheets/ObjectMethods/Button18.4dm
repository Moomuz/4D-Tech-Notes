// Show ImportedDynamicSheets.css on Disk Button Method
// opens the File Explorer/Finder application on the machine and highlights the \
 "ImportedDynamicSheets.css" file for the user to open in his or her preferred text editor

// declare variables
var $path : Text

$path:=Get 4D folder(Database folder)+"Data"+Folder separator+"Logs"+Folder separator+"ImportedDynamicSheets.css"
SHOW ON DISK($path)