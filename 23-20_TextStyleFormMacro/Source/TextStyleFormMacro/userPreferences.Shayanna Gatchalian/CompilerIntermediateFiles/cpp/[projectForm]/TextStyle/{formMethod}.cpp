extern Txt K;
extern Txt KApplyButton;
extern Txt KBold;
extern Txt KBoldCheckBox;
extern Txt KFontsListBox;
extern Txt KItalic;
extern Txt KItalicCheckBox;
extern Txt KSampleText;
extern Txt K_23000000;
extern Txt K_27_22_3E;
extern Txt K_3C_2Fspan_3E;
extern Txt Kbold;
extern Txt Kcode;
extern Txt KcurrentPage;
extern Txt KcurrentStyle;
extern Txt KcurrentValue;
extern Txt Keditor;
extern Txt KfontColor;
extern Txt KfontFamily;
extern Txt KfontName;
extern Txt KfontNameDisplay;
extern Txt KfontSize;
extern Txt KfontSizes;
extern Txt KfontStyle;
extern Txt KfontWeight;
extern Txt Kfonts;
extern Txt Kitalic;
extern Txt Klength;
extern Txt Knormal;
extern Txt Kobjects;
extern Txt Kpush;
extern Txt Kstroke;
extern Txt KtextDecoration;
extern Txt Kunderline;
extern Txt Kvalues;
extern Txt k3mJu4il7dQQ;
extern Txt kEMrF8qRxKHQ;
extern Txt kpkiCyZTQByA;
extern Txt kqzKKNHgPGIQ;
Asm4d_Proc proc_CALCFONTSTYLEINT;
Asm4d_Proc proc_RESIZESAMPLETEXT;
extern unsigned char D_form_p_TextStyle[];
void form_p_TextStyle( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_form_p_TextStyle);
	if (!ctx->doingAbort) {
		Txt lname;
		Long v0;
		Long v1;
		Long li;
		Long lfontStyleInteger;
		Obj lfontObj;
		Obj lcurrentStyle;
		Txt lobjectName;
		Col lfontsCol;
		Value_array_text lfontsArray;
		Value_array_text lstylesArray;
		Obj l__4D__auto__iter__0;
		Txt lobjectColor;
		Long lfontNameIndex;
		Obj lfontStyleObj;
		Col lselection;
		Bool lfound;
		Value_array_text lnamesArray;
		Txt lfont;
		{
			Obj t0;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1606)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kcode.cv(),t1.cv())) goto _0;
			Bool t2;
			if (g->OperationOnAny(ctx,6,t1.cv(),Long(1).cv(),t2.cv())) goto _0;
			if (!(t2.get())) goto _3;
		}
		{
			Ref t3;
			t3.setLocalRef(ctx,lfontsArray.cv());
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,t3.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t4;
			t4.setLocalRef(ctx,lstylesArray.cv());
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){nullptr,t4.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t5;
			t5.setLocalRef(ctx,lnamesArray.cv());
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Col t6;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1472)) goto _0;
			g->Check(ctx);
			lfontsCol=t6.get();
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,lfontsArray.cv());
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){nullptr,t7.cv()},1,460)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t8;
			t8.setLocalRef(ctx,lfontsArray.cv());
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){nullptr,lfontsCol.cv(),t8.cv()},2,1563)) goto _0;
			g->Check(ctx);
		}
		{
			Col t9;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1472)) goto _0;
			g->Check(ctx);
			lselection=t9.get();
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,lfont.cv());
			Obj t11;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t11.cv(),t10.cv(),lfontsCol.cv()},2,1795)) goto _0;
			l__4D__auto__iter__0=t11.get();
		}
_4:
		{
			Bool t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),l__4D__auto__iter__0.cv()},1,1796)) goto _0;
			g->Check(ctx);
			if (!(t12.get())) goto _5;
		}
		{
			Ref t13;
			t13.setLocalRef(ctx,lnamesArray.cv());
			Ref t14;
			t14.setLocalRef(ctx,lstylesArray.cv());
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){nullptr,lfont.cv(),t14.cv(),t13.cv()},3,1362)) goto _0;
			g->Check(ctx);
		}
		li=0;
		{
			Ref t15;
			t15.setLocalRef(ctx,lnamesArray.cv());
			Long t16;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv()},1,274)) goto _0;
			v0=t16.get();
		}
		goto _6;
