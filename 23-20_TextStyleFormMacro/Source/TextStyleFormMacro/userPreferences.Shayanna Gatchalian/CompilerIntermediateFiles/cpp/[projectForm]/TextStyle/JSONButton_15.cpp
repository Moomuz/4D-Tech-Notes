extern Txt Kbold;
extern Txt KcurrentStyle;
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
extern unsigned char D_obj_p_15_TextStyle_00JSONButton[];
void obj_p_15_TextStyle_00JSONButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_15_TextStyle_00JSONButton);
	if (!ctx->doingAbort) {
		Obj lcurrentStyleObj;
		{
			Obj t0;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lcurrentStyleObj=t0.get();
		}
		{
			Obj t1;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1466)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KcurrentStyle.cv(),t2.cv())) goto _0;
			Variant t3;
			if (g->GetMember(ctx,t2.cv(),KfontName.cv(),t3.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontFamily.cv(),t3.cv())) goto _0;
		}
		{
			Obj t4;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1466)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KcurrentStyle.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KfontSize.cv(),t6.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontSize.cv(),t6.cv())) goto _0;
		}
		{
			Obj t7;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1466)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KcurrentStyle.cv(),t8.cv())) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KfontColor.cv(),t9.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyleObj.cv(),Kstroke.cv(),t9.cv())) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1466)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KcurrentStyle.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KfontStyle.cv(),t12.cv())) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Kbold.cv(),t13.cv())) goto _0;
			Bool t14;
			if (g->OperationOnAny(ctx,6,t13.cv(),Bool(1).cv(),t14.cv())) goto _0;
			if (!(t14.get())) goto _2;
		}
		c.f.fLine=16;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontWeight.cv(),Kbold.cv())) goto _0;
		goto _3;
_2:
		c.f.fLine=18;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontWeight.cv(),Knormal.cv())) goto _0;
_3:
		{
			Obj t15;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1466)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KcurrentStyle.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KfontStyle.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),Kitalic.cv(),t18.cv())) goto _0;
			Bool t19;
			if (g->OperationOnAny(ctx,6,t18.cv(),Bool(1).cv(),t19.cv())) goto _0;
			if (!(t19.get())) goto _4;
		}
		c.f.fLine=21;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontStyle.cv(),Kitalic.cv())) goto _0;
		goto _5;
_4:
		c.f.fLine=23;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KfontStyle.cv(),Knormal.cv())) goto _0;
_5:
		{
			Obj t20;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1466)) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),KcurrentStyle.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KfontStyle.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),Kunderline.cv(),t23.cv())) goto _0;
			Bool t24;
			if (g->OperationOnAny(ctx,6,t23.cv(),Bool(1).cv(),t24.cv())) goto _0;
			if (!(t24.get())) goto _6;
		}
		c.f.fLine=26;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KtextDecoration.cv(),Kunderline.cv())) goto _0;
		goto _7;
_6:
		c.f.fLine=28;
		if (g->SetMember(ctx,lcurrentStyleObj.cv(),KtextDecoration.cv(),Knormal.cv())) goto _0;
_7:
		{
			Txt t25;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t25.cv(),lcurrentStyleObj.cv(),Ref((optyp)3).cv()},2,1217)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t25.cv()},1,523)) goto _0;
		}
_0:
_1:
;
	}

}
