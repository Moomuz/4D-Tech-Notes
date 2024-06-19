extern Txt KSampleText;
extern Txt KcurrentStyle;
extern Txt KfontSize;
extern Txt kFtXy4PdolDA;
extern unsigned char D_proc_RESIZESAMPLETEXT[];
void proc_RESIZESAMPLETEXT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_RESIZESAMPLETEXT);
	if (!ctx->doingAbort) {
		Long ltopBottomMargins;
		Long ltop;
		Long lnewWidth;
		Long lbottom;
		Long lright;
		Long lnewHeight;
		Long lleft;
		Long lrectHeight;
		{
			Ref t0;
			t0.setLocalRef(ctx,lbottom.cv());
			Ref t1;
			t1.setLocalRef(ctx,lright.cv());
			Ref t2;
			t2.setLocalRef(ctx,ltop.cv());
			Ref t3;
			t3.setLocalRef(ctx,lleft.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kFtXy4PdolDA.cv(),t3.cv(),t2.cv(),t1.cv(),t0.cv()},6,663)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t4;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1466)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KcurrentStyle.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KfontSize.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->OperationOnAny(ctx,3,t6.cv(),Num(0x1.8p+0).cv(),t7.cv())) goto _0;
			Long t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			lnewHeight=t8.get();
		}
		{
			Long t9;
			t9=lright.get()-lleft.get();
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),Long(0).cv(),Long(0).cv(),t9.cv(),lnewHeight.cv()},6,664)) goto _0;
			g->Check(ctx);
		}
		lrectHeight=lbottom.get()-ltop.get();
		{
			Long t11;
			t11=lrectHeight.get()-lnewHeight.get();
			Num t12;
			t12=t11.get();
			Num t13;
			t13=t12.get()/2;
			ltopBottomMargins=(sLONG)lrint(t13.get());
		}
		{
			Obj t15;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1466)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KcurrentStyle.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KfontSize.cv(),t17.cv())) goto _0;
			Bool t18;
			if (g->OperationOnAny(ctx,4,t17.cv(),lrectHeight.cv(),t18.cv())) goto _0;
			if (!(t18.get())) goto _2;
		}
		{
			Long t19;
			t19=ltop.get()+ltopBottomMargins.get();
			Long t20;
			t20=ltop.get()+ltopBottomMargins.get();
			Long t21;
			t21=t20.get()+lnewHeight.get();
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lleft.cv(),t19.cv(),lright.cv(),t21.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
			g->Check(ctx);
		}
		goto _3;
_2:
		{
			Long t22;
			t22=ltop.get()+lrectHeight.get();
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lleft.cv(),ltop.cv(),lright.cv(),t22.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
			g->Check(ctx);
		}
_3:
_0:
_1:
;
	}

}
