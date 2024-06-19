extern Txt KBold;
extern Txt KBoldCheckBox;
extern Txt KItalic;
extern Txt KItalicCheckBox;
extern Txt KSampleText;
extern Txt Kbold;
extern Txt Kcode;
extern Txt KcurrentFont;
extern Txt KcurrentStyle;
extern Txt KfontName;
extern Txt KfontStyle;
extern Txt Kitalic;
Asm4d_Proc proc_CALCFONTSTYLEINT;
extern unsigned char D_obj_p_14_TextStyle_00FontsListBox[];
void obj_p_14_TextStyle_00FontsListBox( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_14_TextStyle_00FontsListBox);
	if (!ctx->doingAbort) {
		Long lindex;
		Long lfontStyleInteger;
		Value_array_text lstylesArray;
		Value_array_text lnamesArray;
		{
			Obj t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1606)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kcode.cv(),t1.cv())) goto _0;
			Bool t2;
			if (g->OperationOnAny(ctx,6,t1.cv(),Long(31).cv(),t2.cv())) goto _0;
			if (!(t2.get())) goto _3;
		}
		{
			Ref t3;
			t3.setLocalRef(ctx,lstylesArray.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,t3.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t4;
			t4.setLocalRef(ctx,lnamesArray.cv());
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,t4.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Obj t5;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1466)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KcurrentFont.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KfontName.cv(),t7.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),t7.cv()},3,164)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t8;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1466)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KcurrentStyle.cv(),t9.cv())) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1466)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KcurrentFont.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KfontName.cv(),t12.cv())) goto _0;
			if (g->SetMember(ctx,t9.cv(),KfontName.cv(),t12.cv())) goto _0;
		}
		{
			Obj t13;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1466)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KcurrentFont.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KfontName.cv(),t15.cv())) goto _0;
			Ref t16;
			t16.setLocalRef(ctx,lnamesArray.cv());
			Ref t17;
			t17.setLocalRef(ctx,lstylesArray.cv());
			Txt t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t15.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()},3,1362)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t19;
			t19.setLocalRef(ctx,lstylesArray.cv());
			Long t20;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv(),KBold.cv()},2,230)) goto _0;
			lindex=t20.get();
		}
		if (-1==lindex.get()) goto _4;
		{
			Bool t22;
			t22=Bool(1).get();
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KBoldCheckBox.cv(),t22.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _5;
_4:
		{
			Bool t23;
			t23=Bool(0).get();
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KBoldCheckBox.cv(),t23.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t24;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1466)) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KcurrentStyle.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KfontStyle.cv(),t26.cv())) goto _0;
			Bool t27;
			t27=Bool(0).get();
			if (g->SetMember(ctx,t26.cv(),Kbold.cv(),t27.cv())) goto _0;
		}
		{
			Long t28;
			c.f.fLine=29;
			proc_CALCFONTSTYLEINT(glob,ctx,0,0,nullptr,t28.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lfontStyleInteger=t28.get();
		}
		c.f.fLine=30;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lfontStyleInteger.cv()},3,166)) goto _0;
		g->Check(ctx);
_5:
		{
			Ref t29;
			t29.setLocalRef(ctx,lstylesArray.cv());
			Long t30;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv(),KItalic.cv()},2,230)) goto _0;
			lindex=t30.get();
		}
		if (-1==lindex.get()) goto _6;
		{
			Bool t32;
			t32=Bool(1).get();
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KItalicCheckBox.cv(),t32.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		goto _7;
_6:
		{
			Bool t33;
			t33=Bool(0).get();
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KItalicCheckBox.cv(),t33.cv()},3,1123)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t34;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1466)) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KcurrentStyle.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),KfontStyle.cv(),t36.cv())) goto _0;
			Bool t37;
			t37=Bool(0).get();
			if (g->SetMember(ctx,t36.cv(),Kitalic.cv(),t37.cv())) goto _0;
		}
		{
			Long t38;
			c.f.fLine=42;
			proc_CALCFONTSTYLEINT(glob,ctx,0,0,nullptr,t38.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lfontStyleInteger=t38.get();
		}
		c.f.fLine=43;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),KSampleText.cv(),lfontStyleInteger.cv()},3,166)) goto _0;
		g->Check(ctx);
_7:
		goto _2;
_3:
_2:
_0:
_1:
;
	}

}
