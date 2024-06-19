extern unsigned char D_obj_p_9_TextStyle_00ApplyButton[];
void obj_p_9_TextStyle_00ApplyButton( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_9_TextStyle_00ApplyButton);
	if (!ctx->doingAbort) {
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr},0,269)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	}

}
