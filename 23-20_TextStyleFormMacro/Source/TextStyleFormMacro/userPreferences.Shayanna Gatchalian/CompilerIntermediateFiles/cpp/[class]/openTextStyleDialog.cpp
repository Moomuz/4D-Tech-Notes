extern Txt KTextStyle;
extern Txt Kbold;
extern Txt KcurrentPage;
extern Txt KcurrentStyle;
extern Txt Keditor;
extern Txt KfontColor;
extern Txt KfontFamily;
extern Txt KfontName;
extern Txt KfontSize;
extern Txt KfontStyle;
extern Txt KfontWeight;
extern Txt Kitalic;
extern Txt Klength;
extern Txt Knormal;
extern Txt Kobjects;
extern Txt Kstroke;
extern Txt KtextDecoration;
extern Txt Kunderline;
extern Txt kFZbq1_5YBqw;
extern Txt kmr4kIudxYwc;
extern Txt kqzKKNHgPGIQ;
extern unsigned char D_proc_openTextStyleDialog_2EonInvoke[];
void proc_openTextStyleDialog_2EonInvoke( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_openTextStyleDialog_2EonInvoke);
	if (!ctx->doingAbort) {
		Txt lform;
		Txt lobjectName;
		Obj lformData;
		Long lwindow;
		Obj l__4D__auto__iter__0;
		new ( outResult) Obj();
		{
			Variant t0;
			c.f.fLine=13;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t0.cv())) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),kqzKKNHgPGIQ.cv(),t1.cv())) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),Klength.cv(),t2.cv())) goto _0;
			Bool t3;
			if (g->OperationOnAny(ctx,6,t2.cv(),Num(0).cv(),t3.cv())) goto _0;
			if (!(t3.get())) goto _2;
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,kFZbq1_5YBqw.cv()},1,41)) goto _0;
		g->Check(ctx);
_2:
		lform=KTextStyle.get();
		{
			Long t4;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t4.cv(),lform.cv(),Long(5).cv(),Ref((optyp)3).cv()},3,675)) goto _0;
			g->Check(ctx);
			lwindow=t4.get();
		}
		{
			Obj t5;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lformData=t5.get();
		}
		c.f.fLine=21;
		if (g->SetMember(ctx,lformData.cv(),Keditor.cv(),Parm<Obj>(ctx,inParams,inNbParam,1).cv())) goto _0;
		if (ctx->doingAbort) goto _0;
		{
			Variant t6;
			c.f.fLine=22;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),kqzKKNHgPGIQ.cv(),t7.cv())) goto _0;
			if (g->SetMember(ctx,lformData.cv(),kqzKKNHgPGIQ.cv(),t7.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,lform.cv(),lformData.cv()},2,40)) goto _0;
		g->Check(ctx);
		c.f.fLine=24;
		if (g->Call(ctx,(PCV[]){nullptr},0,154)) goto _0;
		g->Check(ctx);
		{
			Variant t8;
			c.f.fLine=27;
			if (g->GetMember(ctx,lformData.cv(),kmr4kIudxYwc.cv(),t8.cv())) goto _0;
			Bool t9;
			if (g->OperationOnAny(ctx,6,t8.cv(),Bool(1).cv(),t9.cv())) goto _0;
			if (!(t9.get())) goto _3;
		}
		{
			Variant t10;
			c.f.fLine=28;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),kqzKKNHgPGIQ.cv(),t11.cv())) goto _0;
			Ref t12;
			t12.setLocalRef(ctx,lobjectName.cv());
			Obj t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),t11.cv()},2,1795)) goto _0;
			l__4D__auto__iter__0=t13.get();
		}
		if (ctx->doingAbort) goto _0;
