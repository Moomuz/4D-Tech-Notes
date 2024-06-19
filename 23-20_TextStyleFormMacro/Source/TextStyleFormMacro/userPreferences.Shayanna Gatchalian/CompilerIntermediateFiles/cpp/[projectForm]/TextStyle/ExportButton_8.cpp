extern Txt KCopy_20as_20CSS;
extern Txt K_09fontFamily_3A_20_22;
extern Txt K_09fontSize_3A_20;
extern Txt K_09stroke_3A_20_22;
extern Txt K_22_3B_0A;
extern Txt K_3B_0A;
extern Txt K_7D;
extern Txt Kbold;
extern Txt KcurrentStyle;
extern Txt KexportOption;
extern Txt KfontColor;
extern Txt KfontFamily;
extern Txt KfontName;
extern Txt KfontSize;
extern Txt KfontStyle;
extern Txt KfontWeight;
extern Txt Kitalic;
extern Txt Kselector_20_7B_0A;
extern Txt Kstroke;
extern Txt KtextDecoration;
extern Txt Kunderline;
extern Txt kFvjp8iz83wk;
extern Txt kJ7EdQfXP_UY;
extern Txt kL5vBqoCpVmw;
extern Txt kQisUJAybFIw;
extern Txt kanXlRIVM5kQ;
extern Txt kauKe$$7ffuo;
extern Txt kj3NUHfzBQ1M;
extern Txt kyqyEOh8e_Ks;
extern unsigned char D_obj_p_7_TextStyle_00ExportButton[];
void obj_p_7_TextStyle_00ExportButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_7_TextStyle_00ExportButton);
	if (!ctx->doingAbort) {
		Obj lcurrentStyleObj;
		Txt lcssCode;
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1466)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),KexportOption.cv(),t1.cv())) goto _0;
			Bool t2;
			if (g->OperationOnAny(ctx,6,t1.cv(),kanXlRIVM5kQ.cv(),t2.cv())) goto _0;
			if (!(t2.get())) goto _3;
		}
		c.f.fLine=7;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
		{
			Obj t3;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1466)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),KexportOption.cv(),t4.cv())) goto _0;
			Bool t5;
			if (g->OperationOnAny(ctx,6,t4.cv(),kQisUJAybFIw.cv(),t5.cv())) goto _0;
			if (!(t5.get())) goto _4;
		}
		{
			Obj t6;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lcurrentStyleObj=t6.get();
		}
		{
			Obj t7;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1466)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KcurrentStyle.cv(),t8.cv())) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KfontName.cv(),t9.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontFamily.cv(),t9.cv())) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1466)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KcurrentStyle.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KfontSize.cv(),t12.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontSize.cv(),t12.cv())) goto _0;
		}
		{
			Obj t13;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1466)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KcurrentStyle.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KfontColor.cv(),t15.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),Kstroke.cv(),t15.cv())) goto _0;
		}
		{
			Obj t16;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1466)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KcurrentStyle.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KfontStyle.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),Kbold.cv(),t19.cv())) goto _0;
			Bool t20;
			if (g->OperationOnAny(ctx,6,t19.cv(),Bool(1).cv(),t20.cv())) goto _0;
			if (!(t20.get())) goto _5;
		}
		c.f.fLine=23;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontWeight.cv(),Kbold.cv())) goto _0;
_5:
		{
			Obj t21;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1466)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KcurrentStyle.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),KfontStyle.cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),Kitalic.cv(),t24.cv())) goto _0;
			Bool t25;
			if (g->OperationOnAny(ctx,6,t24.cv(),Bool(1).cv(),t25.cv())) goto _0;
			if (!(t25.get())) goto _6;
		}
		c.f.fLine=26;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontStyle.cv(),Kitalic.cv())) goto _0;
_6:
		{
			Obj t26;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,1466)) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),KcurrentStyle.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KfontStyle.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),Kunderline.cv(),t29.cv())) goto _0;
			Bool t30;
			if (g->OperationOnAny(ctx,6,t29.cv(),Bool(1).cv(),t30.cv())) goto _0;
			if (!(t30.get())) goto _7;
		}
		c.f.fLine=29;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KtextDecoration.cv(),Kunderline.cv())) goto _0;
_7:
		{
			Txt t31;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t31.cv(),lcurrentStyleObj.cv(),Ref((optyp)3).cv()},2,1217)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t31.cv()},1,523)) goto _0;
		}
		c.f.fLine=34;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
		goto _2;
