#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_view_player_PlayerMatter
#include <com/nog/game/view/player/PlayerMatter.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
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
namespace com{
namespace nog{
namespace game{
namespace view{
namespace player{

Void PlayerMatter_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.view.player.PlayerMatter","new",0x5e354adf,"com.nog.game.view.player.PlayerMatter.new","com/nog/game/view/player/PlayerMatter.hx",15,0x1c619f72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(18)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerMatter_obj::~PlayerMatter_obj() { }

Dynamic PlayerMatter_obj::__CreateEmpty() { return  new PlayerMatter_obj; }
hx::ObjectPtr< PlayerMatter_obj > PlayerMatter_obj::__new()
{  hx::ObjectPtr< PlayerMatter_obj > result = new PlayerMatter_obj();
	result->__construct();
	return result;}

Dynamic PlayerMatter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerMatter_obj > result = new PlayerMatter_obj();
	result->__construct();
	return result;}

Void PlayerMatter_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerMatter","init",0x0d24efb1,"com.nog.game.view.player.PlayerMatter.init","com/nog/game/view/player/PlayerMatter.hx",21,0x1c619f72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(22)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(23)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerMatter_obj,init,(void))

Void PlayerMatter_obj::draw( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerMatter","draw",0x09d9e0a5,"com.nog.game.view.player.PlayerMatter.draw","com/nog/game/view/player/PlayerMatter.hx",32,0x1c619f72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->get_graphics()->clear();
		HX_STACK_LINE(34)
		this->get_graphics()->lineStyle((int)2,(int)16776960,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(35)
		this->get_graphics()->beginFill((int)16746530,null());
		HX_STACK_LINE(36)
		this->get_graphics()->drawRect((int)0,(int)0,((int)5 * this->_matter),(int)10);
		HX_STACK_LINE(37)
		this->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerMatter_obj,draw,(void))

Void PlayerMatter_obj::addMatter( int matter){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerMatter","addMatter",0xcc4cd001,"com.nog.game.view.player.PlayerMatter.addMatter","com/nog/game/view/player/PlayerMatter.hx",42,0x1c619f72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matter,"matter")
		HX_STACK_LINE(43)
		hx::AddEq(this->_matter,matter);
		HX_STACK_LINE(44)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerMatter_obj,addMatter,(void))

Void PlayerMatter_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerMatter","dispose",0x2056a69e,"com.nog.game.view.player.PlayerMatter.dispose","com/nog/game/view/player/PlayerMatter.hx",51,0x1c619f72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(52)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerMatter_obj,dispose,(void))


PlayerMatter_obj::PlayerMatter_obj()
{
}

Dynamic PlayerMatter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { return _matter; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addMatter") ) { return addMatter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerMatter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { _matter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerMatter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_matter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlayerMatter_obj,_matter),HX_CSTRING("_matter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_matter"),
	HX_CSTRING("init"),
	HX_CSTRING("draw"),
	HX_CSTRING("addMatter"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerMatter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerMatter_obj::__mClass,"__mClass");
};

#endif

Class PlayerMatter_obj::__mClass;

void PlayerMatter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.player.PlayerMatter"), hx::TCanCast< PlayerMatter_obj> ,sStaticFields,sMemberFields,
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

void PlayerMatter_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player
