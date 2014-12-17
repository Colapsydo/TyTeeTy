#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_view_player_PlayerFace
#include <com/nog/game/view/player/PlayerFace.h>
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

Void PlayerFace_obj::__construct(int type)
{
HX_STACK_FRAME("com.nog.game.view.player.PlayerFace","new",0x7003033b,"com.nog.game.view.player.PlayerFace.new","com/nog/game/view/player/PlayerFace.hx",23,0x99ebf456)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(26)
	this->_type = type;
	HX_STACK_LINE(28)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerFace_obj::~PlayerFace_obj() { }

Dynamic PlayerFace_obj::__CreateEmpty() { return  new PlayerFace_obj; }
hx::ObjectPtr< PlayerFace_obj > PlayerFace_obj::__new(int type)
{  hx::ObjectPtr< PlayerFace_obj > result = new PlayerFace_obj();
	result->__construct(type);
	return result;}

Dynamic PlayerFace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerFace_obj > result = new PlayerFace_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayerFace_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerFace","init",0x8f5887d5,"com.nog.game.view.player.PlayerFace.init","com/nog/game/view/player/PlayerFace.hx",31,0x99ebf456)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(32)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(33)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(35)
		this->_state = HX_CSTRING("neutral");
		HX_STACK_LINE(36)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerFace_obj,init,(void))

Void PlayerFace_obj::draw( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerFace","draw",0x8c0d78c9,"com.nog.game.view.player.PlayerFace.draw","com/nog/game/view/player/PlayerFace.hx",43,0x99ebf456)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(44)
		if (((this->_type == (int)0))){
			HX_STACK_LINE(44)
			color = (int)16711680;
		}
		else{
			HX_STACK_LINE(44)
			color = (int)255;
		}
		HX_STACK_LINE(45)
		this->get_graphics()->clear();
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::String _g = this->_state;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("thinking"))){
				HX_STACK_LINE(48)
				this->get_graphics()->lineStyle((int)2,color,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(49)
				this->get_graphics()->drawCircle((int)0,(int)0,(int)30);
				HX_STACK_LINE(50)
				this->get_graphics()->moveTo((int)0,(int)10);
				HX_STACK_LINE(51)
				this->get_graphics()->lineTo((int)0,(int)-10);
				HX_STACK_LINE(52)
				this->get_graphics()->moveTo((int)10,(int)0);
				HX_STACK_LINE(53)
				this->get_graphics()->lineTo((int)-10,(int)0);
			}
			else if (  ( _switch_1==HX_CSTRING("neutral"))){
				HX_STACK_LINE(55)
				this->get_graphics()->lineStyle((int)2,color,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(56)
				this->get_graphics()->drawCircle((int)0,(int)0,(int)30);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerFace_obj,draw,(void))

Void PlayerFace_obj::changeMood( ::String mood){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerFace","changeMood",0x5f4cc10c,"com.nog.game.view.player.PlayerFace.changeMood","com/nog/game/view/player/PlayerFace.hx",63,0x99ebf456)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mood,"mood")
		HX_STACK_LINE(64)
		this->_state = mood;
		HX_STACK_LINE(65)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerFace_obj,changeMood,(void))

Void PlayerFace_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerFace","dispose",0x503dbcfa,"com.nog.game.view.player.PlayerFace.dispose","com/nog/game/view/player/PlayerFace.hx",72,0x99ebf456)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(73)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerFace_obj,dispose,(void))

::String PlayerFace_obj::THINKING;

::String PlayerFace_obj::HAPPY;

::String PlayerFace_obj::NEUTRAL;

::String PlayerFace_obj::ANGRY;

::String PlayerFace_obj::VICTORY;

::String PlayerFace_obj::DEFEAT;


PlayerFace_obj::PlayerFace_obj()
{
}

void PlayerFace_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerFace);
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_state,"_state");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerFace_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerFace_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"changeMood") ) { return changeMood_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerFace_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerFace_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("THINKING"),
	HX_CSTRING("HAPPY"),
	HX_CSTRING("NEUTRAL"),
	HX_CSTRING("ANGRY"),
	HX_CSTRING("VICTORY"),
	HX_CSTRING("DEFEAT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlayerFace_obj,_type),HX_CSTRING("_type")},
	{hx::fsString,(int)offsetof(PlayerFace_obj,_state),HX_CSTRING("_state")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_type"),
	HX_CSTRING("_state"),
	HX_CSTRING("init"),
	HX_CSTRING("draw"),
	HX_CSTRING("changeMood"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerFace_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::THINKING,"THINKING");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::HAPPY,"HAPPY");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::NEUTRAL,"NEUTRAL");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::ANGRY,"ANGRY");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::VICTORY,"VICTORY");
	HX_MARK_MEMBER_NAME(PlayerFace_obj::DEFEAT,"DEFEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::THINKING,"THINKING");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::HAPPY,"HAPPY");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::NEUTRAL,"NEUTRAL");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::ANGRY,"ANGRY");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::VICTORY,"VICTORY");
	HX_VISIT_MEMBER_NAME(PlayerFace_obj::DEFEAT,"DEFEAT");
};

#endif

Class PlayerFace_obj::__mClass;

void PlayerFace_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.player.PlayerFace"), hx::TCanCast< PlayerFace_obj> ,sStaticFields,sMemberFields,
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

void PlayerFace_obj::__boot()
{
	THINKING= HX_CSTRING("thinking");
	HAPPY= HX_CSTRING("happy");
	NEUTRAL= HX_CSTRING("neutral");
	ANGRY= HX_CSTRING("angry");
	VICTORY= HX_CSTRING("victory");
	DEFEAT= HX_CSTRING("defeat");
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player
