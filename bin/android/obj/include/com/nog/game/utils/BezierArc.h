#ifndef INCLUDED_com_nog_game_utils_BezierArc
#define INCLUDED_com_nog_game_utils_BezierArc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,nog,game,utils,BezierArc)
namespace com{
namespace nog{
namespace game{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  BezierArc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BezierArc_obj OBJ_;
		BezierArc_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BezierArc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BezierArc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BezierArc"); }

		static Float _bezierArcConst;
		static Float _twoPi;
		static Float _piOverTwo;
		static Array< Float > createArcQuadCurve( Float startAngleRad,Float endAngleRad,Dynamic ray,Dynamic centerX,Dynamic centerY);
		static Dynamic createArcQuadCurve_dyn();

		static Array< Float > createArc( Float startAngle,Float endAngle,Float ray,Float centerX,Float centerY);
		static Dynamic createArc_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace utils

#endif /* INCLUDED_com_nog_game_utils_BezierArc */ 
