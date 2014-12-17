#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_model_GameCore
#include <com/nog/game/model/GameCore.h>
#endif
#ifndef INCLUDED_com_nog_game_model_Player
#include <com/nog/game/model/Player.h>
#endif
#ifndef INCLUDED_com_nog_game_view_GameBoard
#include <com/nog/game/view/GameBoard.h>
#endif
#ifndef INCLUDED_com_nog_game_view_Grid
#include <com/nog/game/view/Grid.h>
#endif
#ifndef INCLUDED_com_nog_game_view_player_PlayerGameView
#include <com/nog/game/view/player/PlayerGameView.h>
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

Void GameBoard_obj::__construct(::com::nog::game::model::GameCore model)
{
HX_STACK_FRAME("com.nog.game.view.GameBoard","new",0x3bfc2a44,"com.nog.game.view.GameBoard.new","com/nog/game/view/GameBoard.hx",21,0x639cbc0e)
HX_STACK_THIS(this)
HX_STACK_ARG(model,"model")
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->_model = model;
	HX_STACK_LINE(24)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//GameBoard_obj::~GameBoard_obj() { }

Dynamic GameBoard_obj::__CreateEmpty() { return  new GameBoard_obj; }
hx::ObjectPtr< GameBoard_obj > GameBoard_obj::__new(::com::nog::game::model::GameCore model)
{  hx::ObjectPtr< GameBoard_obj > result = new GameBoard_obj();
	result->__construct(model);
	return result;}

Dynamic GameBoard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameBoard_obj > result = new GameBoard_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameBoard_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","init",0x3d6188ac,"com.nog.game.view.GameBoard.init","com/nog/game/view/GameBoard.hx",27,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(28)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(29)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(31)
		::com::nog::game::view::Grid _g = ::com::nog::game::view::Grid_obj::__new(this->_model);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->_grid = _g;
		HX_STACK_LINE(32)
		this->addChild(this->_grid);
		HX_STACK_LINE(33)
		int _g1 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		Float _g2 = this->_grid->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(33)
		Float _g4 = (_g3 * .5);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(33)
		this->_grid->set_x(_g4);
		HX_STACK_LINE(34)
		this->_grid->set_y((int)1);
		HX_STACK_LINE(36)
		int _g5 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(36)
		Float _g6 = this->_grid->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(36)
		Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(36)
		Float _g8 = (_g7 * 0.5);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(36)
		::com::nog::game::view::player::PlayerGameView_obj::setWidth(_g8);
		HX_STACK_LINE(38)
		::com::nog::game::model::Player _g9 = this->_model->getPlayer((int)1);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(38)
		::com::nog::game::view::player::PlayerGameView _g10 = ::com::nog::game::view::player::PlayerGameView_obj::__new(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(38)
		this->_player1 = _g10;
		HX_STACK_LINE(39)
		this->addChild(this->_player1);
		HX_STACK_LINE(40)
		Float _g11 = this->_player1->set_y((int)1);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(40)
		this->_player1->set_x(_g11);
		HX_STACK_LINE(42)
		::com::nog::game::model::Player _g12 = this->_model->getPlayer((int)2);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(42)
		::com::nog::game::view::player::PlayerGameView _g13 = ::com::nog::game::view::player::PlayerGameView_obj::__new(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(42)
		this->_player2 = _g13;
		HX_STACK_LINE(43)
		this->addChild(this->_player2);
		HX_STACK_LINE(44)
		Float _g14 = this->_grid->get_x();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(44)
		Float _g15 = this->_grid->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(44)
		Float _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(44)
		this->_player2->set_x(_g16);
		HX_STACK_LINE(45)
		this->_player2->set_y((int)1);
		HX_STACK_LINE(47)
		this->update(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,init,(void))

Void GameBoard_obj::dugHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","dugHandler",0x1fd0fd50,"com.nog.game.view.GameBoard.dugHandler","com/nog/game/view/GameBoard.hx",54,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(55)
		this->_grid->removeEventListener(HX_CSTRING("dug"),this->dugHandler_dyn(),null());
		HX_STACK_LINE(56)
		int _g = this->_model->getPlayerTurn();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		if (((_g == (int)1))){
			HX_STACK_LINE(57)
			this->_player1->addRessources();
		}
		else{
			HX_STACK_LINE(59)
			this->_player2->addRessources();
		}
		HX_STACK_LINE(61)
		this->_model->checkGrid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,dugHandler,(void))

Void GameBoard_obj::powerOnHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","powerOnHandler",0xe375bc42,"com.nog.game.view.GameBoard.powerOnHandler","com/nog/game/view/GameBoard.hx",64,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(65)
		int _g = this->_model->getPlayerTurn();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		if (((_g == (int)0))){
			HX_STACK_LINE(66)
			this->removeEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true);
			HX_STACK_LINE(67)
			this->addEventListener(HX_CSTRING("poweroff"),this->powerOffHandler_dyn(),true,null(),null());
			HX_STACK_LINE(68)
			int _g1 = this->_model->getPlayer((int)1)->getPower();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			this->_grid->powerOn((int)1,_g1);
		}
		else{
			HX_STACK_LINE(70)
			this->removeEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true);
			HX_STACK_LINE(71)
			this->addEventListener(HX_CSTRING("poweroff"),this->powerOffHandler_dyn(),true,null(),null());
			HX_STACK_LINE(72)
			int _g2 = this->_model->getPlayer((int)2)->getPower();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(72)
			this->_grid->powerOn((int)2,_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,powerOnHandler,(void))

Void GameBoard_obj::powerOffHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","powerOffHandler",0xba6e2864,"com.nog.game.view.GameBoard.powerOffHandler","com/nog/game/view/GameBoard.hx",76,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(77)
		this->addEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true,null(),null());
		HX_STACK_LINE(78)
		this->removeEventListener(HX_CSTRING("poweroff"),this->powerOffHandler_dyn(),true);
		HX_STACK_LINE(79)
		this->_grid->powerOff();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,powerOffHandler,(void))