_4:
		{
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),l__4D__auto__iter__0.cv()},1,1796)) goto _0;
			g->Check(ctx);
			if (!(t14.get())) goto _5;
		}
		{
			Variant t15;
			c.f.fLine=29;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KcurrentPage.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),Kobjects.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),lobjectName.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),KfontName.cv(),t20.cv())) goto _0;
			if (g->SetMember(ctx,t18.cv(),KfontFamily.cv(),t20.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t21;
			c.f.fLine=30;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KcurrentPage.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),Kobjects.cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),lobjectName.cv(),t24.cv())) goto _0;
			Variant t25;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KfontSize.cv(),t26.cv())) goto _0;
			if (g->SetMember(ctx,t24.cv(),KfontSize.cv(),t26.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t27;
			c.f.fLine=31;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KcurrentPage.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),Kobjects.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->GetMember(ctx,t29.cv(),lobjectName.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t31.cv())) goto _0;
			Variant t32;
			if (g->GetMember(ctx,t31.cv(),KfontColor.cv(),t32.cv())) goto _0;
			if (g->SetMember(ctx,t30.cv(),Kstroke.cv(),t32.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t33;
			c.f.fLine=32;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),KfontStyle.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),Kbold.cv(),t35.cv())) goto _0;
			Bool t36;
			if (g->OperationOnAny(ctx,6,t35.cv(),Bool(1).cv(),t36.cv())) goto _0;
			if (!(t36.get())) goto _6;
		}
		{
			Variant t37;
			c.f.fLine=33;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KcurrentPage.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->GetMember(ctx,t38.cv(),Kobjects.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->GetMember(ctx,t39.cv(),lobjectName.cv(),t40.cv())) goto _0;
			if (g->SetMember(ctx,t40.cv(),KfontWeight.cv(),Kbold.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		goto _7;
_6:
		{
			Variant t41;
			c.f.fLine=35;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t41.cv())) goto _0;
			Variant t42;
			if (g->GetMember(ctx,t41.cv(),KcurrentPage.cv(),t42.cv())) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),Kobjects.cv(),t43.cv())) goto _0;
			Variant t44;
			if (g->GetMember(ctx,t43.cv(),lobjectName.cv(),t44.cv())) goto _0;
			if (g->SetMember(ctx,t44.cv(),KfontWeight.cv(),Knormal.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_7:
		{
			Variant t45;
			c.f.fLine=37;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t45.cv())) goto _0;
			Variant t46;
			if (g->GetMember(ctx,t45.cv(),KfontStyle.cv(),t46.cv())) goto _0;
			Variant t47;
			if (g->GetMember(ctx,t46.cv(),Kitalic.cv(),t47.cv())) goto _0;
			Bool t48;
			if (g->OperationOnAny(ctx,6,t47.cv(),Bool(1).cv(),t48.cv())) goto _0;
			if (!(t48.get())) goto _8;
		}
		{
			Variant t49;
			c.f.fLine=38;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t49.cv())) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),KcurrentPage.cv(),t50.cv())) goto _0;
			Variant t51;
			if (g->GetMember(ctx,t50.cv(),Kobjects.cv(),t51.cv())) goto _0;
			Variant t52;
			if (g->GetMember(ctx,t51.cv(),lobjectName.cv(),t52.cv())) goto _0;
			if (g->SetMember(ctx,t52.cv(),KfontStyle.cv(),Kitalic.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		goto _9;
_8:
		{
			Variant t53;
			c.f.fLine=40;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t53.cv())) goto _0;
			Variant t54;
			if (g->GetMember(ctx,t53.cv(),KcurrentPage.cv(),t54.cv())) goto _0;
			Variant t55;
			if (g->GetMember(ctx,t54.cv(),Kobjects.cv(),t55.cv())) goto _0;
			Variant t56;
			if (g->GetMember(ctx,t55.cv(),lobjectName.cv(),t56.cv())) goto _0;
			if (g->SetMember(ctx,t56.cv(),KfontStyle.cv(),Knormal.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_9:
		{
			Variant t57;
			c.f.fLine=42;
			if (g->GetMember(ctx,lformData.cv(),KcurrentStyle.cv(),t57.cv())) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),KfontStyle.cv(),t58.cv())) goto _0;
			Variant t59;
			if (g->GetMember(ctx,t58.cv(),Kunderline.cv(),t59.cv())) goto _0;
			Bool t60;
			if (g->OperationOnAny(ctx,6,t59.cv(),Bool(1).cv(),t60.cv())) goto _0;
			if (!(t60.get())) goto _10;
		}
		{
			Variant t61;
			c.f.fLine=43;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t61.cv())) goto _0;
			Variant t62;
			if (g->GetMember(ctx,t61.cv(),KcurrentPage.cv(),t62.cv())) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),Kobjects.cv(),t63.cv())) goto _0;
			Variant t64;
			if (g->GetMember(ctx,t63.cv(),lobjectName.cv(),t64.cv())) goto _0;
			if (g->SetMember(ctx,t64.cv(),KtextDecoration.cv(),Kunderline.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		goto _11;
_10:
		{
			Variant t65;
			c.f.fLine=45;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t65.cv())) goto _0;
			Variant t66;
			if (g->GetMember(ctx,t65.cv(),KcurrentPage.cv(),t66.cv())) goto _0;
			Variant t67;
			if (g->GetMember(ctx,t66.cv(),Kobjects.cv(),t67.cv())) goto _0;
			Variant t68;
			if (g->GetMember(ctx,t67.cv(),lobjectName.cv(),t68.cv())) goto _0;
			if (g->SetMember(ctx,t68.cv(),KtextDecoration.cv(),Knormal.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_11:
		goto _4;
_5:
		{
			Obj t69;
			l__4D__auto__iter__0=t69.get();
		}
		{
			Variant t70;
			c.f.fLine=51;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Keditor.cv(),t70.cv())) goto _0;
			Variant t71;
			if (g->GetMember(ctx,t70.cv(),KcurrentPage.cv(),t71.cv())) goto _0;
			Obj t72;
			if (g->Call(ctx,(PCV[]){t72.cv(),KcurrentPage.cv(),t71.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t72.get();
		}
		if (ctx->doingAbort) goto _0;
_3:
_0:
_1:
;
	}

}
