// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DMipFilter_Context3DMipFilter_Impl_
#include <openfl/display3D/_Context3DMipFilter/Context3DMipFilter_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21404597055dc685_32_fromString,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","fromString",0x2c85cd41,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.fromString","openfl/display3D/Context3DMipFilter.hx",32,0xd6fc0d97)
HX_LOCAL_STACK_FRAME(_hx_pos_21404597055dc685_43_toString,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","toString",0x68a9aa92,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.toString","openfl/display3D/Context3DMipFilter.hx",43,0xd6fc0d97)
HX_LOCAL_STACK_FRAME(_hx_pos_21404597055dc685_18_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",18,0xd6fc0d97)
HX_LOCAL_STACK_FRAME(_hx_pos_21404597055dc685_23_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",23,0xd6fc0d97)
HX_LOCAL_STACK_FRAME(_hx_pos_21404597055dc685_28_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",28,0xd6fc0d97)
namespace openfl{
namespace display3D{
namespace _Context3DMipFilter{

void Context3DMipFilter_Impl__obj::__construct() { }

Dynamic Context3DMipFilter_Impl__obj::__CreateEmpty() { return new Context3DMipFilter_Impl__obj; }

void *Context3DMipFilter_Impl__obj::_hx_vtable = 0;

Dynamic Context3DMipFilter_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DMipFilter_Impl__obj > _hx_result = new Context3DMipFilter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DMipFilter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x784e3294;
}

 ::Dynamic Context3DMipFilter_Impl__obj::MIPLINEAR;

 ::Dynamic Context3DMipFilter_Impl__obj::MIPNEAREST;

 ::Dynamic Context3DMipFilter_Impl__obj::MIPNONE;

 ::Dynamic Context3DMipFilter_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_32_fromString)
HXDLIN(  32)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("miplinear",79,ca,7e,64)) ){
HXLINE(  34)			return 0;
HXDLIN(  34)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mipnearest",4a,21,95,d0)) ){
HXLINE(  35)			return 1;
HXDLIN(  35)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mipnone",4c,7e,07,76)) ){
HXLINE(  36)			return 2;
HXDLIN(  36)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  37)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,fromString,return )

::String Context3DMipFilter_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_43_toString)
HXDLIN(  43)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  45)			return HX_("miplinear",79,ca,7e,64);
HXDLIN(  45)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  46)			return HX_("mipnearest",4a,21,95,d0);
HXDLIN(  46)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  47)			return HX_("mipnone",4c,7e,07,76);
HXDLIN(  47)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  48)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  43)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,toString,return )


Context3DMipFilter_Impl__obj::Context3DMipFilter_Impl__obj()
{
}

bool Context3DMipFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DMipFilter_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DMipFilter_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DMipFilter_Impl__obj::MIPLINEAR,HX_("MIPLINEAR",59,3a,d7,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DMipFilter_Impl__obj::MIPNEAREST,HX_("MIPNEAREST",4a,95,9e,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DMipFilter_Impl__obj::MIPNONE,HX_("MIPNONE",2c,52,db,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DMipFilter_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DMipFilter_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#endif

::hx::Class Context3DMipFilter_Impl__obj::__mClass;

static ::String Context3DMipFilter_Impl__obj_sStaticFields[] = {
	HX_("MIPLINEAR",59,3a,d7,5f),
	HX_("MIPNEAREST",4a,95,9e,c2),
	HX_("MIPNONE",2c,52,db,f5),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DMipFilter_Impl__obj::__register()
{
	Context3DMipFilter_Impl__obj _hx_dummy;
	Context3DMipFilter_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_",48,5b,34,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DMipFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DMipFilter_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DMipFilter_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DMipFilter_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DMipFilter_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DMipFilter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DMipFilter_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DMipFilter_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_18_boot)
HXDLIN(  18)		MIPLINEAR = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_23_boot)
HXDLIN(  23)		MIPNEAREST = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_28_boot)
HXDLIN(  28)		MIPNONE = 2;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DMipFilter
