// Show styleSheets.css on Disk Button Method
// opens the File Explorer/Finder application on the machine and highlights the \
 "styleSheets.css" file for the user to open in his or her preferred text editor

// declare variables
var $path : Text

$path:=Get 4D folder(Database folder)+"Project"+Folder separator+"Sources"+Folder separator+"styleSheets.css"
SHOW ON DISK($path)