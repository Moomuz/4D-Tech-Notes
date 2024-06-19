extern Txt Kbold;
extern Txt KcurrentStyle;
extern Txt KfontStyle;
extern Txt Kitalic;
extern Txt Kunderline;
extern unsigned char D_proc_PARSEFONTSTYLEINT[];
void proc_PARSEFONTSTYLEINT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PARSEFONTSTYLEINT);
	if (!ctx->doingAbort) {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t0.get();
		}
		c.f.fLine=12;
		if (0!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _3;
		if (ctx->doingAbort) goto _0;
		{
			Bool t2;
			t2=Bool(0).get();
			c.f.fLine=13;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t2.cv())) goto _0;
		}
		{
			Bool t3;
			t3=Bool(0).get();
			c.f.fLine=14;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t3.cv())) goto _0;
		}
		{
			Bool t4;
			t4=Bool(0).get();
			c.f.fLine=15;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t4.cv())) goto _0;
		}
		goto _2;
_3:
		c.f.fLine=16;
		if (1!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _4;
		if (ctx->doingAbort) goto _0;
		{
			Bool t6;
			t6=Bool(1).get();
			c.f.fLine=17;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t6.cv())) goto _0;
		}
		{
			Bool t7;
			t7=Bool(0).get();
			c.f.fLine=18;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t7.cv())) goto _0;
		}
		{
			Bool t8;
			t8=Bool(0).get();
			c.f.fLine=19;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t8.cv())) goto _0;
		}
		goto _2;
_4:
		c.f.fLine=20;
		if (2!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _5;
		if (ctx->doingAbort) goto _0;
		{
			Bool t10;
			t10=Bool(0).get();
			c.f.fLine=21;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t10.cv())) goto _0;
		}
		{
			Bool t11;
			t11=Bool(1).get();
			c.f.fLine=22;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t11.cv())) goto _0;
		}
		{
			Bool t12;
			t12=Bool(0).get();
			c.f.fLine=23;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t12.cv())) goto _0;
		}
		{
			Obj t13;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1466)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KcurrentStyle.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KfontStyle.cv(),t15.cv())) goto _0;
			Bool t16;
			t16=Bool(1).get();
			if (g->SetMember(ctx,t15.cv(),Kitalic.cv(),t16.cv())) goto _0;
		}
		goto _2;
_5:
		c.f.fLine=26;
		if (3!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _6;
		if (ctx->doingAbort) goto _0;
		{
			Bool t18;
			t18=Bool(1).get();
			c.f.fLine=27;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t18.cv())) goto _0;
		}
		{
			Bool t19;
			t19=Bool(1).get();
			c.f.fLine=28;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t19.cv())) goto _0;
		}
		{
			Bool t20;
			t20=Bool(0).get();
			c.f.fLine=29;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t20.cv())) goto _0;
		}
		goto _2;
_6:
		c.f.fLine=30;
		if (4!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _7;
		if (ctx->doingAbort) goto _0;
		{
			Bool t22;
			t22=Bool(0).get();
			c.f.fLine=31;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t22.cv())) goto _0;
		}
		{
			Bool t23;
			t23=Bool(0).get();
			c.f.fLine=32;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t23.cv())) goto _0;
		}
		{
			Bool t24;
			t24=Bool(1).get();
			c.f.fLine=33;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t24.cv())) goto _0;
		}
		goto _2;
_7:
		c.f.fLine=34;
		if (5!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _8;
		if (ctx->doingAbort) goto _0;
		{
			Bool t26;
			t26=Bool(1).get();
			c.f.fLine=35;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t26.cv())) goto _0;
		}
		{
			Bool t27;
			t27=Bool(0).get();
			c.f.fLine=36;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t27.cv())) goto _0;
		}
		{
			Bool t28;
			t28=Bool(1).get();
			c.f.fLine=37;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t28.cv())) goto _0;
		}
		goto _2;
_8:
		c.f.fLine=38;
		if (6!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _9;
		if (ctx->doingAbort) goto _0;
		{
			Bool t30;
			t30=Bool(0).get();
			c.f.fLine=39;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t30.cv())) goto _0;
		}
		{
			Bool t31;
			t31=Bool(1).get();
			c.f.fLine=40;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t31.cv())) goto _0;
		}
		{
			Bool t32;
			t32=Bool(1).get();
			c.f.fLine=41;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t32.cv())) goto _0;
		}
		goto _2;
_9:
		c.f.fLine=42;
		if (7!=Parm<Long>(ctx,inParams,inNbParam,1).get()) goto _10;
		if (ctx->doingAbort) goto _0;
		{
			Bool t34;
			t34=Bool(1).get();
			c.f.fLine=43;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kbold.cv(),t34.cv())) goto _0;
		}
		{
			Bool t35;
			t35=Bool(1).get();
			c.f.fLine=44;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kitalic.cv(),t35.cv())) goto _0;
		}
		{
			Bool t36;
			t36=Bool(1).get();
			c.f.fLine=45;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kunderline.cv(),t36.cv())) goto _0;
		}
		goto _2;
_10:
_2:
_0:
_1:
;
	}

}
