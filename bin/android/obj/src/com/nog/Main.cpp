#include <hxcpp.h>

#ifndef INCLUDED_com_nog_Main
#include <com/nog/Main.h>
#endif
#ifndef INCLUDED_com_nog_game_Game
#include <com/nog/game/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
namespace com{
namespace nog{

Void Main_obj::__construct()
{
HX_STACK_FRAME("com.nog.Main","new",0xd93c9280,"com.nog.Main.new","com/nog/Main.hx",46,0xf34f1cae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	super::__construct();
	HX_STACK_LINE(48)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("com.nog.Main","resize",0x011eabd4,"com.nog.Main.resize","com/nog/Main.hx",22,0xf34f1cae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(22)
		if ((!(this->inited))){
			HX_STACK_LINE(22)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("com.nog.Main","init",0x387c54f0,"com.nog.Main.init","com/nog/Main.hx",27,0xf34f1cae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		if ((this->inited)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(29)
		this->inited = true;
		HX_STACK_LINE(39)
		::com::nog::game::Game _g = ::com::nog::game::Game_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->_game = _g;
		HX_STACK_LINE(40)
		this->addChild(this->_game);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("com.nog.Main","added",0x92795ee0,"com.nog.Main.added","com/nog/Main.hx",52,0xf34f1cae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(53)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(54)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(58)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("com.nog.Main","main",0x3b175219,"com.nog.Main.main","com/nog/Main.hx",63,0xf34f1cae)
		HX_STACK_LINE(65)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(66)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(67)
		::com::nog::Main _g = ::com::nog::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::openfl::_v2::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(_game,"_game");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(_game,"_game");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { return _game; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast< ::com::nog::game::Game >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("_game"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::com::nog::game::Game*/ ,(int)offsetof(Main_obj,_game),HX_CSTRING("_game")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("_game"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