Void GameBoard_obj::update( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","update",0x6f0f72a5,"com.nog.game.view.GameBoard.update","com/nog/game/view/GameBoard.hx",84,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(85)
		this->removeEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true);
		HX_STACK_LINE(86)
		this->removeEventListener(HX_CSTRING("poweroff"),this->powerOffHandler_dyn(),true);
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::String _g = this->_model->getState();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("thinkingp1"))){
				HX_STACK_LINE(90)
				this->addEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true,null(),null());
				HX_STACK_LINE(91)
				this->_player1->thinking();
				HX_STACK_LINE(92)
				this->_player2->waiting();
				HX_STACK_LINE(93)
				bool _g1 = this->_model->isPlayerCpu(true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(93)
				this->_grid->selected(_g1);
			}
			else if (  ( _switch_1==HX_CSTRING("thinkingp2"))){
				HX_STACK_LINE(95)
				this->addEventListener(HX_CSTRING("poweron"),this->powerOnHandler_dyn(),true,null(),null());
				HX_STACK_LINE(96)
				this->_player1->waiting();
				HX_STACK_LINE(97)
				this->_player2->thinking();
				HX_STACK_LINE(98)
				bool _g1 = this->_model->isPlayerCpu(false);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(98)
				this->_grid->selected(_g1);
			}
			else if (  ( _switch_1==HX_CSTRING("digging"))){
				HX_STACK_LINE(100)
				int _g2 = this->_model->getPlayerTurn();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(100)
				if (((_g2 == (int)1))){
					HX_STACK_LINE(101)
					this->_player1->checkPower();
				}
				else{
					HX_STACK_LINE(103)
					this->_player2->checkPower();
				}
				HX_STACK_LINE(105)
				this->_grid->addEventListener(HX_CSTRING("dug"),this->dugHandler_dyn(),null(),null(),null());
				HX_STACK_LINE(106)
				this->_grid->dig();
			}
			else if (  ( _switch_1==HX_CSTRING("explosion"))){
				HX_STACK_LINE(108)
				int _g3 = this->_model->getPlayerTurn();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(108)
				if (((_g3 == (int)1))){
					HX_STACK_LINE(109)
					this->_player1->checkPower();
				}
				else{
					HX_STACK_LINE(111)
					this->_player2->checkPower();
				}
				HX_STACK_LINE(113)
				this->_grid->play();
			}
			else if (  ( _switch_1==HX_CSTRING("playingmove"))){
				HX_STACK_LINE(115)
				int _g4 = this->_model->getPlayerTurn();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(115)
				if (((_g4 == (int)1))){
					HX_STACK_LINE(116)
					this->_player1->checkPower();
					HX_STACK_LINE(117)
					this->_player1->payConstruct();
				}
				else{
					HX_STACK_LINE(119)
					this->_player2->checkPower();
					HX_STACK_LINE(120)
					this->_player2->payConstruct();
				}
				HX_STACK_LINE(122)
				this->_grid->play();
			}
			else if (  ( _switch_1==HX_CSTRING("choosinggrid"))){
			}
			else if (  ( _switch_1==HX_CSTRING("winninggrid"))){
				HX_STACK_LINE(126)
				this->_grid->winGrid();
			}
			else if (  ( _switch_1==HX_CSTRING("winninggame"))){
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,update,(void))

