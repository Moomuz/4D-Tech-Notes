extern Txt Kbold;
extern Txt KcurrentStyle;
extern Txt KfontStyle;
extern Txt Kitalic;
extern Txt Kunderline;
extern unsigned char D_proc_CALCFONTSTYLEINT[];
void proc_CALCFONTSTYLEINT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_CALCFONTSTYLEINT);
	if (!ctx->doingAbort) {
		new ( outResult) Long();
		c.f.fLine=7;
		Res<Long>(outResult)=0;
		{
			Obj t0;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1466)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),KcurrentStyle.cv(),t1.cv())) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KfontStyle.cv(),t2.cv())) goto _0;
			Variant t3;
			if (g->GetMember(ctx,t2.cv(),Kbold.cv(),t3.cv())) goto _0;
			Bool t4;
			if (g->OperationOnAny(ctx,6,t3.cv(),Bool(1).cv(),t4.cv())) goto _0;
			if (!(t4.get())) goto _2;
		}
		c.f.fLine=11;
		Res<Long>(outResult)=Res<Long>(outResult).get()+1;
_2:
		{
			Obj t6;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1466)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KcurrentStyle.cv(),t7.cv())) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KfontStyle.cv(),t8.cv())) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),Kitalic.cv(),t9.cv())) goto _0;
			Bool t10;
			if (g->OperationOnAny(ctx,6,t9.cv(),Bool(1).cv(),t10.cv())) goto _0;
			if (!(t10.get())) goto _3;
		}
		c.f.fLine=15;
		Res<Long>(outResult)=Res<Long>(outResult).get()+2;
_3:
		{
			Obj t12;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1466)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KcurrentStyle.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KfontStyle.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),Kunderline.cv(),t15.cv())) goto _0;
			Bool t16;
			if (g->OperationOnAny(ctx,6,t15.cv(),Bool(1).cv(),t16.cv())) goto _0;
			if (!(t16.get())) goto _4;
		}
		c.f.fLine=19;
		Res<Long>(outResult)=Res<Long>(outResult).get()+4;
_4:
_0:
_1:
;
	}

}
