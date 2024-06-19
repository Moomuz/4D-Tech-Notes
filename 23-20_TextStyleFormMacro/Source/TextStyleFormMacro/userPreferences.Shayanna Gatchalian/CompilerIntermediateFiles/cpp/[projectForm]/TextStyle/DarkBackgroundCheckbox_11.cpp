extern Txt K;
extern Txt K_23000000;
extern Txt K_23FFFFFF;
extern Txt Kcode;
extern Txt kEMrF8qRxKHQ;
extern Txt kFtXy4PdolDA;
extern unsigned char D_obj_p_10_TextStyle_00DarkBackgroundCheckbox[];
void obj_p_10_TextStyle_00DarkBackgroundCheckbox( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_10_TextStyle_00DarkBackgroundCheckbox);
	if (!ctx->doingAbort) {
		{
			Obj t0;
			c.f.fLine=5;
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
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1466)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),kEMrF8qRxKHQ.cv(),t4.cv())) goto _0;
			Bool t5;
			if (g->OperationOnAny(ctx,6,t4.cv(),Bool(1).cv(),t5.cv())) goto _0;
			if (!(t5.get())) goto _4;
		}
		c.f.fLine=8;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kFtXy4PdolDA.cv(),K.cv(),K_23000000.cv()},4,628)) goto _0;
		g->Check(ctx);
		goto _5;
_4:
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kFtXy4PdolDA.cv(),K.cv(),K_23FFFFFF.cv()},4,628)) goto _0;
		g->Check(ctx);
_5:
		goto _2;
_3:
_2:
_0:
_1:
;
	}

}
