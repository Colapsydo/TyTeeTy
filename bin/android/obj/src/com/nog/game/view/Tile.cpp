#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_view_Tile
#include <com/nog/game/view/Tile.h>
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

Void Tile_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.view.Tile","new",0xf9a201e2,"com.nog.game.view.Tile.new","com/nog/game/view/Tile.hx",17,0x4f4d78ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new()
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct();
	return result;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct();
	return result;}

Void Tile_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.Tile","init",0x70d85b4e,"com.nog.game.view.Tile.init","com/nog/game/view/Tile.hx",23,0x4f4d78ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(24)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(25)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(27)
		this->_state = (int)-1;
		HX_STACK_LINE(28)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,init,(void))

Void Tile_obj::draw( ){
{
		HX_STACK_FRAME("com.nog.game.view.Tile","draw",0x6d8d4c42,"com.nog.game.view.Tile.draw","com/nog/game/view/Tile.hx",35,0x4f4d78ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->get_graphics()->clear();
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = this->_state;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			switch( (int)(_g)){
				case (int)-1: {
					HX_STACK_LINE(39)
					this->get_graphics()->beginFill((int)15711232,0.2);
					HX_STACK_LINE(40)
					this->get_graphics()->drawRect((int)0,(int)0,::com::nog::game::view::Tile_obj::_tileWidth,::com::nog::game::view::Tile_obj::_tileWidth);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(42)
					this->get_graphics()->beginFill((int)15724527,0.2);
					HX_STACK_LINE(43)
					this->get_graphics()->drawRect((int)0,(int)0,::com::nog::game::view::Tile_obj::_tileWidth,::com::nog::game::view::Tile_obj::_tileWidth);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(45)
					this->get_graphics()->beginFill((int)15724527,0.1);
					HX_STACK_LINE(46)
					this->get_graphics()->drawRect((int)0,(int)0,::com::nog::game::view::Tile_obj::_tileWidth,::com::nog::game::view::Tile_obj::_tileWidth);
					HX_STACK_LINE(47)
					this->get_graphics()->endFill();
					HX_STACK_LINE(48)
					this->get_graphics()->lineStyle((int)2,(int)16711680,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(49)
					this->get_graphics()->drawCircle((::com::nog::game::view::Tile_obj::_tileWidth * .5),(::com::nog::game::view::Tile_obj::_tileWidth * .5),(::com::nog::game::view::Tile_obj::_tileWidth * .4));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(51)
					this->get_graphics()->beginFill((int)15724527,0.1);
					HX_STACK_LINE(52)
					this->get_graphics()->drawRect((int)0,(int)0,::com::nog::game::view::Tile_obj::_tileWidth,::com::nog::game::view::Tile_obj::_tileWidth);
					HX_STACK_LINE(53)
					this->get_graphics()->endFill();
					HX_STACK_LINE(54)
					this->get_graphics()->lineStyle((int)2,(int)255,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(55)
					this->get_graphics()->drawCircle((::com::nog::game::view::Tile_obj::_tileWidth * .5),(::com::nog::game::view::Tile_obj::_tileWidth * .5),(::com::nog::game::view::Tile_obj::_tileWidth * .4));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,draw,(void))

Void Tile_obj::change( int data){
{
		HX_STACK_FRAME("com.nog.game.view.Tile","change",0xbc46bd2e,"com.nog.game.view.Tile.change","com/nog/game/view/Tile.hx",62,0x4f4d78ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(64)
		this->_state = data;
		HX_STACK_LINE(65)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,change,(void))

Void Tile_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.Tile","dispose",0xf01e9b21,"com.nog.game.view.Tile.dispose","com/nog/game/view/Tile.hx",75,0x4f4d78ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(76)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,dispose,(void))

Float Tile_obj::_tileWidth;

Float Tile_obj::getTileWidth( ){
	HX_STACK_FRAME("com.nog.game.view.Tile","getTileWidth",0xb8c93ec0,"com.nog.game.view.Tile.getTileWidth","com/nog/game/view/Tile.hx",70,0x4f4d78ac)
	HX_STACK_LINE(70)
	return ::com::nog::game::view::Tile_obj::_tileWidth;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getTileWidth,return )

Void Tile_obj::setTileWidth( Float tileWidth){
{
		HX_STACK_FRAME("com.nog.game.view.Tile","setTileWidth",0xcdc26234,"com.nog.game.view.Tile.setTileWidth","com/nog/game/view/Tile.hx",71,0x4f4d78ac)
		HX_STACK_ARG(tileWidth,"tileWidth")
		HX_STACK_LINE(71)
		::com::nog::game::view::Tile_obj::_tileWidth = tileWidth;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,setTileWidth,(void))


Tile_obj::Tile_obj()
{
}

Dynamic Tile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"change") ) { return change_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileWidth") ) { return getTileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileWidth") ) { return setTileWidth_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("getTileWidth"),
	HX_CSTRING("setTileWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tile_obj,_state),HX_CSTRING("_state")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_state"),
	HX_CSTRING("init"),
	HX_CSTRING("draw"),
	HX_CSTRING("change"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tile_obj::_tileWidth,"_tileWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tile_obj::_tileWidth,"_tileWidth");
};

#endif

Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.Tile"), hx::TCanCast< Tile_obj> ,sStaticFields,sMemberFields,
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

void Tile_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
