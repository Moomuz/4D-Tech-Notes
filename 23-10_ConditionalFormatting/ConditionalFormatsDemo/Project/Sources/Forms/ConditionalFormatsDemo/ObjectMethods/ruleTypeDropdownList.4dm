// Rule Type Dropdown List Object Method
// sets the description according to the selected rule type

Case of 
	: (Form event code:C388=On Load:K2:1)
		Form:C1466.curRuleType:="Average Rule"
		OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The average rule applies cell styling according to "+\
			"either the average value or standard deviation of the cell range.")
	: (Form event code:C388=On Data Change:K2:15)
		Case of 
			: (Form:C1466.curRuleType="Average Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The average rule applies cell styling according to "+\
					"either the average value or standard deviation of the cell range.")
			: (Form:C1466.curRuleType="Cell Value Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The cell value rule compares the cell’s value against "+\
					"either a single specified value or two specified values. If the condition is true "+\
					"according to the “operator” property, the cell styling will be applied. ")
			: (Form:C1466.curRuleType="Column State Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The column state rule formats the entire column "+\
					"depending on its state. This rule type (along with the row state rule) is unique in that "+\
					"the “states” property under the active spreadsheet must also be configured. ")
			: (Form:C1466.curRuleType="Data Bar Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The data bar rule draws a bar within in the cell according"+\
					" to its value, in comparison with the other cell values of the rule’s cell range.")
			: (Form:C1466.curRuleType="Date Occurring Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The date occurring rule applies cell styling to the cell "+\
					"range if the date falls within the condition’s date range in relation to the current date.")
			: (Form:C1466.curRuleType="Duplicate Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The duplicate rule applies cell styling to any duplicate "+\
					"cells within the cell range.")
			: (Form:C1466.curRuleType="Formula Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The formula rule applies cell styling if the formula "+\
					"defined in the “formula” parameter returns true. ")
			: (Form:C1466.curRuleType="Formula Rule - 4D Method")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The formula rule applies cell styling if the 4D method "+\
					"defined in the “formula” parameter returns true. ")
			: (Form:C1466.curRuleType="Icon Set Rule - Easy")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The icon set rule applies a specific icon depending on "+\
					"the cell value in comparison to the rest of the cell range. Icon sets are limited "+\
					"to what is provided by SpreadJS.")
			: (Form:C1466.curRuleType="Icon Set Rule - Custom")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The icon set rule applies a customized icon set chosen by the developer. "+\
					"Icon sets are limited to what is provided by SpreadJS.")
			: (Form:C1466.curRuleType="Row State Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The row state rule formats the entire row depending on "+\
					"its state. This rule type (along with the column state rule) is unique in that the “states” "+\
					"property under the active spreadsheet must also be configured.")
			: (Form:C1466.curRuleType="Specific Text Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The specific text rule compares the cell’s value against "+\
					"a specified text value. If the condition is true according to the “operator” property, "+\
					"the cell styling will be applied. ")
			: (Form:C1466.curRuleType="Three Scale Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The three scale rule changes the background color of each "+\
					"cell in a range based on a 3-color gradient scale.")
			: (Form:C1466.curRuleType="Top 10 Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The top 10 rule applies cell styling to the top or bottom "+\
					"N values, according to the “type” and “rank” properties.")
			: (Form:C1466.curRuleType="Two Scale Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The two scale rule changes the background color of each "+\
					"cell in a range based on a 3-color gradient scale.")
			: (Form:C1466.curRuleType="Unique Rule")
				OBJECT SET TITLE:C194(*; "ruleTypeDesc"; "The unique rule only applies cell styling to cells "+\
					"with unique values in the cell range.")
		End case 
End case 

