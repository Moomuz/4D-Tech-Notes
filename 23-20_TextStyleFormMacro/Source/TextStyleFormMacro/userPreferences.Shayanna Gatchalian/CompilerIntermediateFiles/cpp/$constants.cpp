#include "$asm4d.h"
#include "cp4drt_shared.h"
#include "legacy_language_types.h"
Txt K;
Txt K0;
Txt K0x00;
Txt K1;
Txt K2;
Txt K3;
Txt K4;
Txt K5;
Txt K6;
Txt K7;
Txt K8;
Txt K9;
Txt KA;
Txt KApplyButton;
Txt KB;
Txt KBold;
Txt KBoldCheckBox;
Txt KC;
Txt KD;
Txt KE;
Txt KF;
Txt KFontsListBox;
Txt KItalic;
Txt KItalicCheckBox;
Txt KSampleText;
Txt KTextStyle;
Txt K_23;
Txt K_23000000;
Txt K_23FFFFFF;
Txt K_26x;
Txt K_27_22_3E;
Txt K_3C_2Fspan_3E;
Txt Kbold;
Txt Kcode;
Txt KcurrentFont;
Txt KcurrentPage;
Txt KcurrentStyle;
Txt KcurrentValue;
Txt Keditor;
Txt KfontColor;
Txt KfontFamily;
Txt KfontName;
Txt KfontNameDisplay;
Txt KfontSize;
Txt KfontSizes;
Txt KfontStyle;
Txt KfontWeight;
Txt Kfonts;
Txt Kitalic;
Txt Klength;
Txt Knormal;
Txt Kobjects;
Txt Kpush;
Txt Kstroke;
Txt KtextDecoration;
Txt Kunderline;
Txt Kvalues;
Txt k3mJu4il7dQQ;
Txt kEMrF8qRxKHQ;
Txt kFZbq1_5YBqw;
Txt kFtXy4PdolDA;
Txt kmr4kIudxYwc;
Txt kpkiCyZTQByA;
Txt kqzKKNHgPGIQ;

struct Txt_info { Txt *t; const char16_t *s; size_t n;};
static const Txt_info constants[]=
{
	{&K,nullptr,0},
	{&K0,u"0",1},
	{&K0x00,u"0x00",4},
	{&K1,u"1",1},
	{&K2,u"2",1},
	{&K3,u"3",1},
	{&K4,u"4",1},
	{&K5,u"5",1},
	{&K6,u"6",1},
	{&K7,u"7",1},
	{&K8,u"8",1},
	{&K9,u"9",1},
	{&KA,u"A",1},
	{&KApplyButton,u"ApplyButton",11},
	{&KB,u"B",1},
	{&KBold,u"Bold",4},
	{&KBoldCheckBox,u"BoldCheckBox",12},
	{&KC,u"C",1},
	{&KD,u"D",1},
	{&KE,u"E",1},
	{&KF,u"F",1},
	{&KFontsListBox,u"FontsListBox",12},
	{&KItalic,u"Italic",6},
	{&KItalicCheckBox,u"ItalicCheckBox",14},
	{&KSampleText,u"SampleText",10},
	{&KTextStyle,u"TextStyle",9},
	{&K_23,u"#",1},
	{&K_23000000,u"#000000",7},
	{&K_23FFFFFF,u"#FFFFFF",7},
	{&K_26x,u"&x",2},
	{&K_27_22_3E,u"'\x22>",3},
	{&K_3C_2Fspan_3E,u"</span>",7},
	{&Kbold,u"bold",4},
	{&Kcode,u"code",4},
	{&KcurrentFont,u"currentFont",11},
	{&KcurrentPage,u"currentPage",11},
	{&KcurrentStyle,u"currentStyle",12},
	{&KcurrentValue,u"currentValue",12},
	{&Keditor,u"editor",6},
	{&KfontColor,u"fontColor",9},
	{&KfontFamily,u"fontFamily",10},
	{&KfontName,u"fontName",8},
	{&KfontNameDisplay,u"fontNameDisplay",15},
	{&KfontSize,u"fontSize",8},
	{&KfontSizes,u"fontSizes",9},
	{&KfontStyle,u"fontStyle",9},
	{&KfontWeight,u"fontWeight",10},
	{&Kfonts,u"fonts",5},
	{&Kitalic,u"italic",6},
	{&Klength,u"length",6},
	{&Knormal,u"normal",6},
	{&Kobjects,u"objects",7},
	{&Kpush,u"push",4},
	{&Kstroke,u"stroke",6},
	{&KtextDecoration,u"textDecoration",14},
	{&Kunderline,u"underline",9},
	{&Kvalues,u"values",6},
	{&k3mJu4il7dQQ,u"<span style=\x22\x66ont-family:'",26},
	{&kEMrF8qRxKHQ,u"sampleTextDarkBG",16},
	{&kFZbq1_5YBqw,u"No form objects selected. The text style may only be copied as JSON text (can also be used in CSS).",99},
	{&kFtXy4PdolDA,u"SampleTextRectangle",19},
	{&kmr4kIudxYwc,u"applyButtonClicked",18},
	{&kpkiCyZTQByA,u"ColorPickerRectangle",20},
	{&kqzKKNHgPGIQ,u"currentSelection",16},
	{nullptr,nullptr,0}
};

void InitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		g->AssignUniChars(i->t->cv(),i->s,i->n);
}

void DeInitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		i->t->setNull();
}