_4:
		{
			Obj t32;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1466)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KexportOption.cv(),t33.cv())) goto _0;
			Bool t34;
			if (g->OperationOnAny(ctx,6,t33.cv(),KCopy_20as_20CSS.cv(),t34.cv())) goto _0;
			if (!(t34.get())) goto _8;
		}
		{
			Txt t35;
			g->AddString(Kselector_20_7B_0A.get(),K_09fontFamily_3A_20_22.get(),t35.get());
			Obj t36;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t36.cv()},0,1466)) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),KcurrentStyle.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KfontName.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->OperationOnAny(ctx,0,t35.cv(),t38.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->OperationOnAny(ctx,0,t39.cv(),K_22_3B_0A.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->OperationOnAny(ctx,0,t40.cv(),K_09fontSize_3A_20.cv(),t41.cv())) goto _0;
			Obj t42;
			if (g->Call(ctx,(PCV[]){t42.cv()},0,1466)) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),KcurrentStyle.cv(),t43.cv())) goto _0;
			Variant t44;
			if (g->GetMember(ctx,t43.cv(),KfontSize.cv(),t44.cv())) goto _0;
			Txt t45;
			if (g->Call(ctx,(PCV[]){t45.cv(),t44.cv()},1,10)) goto _0;
			Variant t46;
			if (g->OperationOnAny(ctx,0,t41.cv(),t45.cv(),t46.cv())) goto _0;
			Variant t47;
			if (g->OperationOnAny(ctx,0,t46.cv(),K_3B_0A.cv(),t47.cv())) goto _0;
			Variant t48;
			if (g->OperationOnAny(ctx,0,t47.cv(),K_09stroke_3A_20_22.cv(),t48.cv())) goto _0;
			Obj t49;
			if (g->Call(ctx,(PCV[]){t49.cv()},0,1466)) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),KcurrentStyle.cv(),t50.cv())) goto _0;
			Variant t51;
			if (g->GetMember(ctx,t50.cv(),KfontColor.cv(),t51.cv())) goto _0;
			Variant t52;
			if (g->OperationOnAny(ctx,0,t48.cv(),t51.cv(),t52.cv())) goto _0;
			Variant t53;
			if (g->OperationOnAny(ctx,0,t52.cv(),K_22_3B_0A.cv(),t53.cv())) goto _0;
			Txt t54;
			if (!g->GetValue(ctx,(PCV[]){t54.cv(),t53.cv(),nullptr})) goto _0;
			lcssCode=t54.get();
		}
		{
			Obj t55;
			c.f.fLine=45;
			if (g->Call(ctx,(PCV[]){t55.cv()},0,1466)) goto _0;
			Variant t56;
			if (g->GetMember(ctx,t55.cv(),KcurrentStyle.cv(),t56.cv())) goto _0;
			Variant t57;
			if (g->GetMember(ctx,t56.cv(),KfontStyle.cv(),t57.cv())) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),Kbold.cv(),t58.cv())) goto _0;
			Bool t59;
			if (g->OperationOnAny(ctx,6,t58.cv(),Bool(1).cv(),t59.cv())) goto _0;
			if (!(t59.get())) goto _9;
		}
		g->AddString(lcssCode.get(),kauKe$$7ffuo.get(),lcssCode.get());
		goto _10;
_9:
		g->AddString(lcssCode.get(),kyqyEOh8e_Ks.get(),lcssCode.get());
_10:
		{
			Obj t62;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t62.cv()},0,1466)) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),KcurrentStyle.cv(),t63.cv())) goto _0;
			Variant t64;
			if (g->GetMember(ctx,t63.cv(),KfontStyle.cv(),t64.cv())) goto _0;
			Variant t65;
			if (g->GetMember(ctx,t64.cv(),Kitalic.cv(),t65.cv())) goto _0;
			Bool t66;
			if (g->OperationOnAny(ctx,6,t65.cv(),Bool(1).cv(),t66.cv())) goto _0;
			if (!(t66.get())) goto _11;
		}
		g->AddString(lcssCode.get(),kL5vBqoCpVmw.get(),lcssCode.get());
		goto _12;
_11:
		g->AddString(lcssCode.get(),kJ7EdQfXP_UY.get(),lcssCode.get());
_12:
		{
			Obj t69;
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){t69.cv()},0,1466)) goto _0;
			Variant t70;
			if (g->GetMember(ctx,t69.cv(),KcurrentStyle.cv(),t70.cv())) goto _0;
			Variant t71;
			if (g->GetMember(ctx,t70.cv(),KfontStyle.cv(),t71.cv())) goto _0;
			Variant t72;
			if (g->GetMember(ctx,t71.cv(),Kitalic.cv(),t72.cv())) goto _0;
			Bool t73;
			if (g->OperationOnAny(ctx,6,t72.cv(),Bool(1).cv(),t73.cv())) goto _0;
			if (!(t73.get())) goto _13;
		}
		g->AddString(lcssCode.get(),kj3NUHfzBQ1M.get(),lcssCode.get());
		goto _14;
_13:
		g->AddString(lcssCode.get(),kFvjp8iz83wk.get(),lcssCode.get());
_14:
		g->AddString(lcssCode.get(),K_7D.get(),lcssCode.get());
		c.f.fLine=69;
		if (g->Call(ctx,(PCV[]){nullptr,lcssCode.cv()},1,523)) goto _0;
		g->Check(ctx);
		c.f.fLine=70;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
		goto _2;
_8:
_2:
_0:
_1:
;
	}

}
