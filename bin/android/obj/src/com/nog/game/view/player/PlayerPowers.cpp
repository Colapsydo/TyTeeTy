#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_utils_BezierArc
#include <com/nog/game/utils/BezierArc.h>
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
#ifndef INCLUDED_openfl__v2_display_Shape
#include <openfl/_v2/display/Shape.h>
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
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace view{
namespace player{

Void PlayerPowers_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","new",0x2a2816ec,"com.nog.game.view.player.PlayerPowers.new","com/nog/game/view/player/PlayerPowers.hx",28,0xb03cd405)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(31)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerPowers_obj::~PlayerPowers_obj() { }

Dynamic PlayerPowers_obj::__CreateEmpty() { return  new PlayerPowers_obj; }
hx::ObjectPtr< PlayerPowers_obj > PlayerPowers_obj::__new()
{  hx::ObjectPtr< PlayerPowers_obj > result = new PlayerPowers_obj();
	result->__construct();
	return result;}

Dynamic PlayerPowers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerPowers_obj > result = new PlayerPowers_obj();
	result->__construct();
	return result;}

Void PlayerPowers_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","init",0xb5a4af04,"com.nog.game.view.player.PlayerPowers.init","com/nog/game/view/player/PlayerPowers.hx",34,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(35)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(36)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(38)
		this->get_graphics()->lineStyle((int)2,(int)65280,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(39)
		this->get_graphics()->beginFill((int)34816,null());
		HX_STACK_LINE(40)
		this->get_graphics()->drawCircle((int)0,(int)0,(int)30);
		HX_STACK_LINE(42)
		::openfl::_v2::display::Shape _g = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->_powerCircle = _g;
		HX_STACK_LINE(43)
		this->addChild(this->_powerCircle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,init,(void))

Void PlayerPowers_obj::drawPowerHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","drawPowerHandler",0x0802465d,"com.nog.game.view.player.PlayerPowers.drawPowerHandler","com/nog/game/view/player/PlayerPowers.hx",51,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(52)
		if (((this->_actualAngle >= (this->_targetAngle - .03)))){
			HX_STACK_LINE(53)
			this->_actualAngle = this->_targetAngle;
			HX_STACK_LINE(54)
			this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->drawPowerHandler_dyn(),null());
		}
		HX_STACK_LINE(56)
		this->draw();
		HX_STACK_LINE(57)
		hx::AddEq(this->_actualAngle,(((this->_targetAngle - this->_actualAngle)) * .07));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,drawPowerHandler,(void))

