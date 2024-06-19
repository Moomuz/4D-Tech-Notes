extern Txt K0;
extern Txt K1;
extern Txt K2;
extern Txt K3;
extern Txt K4;
extern Txt K5;
extern Txt K6;
extern Txt K7;
extern Txt K8;
extern Txt K9;
extern Txt KA;
extern Txt KB;
extern Txt KC;
extern Txt KD;
extern Txt KE;
extern Txt KF;
extern unsigned char D_proc_HEXTORGBINT[];
void proc_HEXTORGBINT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_HEXTORGBINT);
	if (!ctx->doingAbort) {
		Txt lredText;
		Long lblueInt;
		Txt lblueText;
		Long lredInt;
		Value_array_text lintValues;
		Txt lgreenText;
		Long lgreenInt;
		new ( outResult) Long();
		{
			Ref t0;
			t0.setLocalRef(ctx,lintValues.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,t0.cv(),Long(15).cv()},2,222)) goto _0;
		}
		c.f.fLine=13;
		lintValues.arrayElem(ctx,0)=K0.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=14;
		lintValues.arrayElem(ctx,1)=K1.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=15;
		lintValues.arrayElem(ctx,2)=K2.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=16;
		lintValues.arrayElem(ctx,3)=K3.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=17;
		lintValues.arrayElem(ctx,4)=K4.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=18;
		lintValues.arrayElem(ctx,5)=K5.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=19;
		lintValues.arrayElem(ctx,6)=K6.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=20;
		lintValues.arrayElem(ctx,7)=K7.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=21;
		lintValues.arrayElem(ctx,8)=K8.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=22;
		lintValues.arrayElem(ctx,9)=K9.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=23;
		lintValues.arrayElem(ctx,10)=KA.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=24;
		lintValues.arrayElem(ctx,11)=KB.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=25;
		lintValues.arrayElem(ctx,12)=KC.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=26;
		lintValues.arrayElem(ctx,13)=KD.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=27;
		lintValues.arrayElem(ctx,14)=KE.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=28;
		lintValues.arrayElem(ctx,15)=KF.get();
		if (ctx->doingAbort) goto _0;
		c.f.fLine=31;
		{
			Txt t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),Parm<Txt>(ctx,inParams,inNbParam,1).cv(),Long(2).cv()},2,12)) goto _0;
			Parm<Txt>(ctx,inParams,inNbParam,1)=t17.get();
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=34;
		{
			Txt t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),Parm<Txt>(ctx,inParams,inNbParam,1).cv(),Long(1).cv(),Long(2).cv()},3,12)) goto _0;
			lredText=t18.get();
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=35;
		{
			Txt t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),Parm<Txt>(ctx,inParams,inNbParam,1).cv(),Long(3).cv(),Long(2).cv()},3,12)) goto _0;
			lgreenText=t19.get();
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=36;
		{
			Txt t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),Parm<Txt>(ctx,inParams,inNbParam,1).cv(),Long(5).cv(),Long(2).cv()},3,12)) goto _0;
			lblueText=t20.get();
		}
		if (ctx->doingAbort) goto _0;
		{
			Txt t21;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t21.cv(),lredText.cv(),Long(1).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t22;
			t22.setLocalRef(ctx,lintValues.cv());
			Long t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),t22.cv(),t21.cv(),Long(0).cv()},3,230)) goto _0;
			Long t24;
			t24=t23.get()*16;
			Txt t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),lredText.cv(),Long(2).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t26;
			t26.setLocalRef(ctx,lintValues.cv());
			Long t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t26.cv(),t25.cv(),Long(0).cv()},3,230)) goto _0;
			lredInt=t24.get()+t27.get();
		}
		{
			Txt t29;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t29.cv(),lgreenText.cv(),Long(1).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t30;
			t30.setLocalRef(ctx,lintValues.cv());
			Long t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t30.cv(),t29.cv(),Long(0).cv()},3,230)) goto _0;
			Long t32;
			t32=t31.get()*16;
			Txt t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),lgreenText.cv(),Long(2).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t34;
			t34.setLocalRef(ctx,lintValues.cv());
			Long t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv(),t33.cv(),Long(0).cv()},3,230)) goto _0;
			lgreenInt=t32.get()+t35.get();
		}
		{
			Txt t37;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t37.cv(),lblueText.cv(),Long(1).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t38;
			t38.setLocalRef(ctx,lintValues.cv());
			Long t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),t38.cv(),t37.cv(),Long(0).cv()},3,230)) goto _0;
			Long t40;
			t40=t39.get()*16;
			Txt t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),lblueText.cv(),Long(2).cv(),Long(1).cv()},3,12)) goto _0;
			Ref t42;
			t42.setLocalRef(ctx,lintValues.cv());
			Long t43;
			if (g->Call(ctx,(PCV[]){t43.cv(),t42.cv(),t41.cv(),Long(0).cv()},3,230)) goto _0;
			lblueInt=t40.get()+t43.get();
		}
		{
			Long t45;
			t45=lredInt.get()*65536;
			Long t46;
			t46=lgreenInt.get()*256;
			Long t47;
			t47=t45.get()+t46.get();
			c.f.fLine=46;
			Res<Long>(outResult)=t47.get()+lblueInt.get();
		}
_0:
_1:
;
	}

}
