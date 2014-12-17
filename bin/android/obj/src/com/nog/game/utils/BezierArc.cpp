#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_utils_BezierArc
#include <com/nog/game/utils/BezierArc.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace utils{

Void BezierArc_obj::__construct()
{
	return null();
}

//BezierArc_obj::~BezierArc_obj() { }

Dynamic BezierArc_obj::__CreateEmpty() { return  new BezierArc_obj; }
hx::ObjectPtr< BezierArc_obj > BezierArc_obj::__new()
{  hx::ObjectPtr< BezierArc_obj > result = new BezierArc_obj();
	result->__construct();
	return result;}

Dynamic BezierArc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BezierArc_obj > result = new BezierArc_obj();
	result->__construct();
	return result;}

Float BezierArc_obj::_bezierArcConst;

Float BezierArc_obj::_twoPi;

Float BezierArc_obj::_piOverTwo;

Array< Float > BezierArc_obj::createArcQuadCurve( Float startAngleRad,Float endAngleRad,Dynamic __o_ray,Dynamic __o_centerX,Dynamic __o_centerY){
Dynamic ray = __o_ray.Default(1);
Dynamic centerX = __o_centerX.Default(0);
Dynamic centerY = __o_centerY.Default(0);
	HX_STACK_FRAME("com.nog.game.utils.BezierArc","createArcQuadCurve",0xe546fd51,"com.nog.game.utils.BezierArc.createArcQuadCurve","com/nog/game/utils/BezierArc.hx",17,0x433e610f)
	HX_STACK_ARG(startAngleRad,"startAngleRad")
	HX_STACK_ARG(endAngleRad,"endAngleRad")
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(centerX,"centerX")
	HX_STACK_ARG(centerY,"centerY")
{
		HX_STACK_LINE(18)
		Array< Float > result;		HX_STACK_VAR(result,"result");
		struct _Function_1_1{
			inline static Array< Float > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/utils/BezierArc.hx",18,0x433e610f)
				{
					HX_STACK_LINE(18)
					Array< Float > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(18)
					Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(18)
					this1 = _g;
					HX_STACK_LINE(18)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		result = _Function_1_1::Block();
		HX_STACK_LINE(20)
		Float startAngle = startAngleRad;		HX_STACK_VAR(startAngle,"startAngle");
		HX_STACK_LINE(21)
		Float endAngle = endAngleRad;		HX_STACK_VAR(endAngle,"endAngle");
		HX_STACK_LINE(23)
		if (((endAngle < startAngle))){
			HX_STACK_LINE(24)
			Float temp = startAngle;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(25)
			startAngle = endAngle;
			HX_STACK_LINE(26)
			endAngle = temp;
		}
		HX_STACK_LINE(29)
		Float totalAngle;		HX_STACK_VAR(totalAngle,"totalAngle");
		HX_STACK_LINE(29)
		if (((endAngle > startAngle))){
			HX_STACK_LINE(29)
			totalAngle = (endAngle - startAngle);
		}
		else{
			HX_STACK_LINE(29)
			totalAngle = (startAngle - endAngle);
		}
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(((totalAngle > 1.5707963268))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(32)
			Array< Float > _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				Array< Float > a = ::com::nog::game::utils::BezierArc_obj::createArc(startAngle,(startAngle + 1.5707963268),ray,centerX,centerY);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(32)
				_g1 = result->concat(a);
			}
			HX_STACK_LINE(32)
			result = _g1;
			HX_STACK_LINE(33)
			hx::AddEq(startAngle,1.5707963268);
			HX_STACK_LINE(34)
			if (((endAngle > startAngle))){
				HX_STACK_LINE(34)
				totalAngle = (endAngle - startAngle);
			}
			else{
				HX_STACK_LINE(34)
				totalAngle = (startAngle - endAngle);
			}
		}
		HX_STACK_LINE(36)
		Array< Float > _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			Array< Float > a = ::com::nog::game::utils::BezierArc_obj::createArc(startAngle,endAngle,ray,centerX,centerY);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(36)
			_g2 = result->concat(a);
		}
		HX_STACK_LINE(36)
		result = _g2;
		HX_STACK_LINE(38)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BezierArc_obj,createArcQuadCurve,return )

Array< Float > BezierArc_obj::createArc( Float startAngle,Float endAngle,Float ray,Float centerX,Float centerY){
	HX_STACK_FRAME("com.nog.game.utils.BezierArc","createArc",0x1c8aba17,"com.nog.game.utils.BezierArc.createArc","com/nog/game/utils/BezierArc.hx",43,0x433e610f)
	HX_STACK_ARG(startAngle,"startAngle")
	HX_STACK_ARG(endAngle,"endAngle")
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(centerX,"centerX")
	HX_STACK_ARG(centerY,"centerY")
	HX_STACK_LINE(44)
	Float angle = (((endAngle - startAngle)) * .5);		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(45)
	Float cosA = ::Math_obj::cos(angle);		HX_STACK_VAR(cosA,"cosA");
	HX_STACK_LINE(46)
	Float sinA = ::Math_obj::sin(angle);		HX_STACK_VAR(sinA,"sinA");
	HX_STACK_LINE(47)
	Float _g = ::Math_obj::tan(angle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	Float ctrlTan = (0.5522847498 * _g);		HX_STACK_VAR(ctrlTan,"ctrlTan");
	HX_STACK_LINE(49)
	Float anchor2X = (ray * cosA);		HX_STACK_VAR(anchor2X,"anchor2X");
	HX_STACK_LINE(50)
	Float anchor2Y = (ray * sinA);		HX_STACK_VAR(anchor2Y,"anchor2Y");
	HX_STACK_LINE(51)
	Float anchor1X = anchor2X;		HX_STACK_VAR(anchor1X,"anchor1X");
	HX_STACK_LINE(52)
	Float anchor1Y = -(anchor2Y);		HX_STACK_VAR(anchor1Y,"anchor1Y");
	HX_STACK_LINE(53)
	Float control1X = (anchor1X + (ctrlTan * anchor2Y));		HX_STACK_VAR(control1X,"control1X");
	HX_STACK_LINE(54)
	Float control1Y = (anchor1Y + (ctrlTan * anchor2X));		HX_STACK_VAR(control1Y,"control1Y");
	HX_STACK_LINE(55)
	Float control2X = control1X;		HX_STACK_VAR(control2X,"control2X");
	HX_STACK_LINE(56)
	Float control2Y = -(control1Y);		HX_STACK_VAR(control2Y,"control2Y");
	HX_STACK_LINE(58)
	Float angleRotation = (startAngle + angle);		HX_STACK_VAR(angleRotation,"angleRotation");
	HX_STACK_LINE(59)
	Float cosRotation = ::Math_obj::cos(angleRotation);		HX_STACK_VAR(cosRotation,"cosRotation");
	HX_STACK_LINE(60)
	Float sinRotation = ::Math_obj::sin(angleRotation);		HX_STACK_VAR(sinRotation,"sinRotation");
	HX_STACK_LINE(62)
	Float _g1 = ::Math_obj::cos(startAngle);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	Float _g2 = (ray * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(62)
	Float _g3 = (centerX + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	Float _g4 = ::Math_obj::sin(startAngle);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(62)
	Float _g5 = (ray * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(62)
	Float _g6 = (centerY + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(62)
	Float _g7 = ::Math_obj::cos(endAngle);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(62)
	Float _g8 = (ray * _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(62)
	Float _g9 = (centerX + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(62)
	Float _g10 = ::Math_obj::sin(endAngle);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(62)
	Float _g11 = (ray * _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(62)
	Float _g12 = (centerY + _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(62)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new().Add(_g3).Add(_g6).Add(((centerX + (control1X * cosRotation)) - (control1Y * sinRotation))).Add(((centerY + (control1X * sinRotation)) + (control1Y * cosRotation))).Add(((centerX + (control2X * cosRotation)) - (control2Y * sinRotation))).Add(((centerY + (control2X * sinRotation)) + (control2Y * cosRotation))).Add(_g9).Add(_g12));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(62)
	Array< Float > this1;		HX_STACK_VAR(this1,"this1");
	struct _Function_1_1{
		inline static Array< Float > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/utils/BezierArc.hx",62,0x433e610f)
			{
				HX_STACK_LINE(62)
				Array< Float > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(62)
				Array< Float > _g13 = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(62)
				this2 = _g13;
				HX_STACK_LINE(62)
				return this2;
			}
			return null();
		}
	};
	HX_STACK_LINE(62)
	this1 = _Function_1_1::Block();
	HX_STACK_LINE(62)
	return this1->concat(a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BezierArc_obj,createArc,return )


BezierArc_obj::BezierArc_obj()
{
}

Dynamic BezierArc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"createArc") ) { return createArc_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createArcQuadCurve") ) { return createArcQuadCurve_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BezierArc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierArc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_bezierArcConst"),
	HX_CSTRING("_twoPi"),
	HX_CSTRING("_piOverTwo"),
	HX_CSTRING("createArcQuadCurve"),
	HX_CSTRING("createArc"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BezierArc_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BezierArc_obj::_bezierArcConst,"_bezierArcConst");
	HX_MARK_MEMBER_NAME(BezierArc_obj::_twoPi,"_twoPi");
	HX_MARK_MEMBER_NAME(BezierArc_obj::_piOverTwo,"_piOverTwo");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BezierArc_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BezierArc_obj::_bezierArcConst,"_bezierArcConst");
	HX_VISIT_MEMBER_NAME(BezierArc_obj::_twoPi,"_twoPi");
	HX_VISIT_MEMBER_NAME(BezierArc_obj::_piOverTwo,"_piOverTwo");
};

#endif

Class BezierArc_obj::__mClass;

void BezierArc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.utils.BezierArc"), hx::TCanCast< BezierArc_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void BezierArc_obj::__boot()
{
	_bezierArcConst= 0.5522847498;
	_twoPi= 6.2831853072;
	_piOverTwo= 1.5707963268;
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace utils
