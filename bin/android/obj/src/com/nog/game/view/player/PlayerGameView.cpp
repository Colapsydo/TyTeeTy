#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_model_Player
#include <com/nog/game/model/Player.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerFace
#include <com/nog/game/view/player/PlayerFace.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerGameView
#include <com/nog/game/view/player/PlayerGameView.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerInfo
#include <com/nog/game/view/player/PlayerInfo.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerMatter
#include <com/nog/game/view/player/PlayerMatter.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerPowers
#include <com/nog/game/view/player/PlayerPowers.h>
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
namespace com{
namespace nog{
namespace game{
namespace view{
namespace player{

Void PlayerGameView_obj::__construct(::com::nog::game::model::Player player)
{
HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","new",0x5d3efd15,"com.nog.game.view.player.PlayerGameView.new","com/nog/game/view/player/PlayerGameView.hx",27,0xb79ce83c)
HX_STACK_THIS(this)
HX_STACK_ARG(player,"player")
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	this->_playerData = player;
	HX_STACK_LINE(32)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerGameView_obj::~PlayerGameView_obj() { }

Dynamic PlayerGameView_obj::__CreateEmpty() { return  new PlayerGameView_obj; }
hx::ObjectPtr< PlayerGameView_obj > PlayerGameView_obj::__new(::com::nog::game::model::Player player)
{  hx::ObjectPtr< PlayerGameView_obj > result = new PlayerGameView_obj();
	result->__construct(player);
	return result;}

Dynamic PlayerGameView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerGameView_obj > result = new PlayerGameView_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayerGameView_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","init",0x36972cbb,"com.nog.game.view.player.PlayerGameView.init","com/nog/game/view/player/PlayerGameView.hx",35,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(36)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(37)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(39)
		this->get_graphics()->lineStyle((int)2,(int)15724527,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(40)
		this->get_graphics()->beginFill((int)5592439,null());
		HX_STACK_LINE(41)
		int _g = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		int _g1 = (_g - (int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		this->get_graphics()->drawRoundRect((int)0,(int)0,(::com::nog::game::view::player::PlayerGameView_obj::_width - (int)2),_g1,(int)12,(int)12);
		HX_STACK_LINE(42)
		this->get_graphics()->endFill();
		HX_STACK_LINE(44)
		int _g2 = this->_playerData->getType();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		::com::nog::game::view::player::PlayerFace _g3 = ::com::nog::game::view::player::PlayerFace_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(44)
		this->_face = _g3;
		HX_STACK_LINE(45)
		this->addChild(this->_face);
		HX_STACK_LINE(46)
		this->_face->set_x((::com::nog::game::view::player::PlayerGameView_obj::_width * .5));
		HX_STACK_LINE(47)
		this->_face->set_y((int)40);
		HX_STACK_LINE(49)
		::com::nog::game::view::player::PlayerMatter _g4 = ::com::nog::game::view::player::PlayerMatter_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(49)
		this->_matter = _g4;
		HX_STACK_LINE(50)
		this->addChild(this->_matter);
		HX_STACK_LINE(51)
		this->_matter->set_x((int)10);
		HX_STACK_LINE(52)
		this->_matter->set_y((int)100);
		HX_STACK_LINE(54)
		::com::nog::game::view::player::PlayerPowers _g5 = ::com::nog::game::view::player::PlayerPowers_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(54)
		this->_power = _g5;
		HX_STACK_LINE(55)
		this->addChild(this->_power);
		HX_STACK_LINE(56)
		this->_power->set_x((::com::nog::game::view::player::PlayerGameView_obj::_width * .5));
		HX_STACK_LINE(57)
		this->_power->set_y((int)150);
		HX_STACK_LINE(59)
		bool _g6 = this->_playerData->getCPU();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(59)
		if (((_g6 == false))){
			HX_STACK_LINE(60)
			::com::nog::game::view::player::PlayerInfo _g7 = ::com::nog::game::view::player::PlayerInfo_obj::__new((::com::nog::game::view::player::PlayerGameView_obj::_width - (int)10));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(60)
			this->_info = _g7;
			HX_STACK_LINE(61)
			this->addChild(this->_info);
			HX_STACK_LINE(62)
			this->_info->set_x((int)5);
			HX_STACK_LINE(63)
			this->_info->set_y((int)200);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerGameView_obj,init,(void))

Void PlayerGameView_obj::powerPlayHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","powerPlayHandler",0x9267465c,"com.nog.game.view.player.PlayerGameView.powerPlayHandler","com/nog/game/view/player/PlayerGameView.hx",71,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(72)
		this->_power->removeEventListener(HX_CSTRING("power"),this->powerPlayHandler_dyn(),null());
		HX_STACK_LINE(73)
		this->_power->addEventListener(HX_CSTRING("power"),this->powerCancelHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(74)
		int _g = this->_playerData->getPower();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		int _g1 = this->_playerData->getType();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		this->_info->showPower(_g,_g1);
		HX_STACK_LINE(75)
		::openfl::_v2::events::Event _g2 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("poweron"),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(75)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerGameView_obj,powerPlayHandler,(void))

Void PlayerGameView_obj::powerCancelHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","powerCancelHandler",0x37d17916,"com.nog.game.view.player.PlayerGameView.powerCancelHandler","com/nog/game/view/player/PlayerGameView.hx",78,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(79)
		this->_power->removeEventListener(HX_CSTRING("power"),this->powerCancelHandler_dyn(),null());
		HX_STACK_LINE(80)
		this->_power->addEventListener(HX_CSTRING("power"),this->powerPlayHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(81)
		this->_info->fadeOff();
		HX_STACK_LINE(82)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("poweroff"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerGameView_obj,powerCancelHandler,(void))

Void PlayerGameView_obj::thinking( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","thinking",0x69d82b5b,"com.nog.game.view.player.PlayerGameView.thinking","com/nog/game/view/player/PlayerGameView.hx",87,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		this->set_alpha((int)1);
		HX_STACK_LINE(89)
		this->_face->changeMood(HX_CSTRING("thinking"));
		HX_STACK_LINE(91)
		this->_power->addEventListener(HX_CSTRING("power"),this->powerPlayHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(92)
		this->_power->activate(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerGameView_obj,thinking,(void))

Void PlayerGameView_obj::waiting( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","waiting",0x66a014c2,"com.nog.game.view.player.PlayerGameView.waiting","com/nog/game/view/player/PlayerGameView.hx",95,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->set_alpha(0.4);
		HX_STACK_LINE(97)
		this->_face->changeMood(HX_CSTRING("neutral"));
		HX_STACK_LINE(99)
		this->_power->removeEventListener(HX_CSTRING("power"),this->powerPlayHandler_dyn(),null());
		HX_STACK_LINE(100)
		this->_power->activate(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerGameView_obj,waiting,(void))

Void PlayerGameView_obj::addRessources( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","addRessources",0xd7ff6c4e,"com.nog.game.view.player.PlayerGameView.addRessources","com/nog/game/view/player/PlayerGameView.hx",103,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		int _g = this->_playerData->getTransMatter();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		this->_matter->addMatter(_g);
		HX_STACK_LINE(105)
		int _g1 = this->_playerData->getTransPower();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		this->_power->addPower(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerGameView_obj,addRessources,(void))

Void PlayerGameView_obj::payConstruct( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","payConstruct",0x5baf8e3a,"com.nog.game.view.player.PlayerGameView.payConstruct","com/nog/game/view/player/PlayerGameView.hx",109,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->_matter->addMatter((int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerGameView_obj,payConstruct,(void))

Void PlayerGameView_obj::checkPower( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","checkPower",0xd9475208,"com.nog.game.view.player.PlayerGameView.checkPower","com/nog/game/view/player/PlayerGameView.hx",112,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		int _g = this->_playerData->getTransPower();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		if (((_g < (int)0))){
			HX_STACK_LINE(114)
			this->_info->fadeOff();
			HX_STACK_LINE(115)
			this->_power->removePower();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerGameView_obj,checkPower,(void))

Void PlayerGameView_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","dispose",0x42c4abd4,"com.nog.game.view.player.PlayerGameView.dispose","com/nog/game/view/player/PlayerGameView.hx",126,0xb79ce83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(127)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerGameView_obj,dispose,(void))

Float PlayerGameView_obj::_width;

::String PlayerGameView_obj::POWERON;

::String PlayerGameView_obj::POWEROFF;

Void PlayerGameView_obj::setWidth( Float width){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerGameView","setWidth",0xda44c22f,"com.nog.game.view.player.PlayerGameView.setWidth","com/nog/game/view/player/PlayerGameView.hx",121,0xb79ce83c)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(121)
		::com::nog::game::view::player::PlayerGameView_obj::_width = width;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PlayerGameView_obj,setWidth,(void))


PlayerGameView_obj::PlayerGameView_obj()
{
}

void PlayerGameView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerGameView);
	HX_MARK_MEMBER_NAME(_playerData,"_playerData");
	HX_MARK_MEMBER_NAME(_face,"_face");
	HX_MARK_MEMBER_NAME(_matter,"_matter");
	HX_MARK_MEMBER_NAME(_power,"_power");
	HX_MARK_MEMBER_NAME(_info,"_info");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerGameView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_playerData,"_playerData");
	HX_VISIT_MEMBER_NAME(_face,"_face");
	HX_VISIT_MEMBER_NAME(_matter,"_matter");
	HX_VISIT_MEMBER_NAME(_power,"_power");
	HX_VISIT_MEMBER_NAME(_info,"_info");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerGameView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_face") ) { return _face; }
		if (HX_FIELD_EQ(inName,"_info") ) { return _info; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_power") ) { return _power; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { return _matter; }
		if (HX_FIELD_EQ(inName,"waiting") ) { return waiting_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"thinking") ) { return thinking_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkPower") ) { return checkPower_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playerData") ) { return _playerData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"payConstruct") ) { return payConstruct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addRessources") ) { return addRessources_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"powerPlayHandler") ) { return powerPlayHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"powerCancelHandler") ) { return powerCancelHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerGameView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_face") ) { _face=inValue.Cast< ::com::nog::game::view::player::PlayerFace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_info") ) { _info=inValue.Cast< ::com::nog::game::view::player::PlayerInfo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_power") ) { _power=inValue.Cast< ::com::nog::game::view::player::PlayerPowers >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { _matter=inValue.Cast< ::com::nog::game::view::player::PlayerMatter >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playerData") ) { _playerData=inValue.Cast< ::com::nog::game::model::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerGameView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_playerData"));
	outFields->push(HX_CSTRING("_face"));
	outFields->push(HX_CSTRING("_matter"));
	outFields->push(HX_CSTRING("_power"));
	outFields->push(HX_CSTRING("_info"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_width"),
	HX_CSTRING("POWERON"),
	HX_CSTRING("POWEROFF"),
	HX_CSTRING("setWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::nog::game::model::Player*/ ,(int)offsetof(PlayerGameView_obj,_playerData),HX_CSTRING("_playerData")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerFace*/ ,(int)offsetof(PlayerGameView_obj,_face),HX_CSTRING("_face")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerMatter*/ ,(int)offsetof(PlayerGameView_obj,_matter),HX_CSTRING("_matter")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerPowers*/ ,(int)offsetof(PlayerGameView_obj,_power),HX_CSTRING("_power")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerInfo*/ ,(int)offsetof(PlayerGameView_obj,_info),HX_CSTRING("_info")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_playerData"),
	HX_CSTRING("_face"),
	HX_CSTRING("_matter"),
	HX_CSTRING("_power"),
	HX_CSTRING("_info"),
	HX_CSTRING("init"),
	HX_CSTRING("powerPlayHandler"),
	HX_CSTRING("powerCancelHandler"),
	HX_CSTRING("thinking"),
	HX_CSTRING("waiting"),
	HX_CSTRING("addRessources"),
	HX_CSTRING("payConstruct"),
	HX_CSTRING("checkPower"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerGameView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayerGameView_obj::_width,"_width");
	HX_MARK_MEMBER_NAME(PlayerGameView_obj::POWERON,"POWERON");
	HX_MARK_MEMBER_NAME(PlayerGameView_obj::POWEROFF,"POWEROFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerGameView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayerGameView_obj::_width,"_width");
	HX_VISIT_MEMBER_NAME(PlayerGameView_obj::POWERON,"POWERON");
	HX_VISIT_MEMBER_NAME(PlayerGameView_obj::POWEROFF,"POWEROFF");
};

#endif

Class PlayerGameView_obj::__mClass;

void PlayerGameView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.player.PlayerGameView"), hx::TCanCast< PlayerGameView_obj> ,sStaticFields,sMemberFields,
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

void PlayerGameView_obj::__boot()
{
	POWERON= HX_CSTRING("poweron");
	POWEROFF= HX_CSTRING("poweroff");
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player
