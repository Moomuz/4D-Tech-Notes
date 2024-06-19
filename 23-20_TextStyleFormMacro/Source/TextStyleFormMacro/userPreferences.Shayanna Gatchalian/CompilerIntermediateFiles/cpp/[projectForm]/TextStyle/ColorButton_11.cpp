extern int32_t vOK;
extern Txt K0x00;
extern Txt KSampleText;
extern Txt K_23;
extern Txt K_23000000;
extern Txt K_26x;
extern Txt Kcode;
extern Txt KcurrentStyle;
extern Txt KfontColor;
extern Txt kpkiCyZTQByA;
Asm4d_Proc proc_HEXTORGBINT;
extern unsigned char D_obj_p_7_TextStyle_00ColorButton[];
void obj_p_7_TextStyle_00ColorButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_7_TextStyle_00ColorButton);
	if (!ctx->doingAbort) {
		Txt lhexvalue;
		Long lrgbInteger;
		Txt lstring;
		{
			Obj t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1606)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kcode.cv(),t1.cv())) goto _0;
			Bool t2;
			if (g->OperationOnAny(ctx,6,t1.cv(),Long(4).cv(),t2.cv())) goto _0;
			if (!(t2.get())) goto _3;
		}
		{
			Obj t3;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1466)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),KcurrentStyle.cv(),t4.cv())) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KfontColor.cv(),t5.cv())) goto _0;
			Txt t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			Long t7;
			proc_HEXTORGBINT(glob,ctx,1,1,(PCV[]){t6.cv()},t7.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,956)) goto _0;
			g->Check(ctx);
			lrgbInteger=t8.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _4;
		{
			Txt t10;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t10.cv(),lrgbInteger.cv(),K_26x.cv()},2,10)) goto _0;
			lstring=t10.get();
		}
		{
			Long t11;
			t11=lstring.get().fLength;
			if (10<=t11.get()) goto _5;
		}
		{
			Txt t13;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t13.cv(),lstring.cv(),Long(3).cv()},2,12)) goto _0;
			g->AddString(K0x00.get(),t13.get(),lstring.get());
		}
_5:
		{
			Long t15;
			t15=lstring.get().fLength;
			if (8!=t15.get()) goto _6;
		}
		{
			Txt t17;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t17.cv(),lstring.cv(),Long(3).cv()},2,12)) goto _0;
			g->AddString(K_23.get(),t17.get(),lhexvalue.get());
		}
		goto _7;
_6:
		{
			Txt t19;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t19.cv(),lstring.cv(),Long(5).cv()},2,12)) goto _0;
			g->AddString(K_23.get(),t19.get(),lhexvalue.get());
		}
_7:
_4:
		{
			Obj t21;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1466)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KcurrentStyle.cv(),t22.cv())) goto _0;
			if (g->SetMember(ctx,t22.cv(),KfontColor.cv(),lhexvalue.cv())) goto _0;
		}
		{
			Obj t23;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t23.cv()},0,1466)) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),KcurrentStyle.cv(),t24.cv())) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KfontColor.cv(),t25.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kpkiCyZTQByA.cv(),K_23000000.cv(),t25.cv()},4,628)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t26;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,1466)) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),KcurrentStyle.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KfontColor.cv(),t28.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t28.cv()},3,628)) goto _0;
			g->Check(ctx);
		}
		goto _2;
_3:
_2:
_0:
_1:
;
	}

}