_8:
		{
			Txt t18;
			c.f.fLine=37;
			t18=lnamesArray.arrayElem(ctx,li.get()).get();
			Bool t17;
			t17=g->CompareString(ctx,t18.get(),K.get())!=0;
			if (!(t17.get())) goto _10;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t19;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lfontObj=t19.get();
		}
		{
			Txt t20;
			c.f.fLine=40;
			t20=lnamesArray.arrayElem(ctx,li.get()).get();
			Txt t21;
			t21=t20.get();
			if (g->SetMember(ctx,lfontObj.cv(),KfontName.cv(),t21.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		{
			Txt t22;
			c.f.fLine=41;
			t22=lnamesArray.arrayElem(ctx,li.get()).get();
			Txt t23;
			g->AddString(k3mJu4il7dQQ.get(),t22.get(),t23.get());
			Txt t24;
			g->AddString(t23.get(),K_27_22_3E.get(),t24.get());
			Txt t25;
			t25=lnamesArray.arrayElem(ctx,li.get()).get();
			Txt t26;
			g->AddString(t24.get(),t25.get(),t26.get());
			Txt t27;
			g->AddString(t26.get(),K_3C_2Fspan_3E.get(),t27.get());
			if (g->SetMember(ctx,lfontObj.cv(),KfontNameDisplay.cv(),t27.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=44;
		if (g->Call(ctx,(PCV[]){nullptr,lselection.cv(),Kpush.cv(),lfontObj.cv()},3,1500)) goto _0;
		g->Check(ctx);
_10:
_7:
		li=li.get()+1;
_6:
		if (li.get()<=v0.get()) goto _8;
_9:
		goto _4;
_5:
		{
			Obj t30;
			l__4D__auto__iter__0=t30.get();
		}
		{
			Obj t31;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1466)) goto _0;
			if (g->SetMember(ctx,t31.cv(),Kfonts.cv(),lselection.cv())) goto _0;
		}
		{
			Obj t32;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lcurrentStyle=t32.get();
		}
		{
			Obj t33;
			c.f.fLine=58;
			if (g->Call(ctx,(PCV[]){t33.cv()},0,1466)) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),Keditor.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),Keditor.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),kqzKKNHgPGIQ.cv(),t36.cv())) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),Klength.cv(),t37.cv())) goto _0;
			Bool t38;
			if (g->OperationOnAny(ctx,6,t37.cv(),Num(1).cv(),t38.cv())) goto _0;
			if (!(t38.get())) goto _11;
		}
		{
			Obj t39;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t39.cv()},0,1466)) goto _0;
			Variant t40;
			if (g->GetMember(ctx,t39.cv(),Keditor.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->GetMember(ctx,t40.cv(),Keditor.cv(),t41.cv())) goto _0;
			Variant t42;
			if (g->GetMember(ctx,t41.cv(),kqzKKNHgPGIQ.cv(),t42.cv())) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),Long(0).cv(),t43.cv())) goto _0;
			Txt t44;
			if (!g->GetValue(ctx,(PCV[]){t44.cv(),t43.cv(),nullptr})) goto _0;
			lobjectName=t44.get();
		}
		{
			Obj t45;
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){t45.cv()},0,1466)) goto _0;
			Variant t46;
			if (g->GetMember(ctx,t45.cv(),Keditor.cv(),t46.cv())) goto _0;
			Variant t47;
			if (g->GetMember(ctx,t46.cv(),Keditor.cv(),t47.cv())) goto _0;
			Variant t48;
			if (g->GetMember(ctx,t47.cv(),KcurrentPage.cv(),t48.cv())) goto _0;
			Variant t49;
			if (g->GetMember(ctx,t48.cv(),Kobjects.cv(),t49.cv())) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),lobjectName.cv(),t50.cv())) goto _0;
			Variant t51;
			if (g->GetMember(ctx,t50.cv(),KfontFamily.cv(),t51.cv())) goto _0;
			Bool t52;
			if (g->OperationOnAny(ctx,7,t51.cv(),K.cv(),t52.cv())) goto _0;
			if (!(t52.get())) goto _12;
		}
		{
			Obj t53;
			c.f.fLine=64;
			if (g->Call(ctx,(PCV[]){t53.cv()},0,1466)) goto _0;
			Variant t54;
			if (g->GetMember(ctx,t53.cv(),Keditor.cv(),t54.cv())) goto _0;
			Variant t55;
			if (g->GetMember(ctx,t54.cv(),Keditor.cv(),t55.cv())) goto _0;
			Variant t56;
			if (g->GetMember(ctx,t55.cv(),KcurrentPage.cv(),t56.cv())) goto _0;
			Variant t57;
			if (g->GetMember(ctx,t56.cv(),Kobjects.cv(),t57.cv())) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),lobjectName.cv(),t58.cv())) goto _0;
			Variant t59;
			if (g->GetMember(ctx,t58.cv(),KfontFamily.cv(),t59.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontName.cv(),t59.cv())) goto _0;
		}
		goto _13;
