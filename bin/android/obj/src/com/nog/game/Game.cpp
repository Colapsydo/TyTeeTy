#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_Game
#include <com/nog/game/Game.h>
#endif
#ifndef INCLUDED_com_nog_game_model_GameCore
#include <com/nog/game/model/GameCore.h>
#endif
#ifndef INCLUDED_com_nog_game_view_GameBoard
#include <com/nog/game/view/GameBoard.h>
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
namespace com{
namespace nog{
namespace game{

Void Game_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.Game","new",0xb5a5f12b,"com.nog.game.Game.new","com/nog/game/Game.hx",20,0x32ee5e46)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Void Game_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.Game","init",0x3845cbe5,"com.nog.game.Game.init","com/nog/game/Game.hx",25,0x32ee5e46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(26)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(27)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(29)
		::com::nog::game::model::GameCore _g = ::com::nog::game::model::GameCore_obj::__new((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->_gameCore = _g;
		HX_STACK_LINE(31)
		::com::nog::game::view::GameBoard _g1 = ::com::nog::game::view::GameBoard_obj::__new(this->_gameCore);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		this->_gameBoard = _g1;
		HX_STACK_LINE(33)
		this->addChild(this->_gameBoard);
		HX_STACK_LINE(35)
		this->_gameCore->addEventListener(HX_CSTRING("update"),this->_gameBoard->update_dyn(),null(),null(),null());
		HX_STACK_LINE(36)
		this->_gameCore->addEventListener(HX_CSTRING("ended"),this->newGame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,init,(void))

Void Game_obj::newGame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.Game","newGame",0x6f6582bd,"com.nog.game.Game.newGame","com/nog/game/Game.hx",39,0x32ee5e46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		this->_gameCore->removeEventListener(HX_CSTRING("update"),this->_gameBoard->update_dyn(),null());
		HX_STACK_LINE(41)
		this->_gameCore->removeEventListener(HX_CSTRING("ended"),this->newGame_dyn(),null());
		HX_STACK_LINE(42)
		this->removeChild(this->_gameBoard);
		HX_STACK_LINE(43)
		this->_gameCore = null();
		HX_STACK_LINE(44)
		this->_gameBoard = null();
		HX_STACK_LINE(46)
		::com::nog::game::model::GameCore _g = ::com::nog::game::model::GameCore_obj::__new((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->_gameCore = _g;
		HX_STACK_LINE(48)
		::com::nog::game::view::GameBoard _g1 = ::com::nog::game::view::GameBoard_obj::__new(this->_gameCore);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->_gameBoard = _g1;
		HX_STACK_LINE(50)
		this->addChild(this->_gameBoard);
		HX_STACK_LINE(52)
		this->_gameCore->addEventListener(HX_CSTRING("update"),this->_gameBoard->update_dyn(),null(),null(),null());
		HX_STACK_LINE(53)
		this->_gameCore->addEventListener(HX_CSTRING("ended"),this->newGame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,newGame,(void))

Void Game_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.Game","dispose",0x368662ea,"com.nog.game.Game.dispose","com/nog/game/Game.hx",66,0x32ee5e46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(67)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(69)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,dispose,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(_gameCore,"_gameCore");
	HX_MARK_MEMBER_NAME(_gameBoard,"_gameBoard");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gameCore,"_gameCore");
	HX_VISIT_MEMBER_NAME(_gameBoard,"_gameBoard");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Game_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { return newGame_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameCore") ) { return _gameCore; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_gameBoard") ) { return _gameBoard; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gameCore") ) { _gameCore=inValue.Cast< ::com::nog::game::model::GameCore >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_gameBoard") ) { _gameBoard=inValue.Cast< ::com::nog::game::view::GameBoard >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_gameCore"));
	outFields->push(HX_CSTRING("_gameBoard"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::nog::game::model::GameCore*/ ,(int)offsetof(Game_obj,_gameCore),HX_CSTRING("_gameCore")},
	{hx::fsObject /*::com::nog::game::view::GameBoard*/ ,(int)offsetof(Game_obj,_gameBoard),HX_CSTRING("_gameBoard")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_gameCore"),
	HX_CSTRING("_gameBoard"),
	HX_CSTRING("init"),
	HX_CSTRING("newGame"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
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

void Game_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
