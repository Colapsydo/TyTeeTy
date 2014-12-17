#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_view_player_PlayerInfo
#include <com/nog/game/view/player/PlayerInfo.h>
#endif
#ifndef INCLUDED_com_nog_game_vo_Infos
#include <com/nog/game/vo/Infos.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace view{
namespace player{

Void PlayerInfo_obj::__construct(Float width)
{
HX_STACK_FRAME("com.nog.game.view.player.PlayerInfo","new",0x2d45438c,"com.nog.game.view.player.PlayerInfo.new","com/nog/game/view/player/PlayerInfo.hx",21,0x0a1fe925)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	this->_width = width;
	HX_STACK_LINE(26)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerInfo_obj::~PlayerInfo_obj() { }

Dynamic PlayerInfo_obj::__CreateEmpty() { return  new PlayerInfo_obj; }
hx::ObjectPtr< PlayerInfo_obj > PlayerInfo_obj::__new(Float width)
{  hx::ObjectPtr< PlayerInfo_obj > result = new PlayerInfo_obj();
	result->__construct(width);
	return result;}

Dynamic PlayerInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerInfo_obj > result = new PlayerInfo_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayerInfo_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerInfo","init",0x6c0e8e64,"com.nog.game.view.player.PlayerInfo.init","com/nog/game/view/player/PlayerInfo.hx",29,0x0a1fe925)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(30)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(31)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(33)
		::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->_text = _g;
		HX_STACK_LINE(34)
		this->_text->set_selectable(false);
		HX_STACK_LINE(35)
		this->_text->set_wordWrap(true);
		HX_STACK_LINE(36)
		::openfl::_v2::text::TextFormat _g1 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)15,(int)16777215,false,false,false,null(),null(),::openfl::_v2::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->_text->set_defaultTextFormat(_g1);
		HX_STACK_LINE(37)
		this->_text->set_width(this->_width);
		HX_STACK_LINE(38)
		this->addChild(this->_text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerInfo_obj,init,(void))

Void PlayerInfo_obj::showPower( int power,int type){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerInfo","showPower",0x36b8cdf4,"com.nog.game.view.player.PlayerInfo.showPower","com/nog/game/view/player/PlayerInfo.hx",47,0x0a1fe925)
		HX_STACK_THIS(this)
		HX_STACK_ARG(power,"power")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(48)
		Array< ::String > info;		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(49)
		if (((power < (int)3))){
			HX_STACK_LINE(50)
			Array< ::String > _g = ::com::nog::game::vo::Infos_obj::getPower(power);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			info = _g;
		}
		else{
			HX_STACK_LINE(53)
			Array< ::String > _g1 = ::com::nog::game::vo::Infos_obj::getPower((int)3);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			info = _g1;
		}
		HX_STACK_LINE(56)
		this->_text->set_htmlText((((HX_CSTRING("<font color='#ff0000'>") + info->__get((int)0)) + HX_CSTRING("</font>\n")) + info->__get((int)1)));
		HX_STACK_LINE(57)
		Float _g2 = this->_text->get_textHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(57)
		Float _g3 = (_g2 + (int)4);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(57)
		this->_text->set_height(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayerInfo_obj,showPower,(void))

Void PlayerInfo_obj::fadeOff( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerInfo","fadeOff",0x9504a47f,"com.nog.game.view.player.PlayerInfo.fadeOff","com/nog/game/view/player/PlayerInfo.hx",61,0x0a1fe925)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->_text->set_htmlText(HX_CSTRING(""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerInfo_obj,fadeOff,(void))

Void PlayerInfo_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerInfo","dispose",0x1f14f9cb,"com.nog.game.view.player.PlayerInfo.dispose","com/nog/game/view/player/PlayerInfo.hx",68,0x0a1fe925)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(69)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerInfo_obj,dispose,(void))


PlayerInfo_obj::PlayerInfo_obj()
{
}

void PlayerInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerInfo);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_text,"_text");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fadeOff") ) { return fadeOff_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPower") ) { return showPower_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PlayerInfo_obj,_width),HX_CSTRING("_width")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(PlayerInfo_obj,_text),HX_CSTRING("_text")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_width"),
	HX_CSTRING("_text"),
	HX_CSTRING("init"),
	HX_CSTRING("showPower"),
	HX_CSTRING("fadeOff"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerInfo_obj::__mClass,"__mClass");
};

#endif

Class PlayerInfo_obj::__mClass;

void PlayerInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.player.PlayerInfo"), hx::TCanCast< PlayerInfo_obj> ,sStaticFields,sMemberFields,
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

void PlayerInfo_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player