_12:
		{
			Txt t60;
			c.f.fLine=66;
			t60=lfontsArray.arrayElem(ctx,1).get();
			Txt t61;
			t61=t60.get();
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontName.cv(),t61.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_13:
		{
			Obj t62;
			c.f.fLine=68;
			if (g->Call(ctx,(PCV[]){t62.cv()},0,1466)) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),Keditor.cv(),t63.cv())) goto _0;
			Variant t64;
			if (g->GetMember(ctx,t63.cv(),Keditor.cv(),t64.cv())) goto _0;
			Variant t65;
			if (g->GetMember(ctx,t64.cv(),KcurrentPage.cv(),t65.cv())) goto _0;
			Variant t66;
			if (g->GetMember(ctx,t65.cv(),Kobjects.cv(),t66.cv())) goto _0;
			Variant t67;
			if (g->GetMember(ctx,t66.cv(),lobjectName.cv(),t67.cv())) goto _0;
			Variant t68;
			if (g->GetMember(ctx,t67.cv(),KfontSize.cv(),t68.cv())) goto _0;
			Bool t69;
			if (g->OperationOnAny(ctx,7,t68.cv(),Num(0).cv(),t69.cv())) goto _0;
			if (!(t69.get())) goto _14;
		}
		{
			Obj t70;
			c.f.fLine=69;
			if (g->Call(ctx,(PCV[]){t70.cv()},0,1466)) goto _0;
			Variant t71;
			if (g->GetMember(ctx,t70.cv(),Keditor.cv(),t71.cv())) goto _0;
			Variant t72;
			if (g->GetMember(ctx,t71.cv(),Keditor.cv(),t72.cv())) goto _0;
			Variant t73;
			if (g->GetMember(ctx,t72.cv(),KcurrentPage.cv(),t73.cv())) goto _0;
			Variant t74;
			if (g->GetMember(ctx,t73.cv(),Kobjects.cv(),t74.cv())) goto _0;
			Variant t75;
			if (g->GetMember(ctx,t74.cv(),lobjectName.cv(),t75.cv())) goto _0;
			Variant t76;
			if (g->GetMember(ctx,t75.cv(),KfontSize.cv(),t76.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontSize.cv(),t76.cv())) goto _0;
		}
		goto _15;
_14:
		c.f.fLine=71;
		if (g->SetMember(ctx,lcurrentStyle.cv(),KfontSize.cv(),Long(10).cv())) goto _0;
_15:
		{
			Obj t77;
			c.f.fLine=75;
			if (g->Call(ctx,(PCV[]){t77.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t77.cv())) goto _0;
		}
		{
			Obj t78;
			c.f.fLine=78;
			if (g->Call(ctx,(PCV[]){t78.cv()},0,1466)) goto _0;
			Variant t79;
			if (g->GetMember(ctx,t78.cv(),Keditor.cv(),t79.cv())) goto _0;
			Variant t80;
			if (g->GetMember(ctx,t79.cv(),Keditor.cv(),t80.cv())) goto _0;
			Variant t81;
			if (g->GetMember(ctx,t80.cv(),KcurrentPage.cv(),t81.cv())) goto _0;
			Variant t82;
			if (g->GetMember(ctx,t81.cv(),Kobjects.cv(),t82.cv())) goto _0;
			Variant t83;
			if (g->GetMember(ctx,t82.cv(),lobjectName.cv(),t83.cv())) goto _0;
			Variant t84;
			if (g->GetMember(ctx,t83.cv(),KfontWeight.cv(),t84.cv())) goto _0;
			Bool t85;
			if (g->OperationOnAny(ctx,6,t84.cv(),Knormal.cv(),t85.cv())) goto _0;
			if (!(t85.get())) goto _16;
		}
		{
			Variant t86;
			c.f.fLine=79;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t86.cv())) goto _0;
			Bool t87;
			t87=Bool(0).get();
			if (g->SetMember(ctx,t86.cv(),Kbold.cv(),t87.cv())) goto _0;
		}
		goto _17;
