extern Txt kmr4kIudxYwc;
extern unsigned char D_obj_p_9_TextStyle_00ApplyButton[];
void obj_p_9_TextStyle_00ApplyButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_9_TextStyle_00ApplyButton);
	if (!ctx->doingAbort) {
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1466)) goto _0;
			Bool t1;
			t1=Bool(1).get();
			if (g->SetMember(ctx,t0.cv(),kmr4kIudxYwc.cv(),t1.cv())) goto _0;
		}
		c.f.fLine=6;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	}

}