Void GameBoard_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.GameBoard","dispose",0xdbf19c83,"com.nog.game.view.GameBoard.dispose","com/nog/game/view/GameBoard.hx",136,0x639cbc0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(137)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameBoard_obj,dispose,(void))


GameBoard_obj::GameBoard_obj()
{
}

void GameBoard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameBoard);
	HX_MARK_MEMBER_NAME(_model,"_model");
	HX_MARK_MEMBER_NAME(_grid,"_grid");
	HX_MARK_MEMBER_NAME(_player1,"_player1");
	HX_MARK_MEMBER_NAME(_player2,"_player2");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameBoard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_model,"_model");
	HX_VISIT_MEMBER_NAME(_grid,"_grid");
	HX_VISIT_MEMBER_NAME(_player1,"_player1");
	HX_VISIT_MEMBER_NAME(_player2,"_player2");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameBoard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_grid") ) { return _grid; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { return _model; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_player1") ) { return _player1; }
		if (HX_FIELD_EQ(inName,"_player2") ) { return _player2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dugHandler") ) { return dugHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"powerOnHandler") ) { return powerOnHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"powerOffHandler") ) { return powerOffHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameBoard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_grid") ) { _grid=inValue.Cast< ::com::nog::game::view::Grid >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { _model=inValue.Cast< ::com::nog::game::model::GameCore >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_player1") ) { _player1=inValue.Cast< ::com::nog::game::view::player::PlayerGameView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_player2") ) { _player2=inValue.Cast< ::com::nog::game::view::player::PlayerGameView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameBoard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_model"));
	outFields->push(HX_CSTRING("_grid"));
	outFields->push(HX_CSTRING("_player1"));
	outFields->push(HX_CSTRING("_player2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::nog::game::model::GameCore*/ ,(int)offsetof(GameBoard_obj,_model),HX_CSTRING("_model")},
	{hx::fsObject /*::com::nog::game::view::Grid*/ ,(int)offsetof(GameBoard_obj,_grid),HX_CSTRING("_grid")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerGameView*/ ,(int)offsetof(GameBoard_obj,_player1),HX_CSTRING("_player1")},
	{hx::fsObject /*::com::nog::game::view::player::PlayerGameView*/ ,(int)offsetof(GameBoard_obj,_player2),HX_CSTRING("_player2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_model"),
	HX_CSTRING("_grid"),
	HX_CSTRING("_player1"),
	HX_CSTRING("_player2"),
	HX_CSTRING("init"),
	HX_CSTRING("dugHandler"),
	HX_CSTRING("powerOnHandler"),
	HX_CSTRING("powerOffHandler"),
	HX_CSTRING("update"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameBoard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameBoard_obj::__mClass,"__mClass");
};

#endif

Class GameBoard_obj::__mClass;

void GameBoard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.GameBoard"), hx::TCanCast< GameBoard_obj> ,sStaticFields,sMemberFields,
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

void GameBoard_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