_16:
		{
			Variant t88;
			c.f.fLine=81;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t88.cv())) goto _0;
			Bool t89;
			t89=Bool(1).get();
			if (g->SetMember(ctx,t88.cv(),Kbold.cv(),t89.cv())) goto _0;
		}
_17:
		{
			Obj t90;
			c.f.fLine=85;
			if (g->Call(ctx,(PCV[]){t90.cv()},0,1466)) goto _0;
			Variant t91;
			if (g->GetMember(ctx,t90.cv(),Keditor.cv(),t91.cv())) goto _0;
			Variant t92;
			if (g->GetMember(ctx,t91.cv(),Keditor.cv(),t92.cv())) goto _0;
			Variant t93;
			if (g->GetMember(ctx,t92.cv(),KcurrentPage.cv(),t93.cv())) goto _0;
			Variant t94;
			if (g->GetMember(ctx,t93.cv(),Kobjects.cv(),t94.cv())) goto _0;
			Variant t95;
			if (g->GetMember(ctx,t94.cv(),lobjectName.cv(),t95.cv())) goto _0;
			Variant t96;
			if (g->GetMember(ctx,t95.cv(),KfontStyle.cv(),t96.cv())) goto _0;
			Bool t97;
			if (g->OperationOnAny(ctx,6,t96.cv(),Knormal.cv(),t97.cv())) goto _0;
			if (!(t97.get())) goto _18;
		}
		{
			Variant t98;
			c.f.fLine=86;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t98.cv())) goto _0;
			Bool t99;
			t99=Bool(0).get();
			if (g->SetMember(ctx,t98.cv(),Kitalic.cv(),t99.cv())) goto _0;
		}
		goto _19;
_18:
		{
			Variant t100;
			c.f.fLine=88;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t100.cv())) goto _0;
			Bool t101;
			t101=Bool(1).get();
			if (g->SetMember(ctx,t100.cv(),Kitalic.cv(),t101.cv())) goto _0;
		}
_19:
		{
			Obj t102;
			c.f.fLine=92;
			if (g->Call(ctx,(PCV[]){t102.cv()},0,1466)) goto _0;
			Variant t103;
			if (g->GetMember(ctx,t102.cv(),Keditor.cv(),t103.cv())) goto _0;
			Variant t104;
			if (g->GetMember(ctx,t103.cv(),Keditor.cv(),t104.cv())) goto _0;
			Variant t105;
			if (g->GetMember(ctx,t104.cv(),KcurrentPage.cv(),t105.cv())) goto _0;
			Variant t106;
			if (g->GetMember(ctx,t105.cv(),Kobjects.cv(),t106.cv())) goto _0;
			Variant t107;
			if (g->GetMember(ctx,t106.cv(),lobjectName.cv(),t107.cv())) goto _0;
			Variant t108;
			if (g->GetMember(ctx,t107.cv(),KtextDecoration.cv(),t108.cv())) goto _0;
			Bool t109;
			if (g->OperationOnAny(ctx,6,t108.cv(),Knormal.cv(),t109.cv())) goto _0;
			if (!(t109.get())) goto _20;
		}
		{
			Variant t110;
			c.f.fLine=93;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t110.cv())) goto _0;
			Bool t111;
			t111=Bool(0).get();
			if (g->SetMember(ctx,t110.cv(),Kunderline.cv(),t111.cv())) goto _0;
		}
		goto _21;
_20:
		{
			Variant t112;
			c.f.fLine=95;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t112.cv())) goto _0;
			Bool t113;
			t113=Bool(1).get();
			if (g->SetMember(ctx,t112.cv(),Kunderline.cv(),t113.cv())) goto _0;
		}
