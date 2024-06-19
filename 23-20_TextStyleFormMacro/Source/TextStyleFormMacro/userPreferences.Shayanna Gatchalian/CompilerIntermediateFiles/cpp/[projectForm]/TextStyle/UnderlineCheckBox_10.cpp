extern Txt KSampleText;
extern Txt Kcode;
Asm4d_Proc proc_CALCFONTSTYLEINT;
extern unsigned char D_obj_p_9_TextStyle_00UnderlineCheckBox[];
void obj_p_9_TextStyle_00UnderlineCheckBox( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_9_TextStyle_00UnderlineCheckBox);
	if (!ctx->doingAbort) {
		Long lfontStyleInteger;
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
			Long t3;
			c.f.fLine=11;
			proc_CALCFONTSTYLEINT(glob,ctx,0,0,nullptr,t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lfontStyleInteger=t3.get();
		}
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lfontStyleInteger.cv()},3,166)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
_2:
_0:
_1:
;
	}

}