Void PlayerPowers_obj::resetPowerHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","resetPowerHandler",0x4d11fa40,"com.nog.game.view.player.PlayerPowers.resetPowerHandler","com/nog/game/view/player/PlayerPowers.hx",60,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(61)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::openfl::_v2::display::Shape _g = this->_powerCircle;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Float _g1 = _g->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			Float _g11 = (_g1 - 0.1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(61)
			_g2 = _g->set_scaleY(_g11);
		}
		HX_STACK_LINE(61)
		this->_powerCircle->set_scaleX(_g2);
		HX_STACK_LINE(62)
		Float _g3 = this->_powerCircle->get_scaleX();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(62)
		if (((_g3 <= (int)0))){
			HX_STACK_LINE(63)
			this->_powerCircle->get_graphics()->clear();
			HX_STACK_LINE(64)
			Float _g4 = this->_powerCircle->set_scaleY((int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(64)
			this->_powerCircle->set_scaleX(_g4);
			HX_STACK_LINE(65)
			this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->resetPowerHandler_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,resetPowerHandler,(void))

Void PlayerPowers_obj::clickHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","clickHandler",0xb92c7c56,"com.nog.game.view.player.PlayerPowers.clickHandler","com/nog/game/view/player/PlayerPowers.hx",69,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(70)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("power"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,clickHandler,(void))

Void PlayerPowers_obj::draw( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","draw",0xb2599ff8,"com.nog.game.view.player.PlayerPowers.draw","com/nog/game/view/player/PlayerPowers.hx",76,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->_powerCircle->get_graphics()->clear();
		HX_STACK_LINE(78)
		this->_powerCircle->get_graphics()->lineStyle((int)2,(int)65280,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(80)
		int powerToDraw = (this->_power - (int)1);		HX_STACK_VAR(powerToDraw,"powerToDraw");
		HX_STACK_LINE(81)
		Array< Float > arc;		HX_STACK_VAR(arc,"arc");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			if ((!(((powerToDraw > (int)0))))){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(85)
			this->_powerCircle->get_graphics()->beginFill((int)2272034,null());
			HX_STACK_LINE(86)
			Array< Float > _g = ::com::nog::game::utils::BezierArc_obj::createArcQuadCurve((-1.57 + (((powerToDraw - (int)1)) * 2.09439510)),(-1.57 + (powerToDraw * 2.09439510)),(int)26,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			arc = _g;
			HX_STACK_LINE(87)
			this->_powerCircle->get_graphics()->moveTo((int)0,(int)0);
			HX_STACK_LINE(88)
			this->_powerCircle->get_graphics()->lineTo(arc->__get((int)0),arc->__get((int)1));
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((arc->length > (int)0))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(90)
				this->_powerCircle->get_graphics()->cubicCurveTo(arc->__get((int)2),arc->__get((int)3),arc->__get((int)4),arc->__get((int)5),arc->__get((int)6),arc->__get((int)7));
				HX_STACK_LINE(91)
				arc->splice((int)0,(int)8);
			}
			HX_STACK_LINE(93)
			this->_powerCircle->get_graphics()->lineTo((int)0,(int)0);
			HX_STACK_LINE(94)
			(powerToDraw)--;
		}
		HX_STACK_LINE(97)
		this->_powerCircle->get_graphics()->beginFill((int)2272034,null());
		HX_STACK_LINE(98)
		Array< Float > _g1 = ::com::nog::game::utils::BezierArc_obj::createArcQuadCurve(this->_startAngle,this->_actualAngle,(int)26,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		arc = _g1;
		HX_STACK_LINE(99)
		this->_powerCircle->get_graphics()->moveTo((int)0,(int)0);
		HX_STACK_LINE(100)
		this->_powerCircle->get_graphics()->lineTo(arc->__get((int)0),arc->__get((int)1));
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			if ((!(((arc->length > (int)0))))){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(102)
			this->_powerCircle->get_graphics()->cubicCurveTo(arc->__get((int)2),arc->__get((int)3),arc->__get((int)4),arc->__get((int)5),arc->__get((int)6),arc->__get((int)7));
			HX_STACK_LINE(103)
			arc->splice((int)0,(int)8);
		}
		HX_STACK_LINE(105)
		this->_powerCircle->get_graphics()->lineTo((int)0,(int)0);
		HX_STACK_LINE(106)
		this->_powerCircle->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerPowers_obj,draw,(void))

Void PlayerPowers_obj::addPower( int power){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","addPower",0xeadbf018,"com.nog.game.view.player.PlayerPowers.addPower","com/nog/game/view/player/PlayerPowers.hx",112,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(power,"power")
		HX_STACK_LINE(112)
		if (((power > (int)0))){
			HX_STACK_LINE(113)
			hx::AddEq(this->_power,power);
			HX_STACK_LINE(114)
			if (((this->_power > (int)3))){
				HX_STACK_LINE(115)
				this->_power = (int)3;
			}
			else{
				HX_STACK_LINE(117)
				if (((this->_power != (int)0))){
					HX_STACK_LINE(118)
					Float _g = this->_actualAngle = (-1.57 + (((this->_power - (int)1)) * 2.09439510));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(118)
					this->_startAngle = _g;
					HX_STACK_LINE(119)
					this->_targetAngle = (-1.57 + (this->_power * 2.09439510));
					HX_STACK_LINE(120)
					this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->drawPowerHandler_dyn(),null(),null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,addPower,(void))

Void PlayerPowers_obj::removePower( ){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","removePower",0x415ddbad,"com.nog.game.view.player.PlayerPowers.removePower","com/nog/game/view/player/PlayerPowers.hx",126,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->_power = (int)0;
		HX_STACK_LINE(128)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->resetPowerHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerPowers_obj,removePower,(void))

Void PlayerPowers_obj::activate( bool value){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","activate",0x909099a7,"com.nog.game.view.player.PlayerPowers.activate","com/nog/game/view/player/PlayerPowers.hx",132,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(132)
		if (((bool((value == true)) && bool((this->_power > (int)0))))){
			HX_STACK_LINE(133)
			this->buttonMode = true;
			HX_STACK_LINE(134)
			this->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(136)
			this->buttonMode = false;
			HX_STACK_LINE(137)
			this->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,activate,(void))

Void PlayerPowers_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.player.PlayerPowers","dispose",0x07d4fd2b,"com.nog.game.view.player.PlayerPowers.dispose","com/nog/game/view/player/PlayerPowers.hx",145,0xb03cd405)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(146)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(148)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerPowers_obj,dispose,(void))

Float PlayerPowers_obj::_twoThirdPi;

::String PlayerPowers_obj::POWER;


PlayerPowers_obj::PlayerPowers_obj()
{
}

void PlayerPowers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerPowers);
	HX_MARK_MEMBER_NAME(_power,"_power");
	HX_MARK_MEMBER_NAME(_powerCircle,"_powerCircle");
	HX_MARK_MEMBER_NAME(_startAngle,"_startAngle");
	HX_MARK_MEMBER_NAME(_actualAngle,"_actualAngle");
	HX_MARK_MEMBER_NAME(_targetAngle,"_targetAngle");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerPowers_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_power,"_power");
	HX_VISIT_MEMBER_NAME(_powerCircle,"_powerCircle");
	HX_VISIT_MEMBER_NAME(_startAngle,"_startAngle");
	HX_VISIT_MEMBER_NAME(_actualAngle,"_actualAngle");
	HX_VISIT_MEMBER_NAME(_targetAngle,"_targetAngle");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerPowers_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_power") ) { return _power; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPower") ) { return addPower_dyn(); }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startAngle") ) { return _startAngle; }
		if (HX_FIELD_EQ(inName,"removePower") ) { return removePower_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_powerCircle") ) { return _powerCircle; }
		if (HX_FIELD_EQ(inName,"_actualAngle") ) { return _actualAngle; }
		if (HX_FIELD_EQ(inName,"_targetAngle") ) { return _targetAngle; }
		if (HX_FIELD_EQ(inName,"clickHandler") ) { return clickHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawPowerHandler") ) { return drawPowerHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetPowerHandler") ) { return resetPowerHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerPowers_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_power") ) { _power=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startAngle") ) { _startAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_powerCircle") ) { _powerCircle=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_actualAngle") ) { _actualAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_targetAngle") ) { _targetAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerPowers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_power"));
	outFields->push(HX_CSTRING("_powerCircle"));
	outFields->push(HX_CSTRING("_startAngle"));
	outFields->push(HX_CSTRING("_actualAngle"));
	outFields->push(HX_CSTRING("_targetAngle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_twoThirdPi"),
	HX_CSTRING("POWER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlayerPowers_obj,_power),HX_CSTRING("_power")},
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(PlayerPowers_obj,_powerCircle),HX_CSTRING("_powerCircle")},
	{hx::fsFloat,(int)offsetof(PlayerPowers_obj,_startAngle),HX_CSTRING("_startAngle")},
	{hx::fsFloat,(int)offsetof(PlayerPowers_obj,_actualAngle),HX_CSTRING("_actualAngle")},
	{hx::fsFloat,(int)offsetof(PlayerPowers_obj,_targetAngle),HX_CSTRING("_targetAngle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_power"),
	HX_CSTRING("_powerCircle"),
	HX_CSTRING("_startAngle"),
	HX_CSTRING("_actualAngle"),
	HX_CSTRING("_targetAngle"),
	HX_CSTRING("init"),
	HX_CSTRING("drawPowerHandler"),
	HX_CSTRING("resetPowerHandler"),
	HX_CSTRING("clickHandler"),
	HX_CSTRING("draw"),
	HX_CSTRING("addPower"),
	HX_CSTRING("removePower"),
	HX_CSTRING("activate"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerPowers_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayerPowers_obj::_twoThirdPi,"_twoThirdPi");
	HX_MARK_MEMBER_NAME(PlayerPowers_obj::POWER,"POWER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerPowers_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayerPowers_obj::_twoThirdPi,"_twoThirdPi");
	HX_VISIT_MEMBER_NAME(PlayerPowers_obj::POWER,"POWER");
};

#endif

Class PlayerPowers_obj::__mClass;

void PlayerPowers_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.player.PlayerPowers"), hx::TCanCast< PlayerPowers_obj> ,sStaticFields,sMemberFields,
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

void PlayerPowers_obj::__boot()
{
	_twoThirdPi= 2.09439510;
	POWER= HX_CSTRING("power");
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player