_21:
		{
			Obj t114;
			c.f.fLine=99;
			if (g->Call(ctx,(PCV[]){t114.cv()},0,1466)) goto _0;
			Variant t115;
			if (g->GetMember(ctx,t114.cv(),Keditor.cv(),t115.cv())) goto _0;
			Variant t116;
			if (g->GetMember(ctx,t115.cv(),Keditor.cv(),t116.cv())) goto _0;
			Variant t117;
			if (g->GetMember(ctx,t116.cv(),KcurrentPage.cv(),t117.cv())) goto _0;
			Variant t118;
			if (g->GetMember(ctx,t117.cv(),Kobjects.cv(),t118.cv())) goto _0;
			Variant t119;
			if (g->GetMember(ctx,t118.cv(),lobjectName.cv(),t119.cv())) goto _0;
			Variant t120;
			if (g->GetMember(ctx,t119.cv(),Kstroke.cv(),t120.cv())) goto _0;
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontColor.cv(),t120.cv())) goto _0;
		}
		lfound=Bool(0).get();
		li=0;
_22:
		{
			Obj t121;
			c.f.fLine=104;
			if (g->Call(ctx,(PCV[]){t121.cv()},0,1466)) goto _0;
			Variant t122;
			if (g->GetMember(ctx,t121.cv(),Kfonts.cv(),t122.cv())) goto _0;
			Variant t123;
			if (g->GetMember(ctx,t122.cv(),Klength.cv(),t123.cv())) goto _0;
			Bool t124;
			if (g->OperationOnAny(ctx,4,li.cv(),t123.cv(),t124.cv())) goto _0;
			Bool t125;
			t125=lfound.get()==Bool(0).get();
			Bool t126;
			t126=t124.get()&&t125.get();
			if (!(t126.get())) goto _23;
		}
		{
			Obj t127;
			c.f.fLine=105;
			if (g->Call(ctx,(PCV[]){t127.cv()},0,1466)) goto _0;
			Variant t128;
			if (g->GetMember(ctx,t127.cv(),Kfonts.cv(),t128.cv())) goto _0;
			Variant t129;
			if (g->GetMember(ctx,t128.cv(),li.cv(),t129.cv())) goto _0;
			Variant t130;
			if (g->GetMember(ctx,t129.cv(),KfontName.cv(),t130.cv())) goto _0;
			Variant t131;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontName.cv(),t131.cv())) goto _0;
			Bool t132;
			if (g->OperationOnAny(ctx,6,t130.cv(),t131.cv(),t132.cv())) goto _0;
			if (!(t132.get())) goto _24;
		}
		{
			Long t133;
			t133=li.get()+1;
			c.f.fLine=107;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KFontsListBox.cv(),t133.cv()},3,912)) goto _0;
			g->Check(ctx);
		}
		{
			Long t134;
			t134=li.get()+1;
			c.f.fLine=108;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KFontsListBox.cv(),t134.cv(),Ref((optyp)3).cv()},4,906)) goto _0;
			g->Check(ctx);
		}
		lfound=Bool(1).get();
_24:
		li=li.get()+1;
		goto _22;
_23:
		c.f.fLine=115;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lfontStyleInteger.cv()},3,166)) goto _0;
		g->Check(ctx);
		goto _25;
_11:
		{
			Txt t136;
			c.f.fLine=119;
			t136=lfontsArray.arrayElem(ctx,1).get();
			Txt t137;
			t137=t136.get();
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontName.cv(),t137.cv())) goto _0;
		}
		if (ctx->doingAbort) goto _0;
		c.f.fLine=120;
		if (g->SetMember(ctx,lcurrentStyle.cv(),KfontSize.cv(),Long(10).cv())) goto _0;
		{
			Obj t138;
			c.f.fLine=121;
			if (g->Call(ctx,(PCV[]){t138.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t138.cv())) goto _0;
		}
		{
			Variant t139;
			c.f.fLine=122;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t139.cv())) goto _0;
			Bool t140;
			t140=Bool(0).get();
			if (g->SetMember(ctx,t139.cv(),Kbold.cv(),t140.cv())) goto _0;
		}
		{
			Variant t141;
			c.f.fLine=123;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t141.cv())) goto _0;
			Bool t142;
			t142=Bool(0).get();
			if (g->SetMember(ctx,t141.cv(),Kunderline.cv(),t142.cv())) goto _0;
		}
		{
			Variant t143;
			c.f.fLine=124;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontStyle.cv(),t143.cv())) goto _0;
			Bool t144;
			t144=Bool(0).get();
			if (g->SetMember(ctx,t143.cv(),Kitalic.cv(),t144.cv())) goto _0;
		}
		c.f.fLine=125;
		if (g->SetMember(ctx,lcurrentStyle.cv(),KfontColor.cv(),K_23000000.cv())) goto _0;
		c.f.fLine=128;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KFontsListBox.cv(),Long(1).cv()},3,912)) goto _0;
		g->Check(ctx);
