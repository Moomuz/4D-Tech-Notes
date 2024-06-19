//%attributes = {}
// Hexadecimal RGB Integer Method
// converts an RGB value from hexadecimal format to RGB integer format

// declare parameters
#DECLARE($hexValue : Text)->$rgbInteger : Integer

// declare variables
ARRAY TEXT($intValues; 15)
var $redText; $greenText; $blueText : Text
var $redInt; $greenInt; $blueInt; $rgbInteger : Integer

// initialize $intValues array (represents hexadecimal values as integers)
$intValues{0}:="0"
$intValues{1}:="1"
$intValues{2}:="2"
$intValues{3}:="3"
$intValues{4}:="4"
$intValues{5}:="5"
$intValues{6}:="6"
$intValues{7}:="7"
$intValues{8}:="8"
$intValues{9}:="9"
$intValues{10}:="A"
$intValues{11}:="B"
$intValues{12}:="C"
$intValues{13}:="D"
$intValues{14}:="E"
$intValues{15}:="F"

// get rid of "#" in hexadecimal string
$hexValue:=Substring($hexValue; 2)

// separate hex value into individual RGB colors
$redText:=Substring($hexValue; 1; 2)  // first 2 digits
$greenText:=Substring($hexValue; 3; 2)  // middle 2 digits
$blueText:=Substring($hexValue; 5; 2)  // last 2 digits

// get integer values for each RGB color
// formula: (1st digit * 16^1) + (2nd digit * 16^0)
$redInt:=Find in array($intValues; Substring($redText; 1; 1); 0)*16+\
Find in array($intValues; Substring($redText; 2; 1); 0)
$greenInt:=Find in array($intValues; Substring($greenText; 1; 1); 0)*16+\
Find in array($intValues; Substring($greenText; 2; 1); 0)
$blueInt:=Find in array($intValues; Substring($blueText; 1; 1); 0)*16+\
Find in array($intValues; Substring($blueText; 2; 1); 0)

// calculate the RGB integer value using formula
// formula: (red*256^2) + (green*256^1) + (blue*256^0)
$rgbInteger:=($redInt*(256^2))+($greenInt*256)+$blueInt
