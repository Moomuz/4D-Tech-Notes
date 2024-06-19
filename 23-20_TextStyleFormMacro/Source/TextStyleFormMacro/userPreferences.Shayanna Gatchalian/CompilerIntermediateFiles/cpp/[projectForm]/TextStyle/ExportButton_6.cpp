extern Txt KCopy_20as_20JSON;
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
extern Txt Knormal;
extern Txt Kstroke;
extern Txt KtextDecoration;
extern Txt Kunderline;
extern Txt kanXlRIVM5kQ;
extern Txt kiuZShWYodlQ;
extern unsigned char D_obj_p_7_TextStyle_00ExportButton[];
void obj_p_7_TextStyle_00ExportButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_7_TextStyle_00ExportButton);
	if (!ctx->doingAbort) {
		Obj lcurrentStyleObj;
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
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1466)) goto _0;
			Bool t4;
			t4=Bool(1).get();
			if (g->SetMember(ctx,t3.cv(),kiuZShWYodlQ.cv(),t4.cv())) goto _0;
		}
		c.f.fLine=8;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
		{
			Obj t5;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1466)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KexportOption.cv(),t6.cv())) goto _0;
			Bool t7;
			if (g->OperationOnAny(ctx,6,t6.cv(),KCopy_20as_20JSON.cv(),t7.cv())) goto _0;
			if (!(t7.get())) goto _4;
		}
		{
			Obj t8;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lcurrentStyleObj=t8.get();
		}
		{
			Obj t9;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1466)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),KcurrentStyle.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KfontName.cv(),t11.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontFamily.cv(),t11.cv())) goto _0;
		}
		{
			Obj t12;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1466)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KcurrentStyle.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KfontSize.cv(),t14.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontSize.cv(),t14.cv())) goto _0;
		}
		{
			Obj t15;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1466)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KcurrentStyle.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KfontColor.cv(),t17.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),Kstroke.cv(),t17.cv())) goto _0;
		}
		{
			Obj t18;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1466)) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KcurrentStyle.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),KfontStyle.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),Kbold.cv(),t21.cv())) goto _0;
			Bool t22;
			if (g->OperationOnAny(ctx,6,t21.cv(),Bool(1).cv(),t22.cv())) goto _0;
			if (!(t22.get())) goto _5;
		}
		c.f.fLine=24;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontWeight.cv(),Kbold.cv())) goto _0;
		goto _6;
_5:
		c.f.fLine=26;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontWeight.cv(),Knormal.cv())) goto _0;
_6:
		{
			Obj t23;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t23.cv()},0,1466)) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),KcurrentStyle.cv(),t24.cv())) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KfontStyle.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),Kitalic.cv(),t26.cv())) goto _0;
			Bool t27;
			if (g->OperationOnAny(ctx,6,t26.cv(),Bool(1).cv(),t27.cv())) goto _0;
			if (!(t27.get())) goto _7;
		}
		c.f.fLine=29;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontStyle.cv(),Kitalic.cv())) goto _0;
		goto _8;
_7:
		c.f.fLine=31;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontStyle.cv(),Knormal.cv())) goto _0;
_8:
		{
			Obj t28;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t28.cv()},0,1466)) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),KcurrentStyle.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->GetMember(ctx,t29.cv(),KfontStyle.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->GetMember(ctx,t30.cv(),Kunderline.cv(),t31.cv())) goto _0;
			Bool t32;
			if (g->OperationOnAny(ctx,6,t31.cv(),Bool(1).cv(),t32.cv())) goto _0;
			if (!(t32.get())) goto _9;
		}
		c.f.fLine=34;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KtextDecoration.cv(),Kunderline.cv())) goto _0;
		goto _10;
_9:
		c.f.fLine=36;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KtextDecoration.cv(),Knormal.cv())) goto _0;
_10:
		{
			Txt t33;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t33.cv(),lcurrentStyleObj.cv(),Ref((optyp)3).cv()},2,1217)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t33.cv()},1,523)) goto _0;
		}
		c.f.fLine=41;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
		goto _2;
_4:
_2:
_0:
_1:
;
	}

}