_25:
		{
			Obj t145;
			c.f.fLine=132;
			if (g->Call(ctx,(PCV[]){t145.cv()},0,1466)) goto _0;
			if (g->SetMember(ctx,t145.cv(),KcurrentStyle.cv(),lcurrentStyle.cv())) goto _0;
		}
		{
			Variant t146;
			c.f.fLine=137;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontName.cv(),t146.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t146.cv()},3,164)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t147;
			c.f.fLine=138;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontSize.cv(),t147.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t147.cv()},3,165)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t148;
			c.f.fLine=139;
			if (g->GetMember(ctx,lcurrentStyle.cv(),KfontColor.cv(),t148.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t148.cv()},3,628)) goto _0;
			g->Check(ctx);
		}
		{
			Long t149;
			c.f.fLine=140;
			proc_CALCFONTSTYLEINT(glob,ctx,0,0,nullptr,t149.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t149.cv()},3,166)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t150;
			c.f.fLine=144;
			if (g->Call(ctx,(PCV[]){t150.cv()},0,1466)) goto _0;
			Variant t151;
			if (g->GetMember(ctx,t150.cv(),KcurrentStyle.cv(),t151.cv())) goto _0;
			Variant t152;
			if (g->GetMember(ctx,t151.cv(),KfontName.cv(),t152.cv())) goto _0;
			Ref t153;
			t153.setLocalRef(ctx,lnamesArray.cv());
			Ref t154;
			t154.setLocalRef(ctx,lstylesArray.cv());
			Txt t155;
			if (!g->GetValue(ctx,(PCV[]){t155.cv(),t152.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t155.cv(),t154.cv(),t153.cv()},3,1362)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t156;
			t156.setLocalRef(ctx,lstylesArray.cv());
			Long t157;
			c.f.fLine=147;
			if (g->Call(ctx,(PCV[]){t157.cv(),t156.cv(),KBold.cv()},2,230)) goto _0;
			li=t157.get();
		}
		if (-1==li.get()) goto _26;
		{
			Bool t159;
			t159=Bool(1).get();
			c.f.fLine=150;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KBoldCheckBox.cv(),t159.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _27;
_26:
		{
			Bool t160;
			t160=Bool(0).get();
			c.f.fLine=153;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KBoldCheckBox.cv(),t160.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t161;
			c.f.fLine=154;
			if (g->Call(ctx,(PCV[]){t161.cv()},0,1466)) goto _0;
			Variant t162;
			if (g->GetMember(ctx,t161.cv(),KcurrentStyle.cv(),t162.cv())) goto _0;
			Variant t163;
			if (g->GetMember(ctx,t162.cv(),KfontStyle.cv(),t163.cv())) goto _0;
			Bool t164;
			t164=Bool(0).get();
			if (g->SetMember(ctx,t163.cv(),Kbold.cv(),t164.cv())) goto _0;
		}
_27:
		{
			Ref t165;
			t165.setLocalRef(ctx,lstylesArray.cv());
			Long t166;
			c.f.fLine=158;
			if (g->Call(ctx,(PCV[]){t166.cv(),t165.cv(),KItalic.cv()},2,230)) goto _0;
			li=t166.get();
		}
		if (-1==li.get()) goto _28;
		{
			Bool t168;
			t168=Bool(1).get();
			c.f.fLine=161;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KItalicCheckBox.cv(),t168.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _29;
_28:
		{
			Bool t169;
			t169=Bool(0).get();
			c.f.fLine=164;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KItalicCheckBox.cv(),t169.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t170;
			c.f.fLine=165;
			if (g->Call(ctx,(PCV[]){t170.cv()},0,1466)) goto _0;
			Variant t171;
			if (g->GetMember(ctx,t170.cv(),KcurrentStyle.cv(),t171.cv())) goto _0;
			Variant t172;
			if (g->GetMember(ctx,t171.cv(),KfontStyle.cv(),t172.cv())) goto _0;
			Bool t173;
			t173=Bool(0).get();
			if (g->SetMember(ctx,t172.cv(),Kitalic.cv(),t173.cv())) goto _0;
		}
_29:
		{
			Obj t174;
			c.f.fLine=171;
			if (g->Call(ctx,(PCV[]){t174.cv()},0,1466)) goto _0;
			Obj t175;
			if (g->Call(ctx,(PCV[]){t175.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t174.cv(),KfontSizes.cv(),t175.cv())) goto _0;
		}
		{
			Obj t176;
			c.f.fLine=172;
			if (g->Call(ctx,(PCV[]){t176.cv()},0,1466)) goto _0;
			Variant t177;
			if (g->GetMember(ctx,t176.cv(),KfontSizes.cv(),t177.cv())) goto _0;
			Col t178;
			if (g->Call(ctx,(PCV[]){t178.cv(),Long(8).cv(),Long(9).cv(),Long(10).cv(),Long(12).cv(),Long(14).cv(),Long(18).cv(),Long(24).cv()},7,1472)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t177.cv(),Kvalues.cv(),t178.cv())) goto _0;
		}
		{
			Obj t179;
			c.f.fLine=173;
			if (g->Call(ctx,(PCV[]){t179.cv()},0,1466)) goto _0;
			Variant t180;
			if (g->GetMember(ctx,t179.cv(),KfontSizes.cv(),t180.cv())) goto _0;
			Obj t181;
			if (g->Call(ctx,(PCV[]){t181.cv()},0,1466)) goto _0;
			Variant t182;
			if (g->GetMember(ctx,t181.cv(),KcurrentStyle.cv(),t182.cv())) goto _0;
			Variant t183;
			if (g->GetMember(ctx,t182.cv(),KfontSize.cv(),t183.cv())) goto _0;
			if (g->SetMember(ctx,t180.cv(),KcurrentValue.cv(),t183.cv())) goto _0;
		}
		{
			Obj t184;
			c.f.fLine=176;
			if (g->Call(ctx,(PCV[]){t184.cv()},0,1466)) goto _0;
			Variant t185;
			if (g->GetMember(ctx,t184.cv(),KcurrentStyle.cv(),t185.cv())) goto _0;
			Variant t186;
			if (g->GetMember(ctx,t185.cv(),KfontColor.cv(),t186.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kpkiCyZTQByA.cv(),K_23000000.cv(),t186.cv()},4,628)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t187;
			c.f.fLine=179;
			if (g->Call(ctx,(PCV[]){t187.cv()},0,1466)) goto _0;
			Bool t188;
			t188=Bool(0).get();
			if (g->SetMember(ctx,t187.cv(),kEMrF8qRxKHQ.cv(),t188.cv())) goto _0;
		}
		{
			Obj t189;
			c.f.fLine=182;
			if (g->Call(ctx,(PCV[]){t189.cv()},0,1466)) goto _0;
			Variant t190;
			if (g->GetMember(ctx,t189.cv(),Keditor.cv(),t190.cv())) goto _0;
			Variant t191;
			if (g->GetMember(ctx,t190.cv(),Keditor.cv(),t191.cv())) goto _0;
			Variant t192;
			if (g->GetMember(ctx,t191.cv(),kqzKKNHgPGIQ.cv(),t192.cv())) goto _0;
			Variant t193;
			if (g->GetMember(ctx,t192.cv(),Klength.cv(),t193.cv())) goto _0;
			Bool t194;
			if (g->OperationOnAny(ctx,6,t193.cv(),Num(0).cv(),t194.cv())) goto _0;
			if (!(t194.get())) goto _30;
		}
		{
			Bool t195;
			t195=Bool(0).get();
			c.f.fLine=183;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KApplyButton.cv(),t195.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
_30:
		c.f.fLine=188;
		proc_RESIZESAMPLETEXT(glob,ctx,0,0,nullptr,nullptr);
		if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
		if (ctx->doingAbort) goto _0;
		goto _2;
_3:
_2:
_0:
_1:
;
	}

}
