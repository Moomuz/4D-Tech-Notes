extern Txt KSampleText;
extern Txt Kcode;
extern Txt KcurrentStyle;
extern Txt KcurrentValue;
extern Txt KfontSize;
extern Txt KfontSizes;
Asm4d_Proc proc_RESIZESAMPLETEXT;
extern unsigned char D_obj_p_16_TextStyle_00FontSizeComboBox[];
void obj_p_16_TextStyle_00FontSizeComboBox( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_16_TextStyle_00FontSizeComboBox);
	if (!ctx->doingAbort) {
		{
			Obj t0;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1606)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kcode.cv(),t1.cv())) goto _0;
			Bool t2;
			if (g->OperationOnAny(ctx,6,t1.cv(),Long(20).cv(),t2.cv())) goto _0;
			Bool t3;
			t3=t2.get();
			if (t2.get()) goto _3;
			{
				Obj t4;
				if (g->Call(ctx,(PCV[]){t4.cv()},0,1606)) goto _0;
				Variant t5;
				if (g->GetMember(ctx,t4.cv(),Kcode.cv(),t5.cv())) goto _0;
				Bool t6;
				if (g->OperationOnAny(ctx,6,t5.cv(),Long(45).cv(),t6.cv())) goto _0;
				t3=t6.get();
			}
_3:
			if (!(t3.get())) goto _4;
		}
		{
			Obj t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1466)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KcurrentStyle.cv(),t8.cv())) goto _0;
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1466)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),KfontSizes.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KcurrentValue.cv(),t11.cv())) goto _0;
			if (g->SetMember(ctx,t8.cv(),KfontSize.cv(),t11.cv())) goto _0;
		}
		{
			Obj t12;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1466)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KfontSizes.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KcurrentValue.cv(),t14.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t14.cv()},3,165)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=17;
		proc_RESIZESAMPLETEXT(glob,ctx,0,0,nullptr,nullptr);
		if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
		if (ctx->doingAbort) goto _0;
		goto _2;
_4:
_2:
_0:
_1:
;
	}

}
