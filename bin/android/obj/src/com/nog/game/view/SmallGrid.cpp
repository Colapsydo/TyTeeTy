#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_nog_game_view_SmallGrid
#include <com/nog/game/view/SmallGrid.h>
#endif
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
namespace com{
namespace nog{
namespace game{
namespace view{

Void SmallGrid_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.view.SmallGrid","new",0xa307789d,"com.nog.game.view.SmallGrid.new","com/nog/game/view/SmallGrid.hx",28,0xc4813bd5)
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

//SmallGrid_obj::~SmallGrid_obj() { }

Dynamic SmallGrid_obj::__CreateEmpty() { return  new SmallGrid_obj; }
hx::ObjectPtr< SmallGrid_obj > SmallGrid_obj::__new()
{  hx::ObjectPtr< SmallGrid_obj > result = new SmallGrid_obj();
	result->__construct();
	return result;}

Dynamic SmallGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SmallGrid_obj > result = new SmallGrid_obj();
	result->__construct();
	return result;}

Void SmallGrid_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","init",0x003ac833,"com.nog.game.view.SmallGrid.init","com/nog/game/view/SmallGrid.hx",34,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(35)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(36)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(38)
		::openfl::_v2::display::Shape _g = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->_background = _g;
		HX_STACK_LINE(39)
		this->addChild(this->_background);
		HX_STACK_LINE(40)
		this->_background->get_graphics()->lineStyle((int)1,(int)15724527,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		this->_background->get_graphics()->beginFill((int)5592439,null());
		HX_STACK_LINE(42)
		this->_background->get_graphics()->drawRoundRect((int)0,(int)0,::com::nog::game::view::SmallGrid_obj::_gridWidth,::com::nog::game::view::SmallGrid_obj::_gridWidth,(int)5,(int)5);
		HX_STACK_LINE(43)
		this->_background->get_graphics()->endFill();
		HX_STACK_LINE(45)
		Array< ::Dynamic > _g2;		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/view/SmallGrid.hx",45,0xc4813bd5)
				{
					HX_STACK_LINE(45)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(45)
					Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(45)
					this1 = _g1;
					HX_STACK_LINE(45)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		_g2 = _Function_1_1::Block();
		HX_STACK_LINE(45)
		this->_tiles = _g2;
		HX_STACK_LINE(46)
		::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(46)
		this->_tilesContainer = _g3;
		HX_STACK_LINE(47)
		this->addChild(this->_tilesContainer);
		HX_STACK_LINE(48)
		Float tileSize = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(tileSize,"tileSize");
		HX_STACK_LINE(49)
		::com::nog::game::view::Tile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g1 < (int)9))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(51)
				::com::nog::game::view::Tile _g4 = ::com::nog::game::view::Tile_obj::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(51)
				tile = _g4;
				HX_STACK_LINE(52)
				this->_tilesContainer->addChild(tile);
				HX_STACK_LINE(53)
				tile->set_x((hx::Mod(i,(int)3) * tileSize));
				HX_STACK_LINE(54)
				int _g5 = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(54)
				Float _g6 = (_g5 * tileSize);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(54)
				tile->set_y(_g6);
				HX_STACK_LINE(55)
				this->_tiles->push(tile);
			}
		}
		HX_STACK_LINE(58)
		::openfl::_v2::display::Shape _g7 = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(58)
		this->_overGrid = _g7;
		HX_STACK_LINE(59)
		this->addChild(this->_overGrid);
		HX_STACK_LINE(60)
		this->_overGrid->get_graphics()->lineStyle((int)1,(int)15724527,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(61)
		this->_overGrid->get_graphics()->drawRoundRect((int)0,(int)0,::com::nog::game::view::SmallGrid_obj::_gridWidth,::com::nog::game::view::SmallGrid_obj::_gridWidth,(int)5,(int)5);
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(63)
				this->_overGrid->get_graphics()->moveTo((int)0,(i * tileSize));
				HX_STACK_LINE(64)
				this->_overGrid->get_graphics()->lineTo(::com::nog::game::view::SmallGrid_obj::_gridWidth,(i * tileSize));
				HX_STACK_LINE(65)
				this->_overGrid->get_graphics()->moveTo((i * tileSize),(int)0);
				HX_STACK_LINE(66)
				this->_overGrid->get_graphics()->lineTo((i * tileSize),::com::nog::game::view::SmallGrid_obj::_gridWidth);
			}
		}
		HX_STACK_LINE(69)
		::openfl::_v2::display::Shape _g8 = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(69)
		this->_shovleLight = _g8;
		HX_STACK_LINE(70)
		this->_shovleLight->get_graphics()->beginFill((int)16776960,0.2);
		HX_STACK_LINE(71)
		this->_shovleLight->get_graphics()->drawRect((int)0,(int)0,(tileSize * (int)3),tileSize);
		HX_STACK_LINE(72)
		this->_shovleLight->get_graphics()->endFill();
		HX_STACK_LINE(74)
		this->_shovleLight->set_rotation((int)90);
		HX_STACK_LINE(75)
		Float _g9 = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(75)
		this->_shovleLight->set_x(_g9);
		HX_STACK_LINE(77)
		this->activate(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,init,(void))

Void SmallGrid_obj::activate( bool activate){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","activate",0xf27c7656,"com.nog.game.view.SmallGrid.activate","com/nog/game/view/SmallGrid.hx",86,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(activate,"activate")
		HX_STACK_LINE(87)
		this->_activate = activate;
		HX_STACK_LINE(88)
		if (((this->_activate == true))){
			HX_STACK_LINE(89)
			this->buttonMode = true;
			HX_STACK_LINE(90)
			this->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(92)
			this->buttonMode = false;
			HX_STACK_LINE(93)
			this->set_alpha(0.6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,activate,(void))

Void SmallGrid_obj::changeTile( int tile,int data){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","changeTile",0x4cdc8a21,"com.nog.game.view.SmallGrid.changeTile","com/nog/game/view/SmallGrid.hx",98,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(98)
		this->_tiles->__get(tile).StaticCast< ::com::nog::game::view::Tile >()->change(data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SmallGrid_obj,changeTile,(void))

Void SmallGrid_obj::winChange( int winner){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","winChange",0x77a79ea9,"com.nog.game.view.SmallGrid.winChange","com/nog/game/view/SmallGrid.hx",102,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(winner,"winner")
		HX_STACK_LINE(102)
		if (((winner < (int)3))){
			HX_STACK_LINE(103)
			this->removeChild(this->_overGrid);
			HX_STACK_LINE(104)
			this->removeChild(this->_tilesContainer);
			HX_STACK_LINE(105)
			if (((winner == (int)1))){
				HX_STACK_LINE(106)
				this->_background->get_graphics()->lineStyle((int)4,(int)16711680,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(107)
				this->_background->get_graphics()->drawCircle((::com::nog::game::view::SmallGrid_obj::_gridWidth * .5),(::com::nog::game::view::SmallGrid_obj::_gridWidth * .5),(::com::nog::game::view::SmallGrid_obj::_gridWidth * .4));
			}
			else{
				HX_STACK_LINE(109)
				this->_background->get_graphics()->lineStyle((int)4,(int)255,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(110)
				this->_background->get_graphics()->drawCircle((::com::nog::game::view::SmallGrid_obj::_gridWidth * .5),(::com::nog::game::view::SmallGrid_obj::_gridWidth * .5),(::com::nog::game::view::SmallGrid_obj::_gridWidth * .4));
			}
		}
		else{
			HX_STACK_LINE(115)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			int _g = this->_tiles->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(116)
				this->_tiles->__get(i).StaticCast< ::com::nog::game::view::Tile >()->change((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,winChange,(void))

Void SmallGrid_obj::shovelLightOff( ){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","shovelLightOff",0x8328969f,"com.nog.game.view.SmallGrid.shovelLightOff","com/nog/game/view/SmallGrid.hx",123,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		::openfl::_v2::display::DisplayObjectContainer _g = this->_shovleLight->get_parent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		if (((_g != null()))){
			HX_STACK_LINE(125)
			this->removeChild(this->_shovleLight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SmallGrid_obj,shovelLightOff,(void))

Void SmallGrid_obj::shovelLight( int shovelLine){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","shovelLight",0x32e682b0,"com.nog.game.view.SmallGrid.shovelLight","com/nog/game/view/SmallGrid.hx",129,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shovelLine,"shovelLine")
		HX_STACK_LINE(130)
		this->addChildAt(this->_shovleLight,(int)1);
		HX_STACK_LINE(131)
		this->_shovleLight->set_rotation((int)0);
		HX_STACK_LINE(132)
		this->_shovleLight->set_x((int)0);
		HX_STACK_LINE(133)
		this->_shovleLight->set_y((int)0);
		HX_STACK_LINE(134)
		switch( (int)(shovelLine)){
			case (int)0: case (int)3: case (int)6: {
				HX_STACK_LINE(136)
				this->_shovleLight->set_y((int)0);
			}
			;break;
			case (int)1: case (int)4: case (int)7: {
				HX_STACK_LINE(138)
				Float _g = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(138)
				this->_shovleLight->set_y(_g);
			}
			;break;
			case (int)2: case (int)5: case (int)8: {
				HX_STACK_LINE(140)
				Float _g1 = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(140)
				Float _g2 = ((int)2 * _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(140)
				this->_shovleLight->set_y(_g2);
			}
			;break;
			case (int)9: case (int)12: case (int)15: {
				HX_STACK_LINE(142)
				this->_shovleLight->set_rotation((int)90);
				HX_STACK_LINE(143)
				Float _g3 = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(143)
				this->_shovleLight->set_x(_g3);
			}
			;break;
			case (int)10: case (int)13: case (int)16: {
				HX_STACK_LINE(145)
				this->_shovleLight->set_rotation((int)90);
				HX_STACK_LINE(146)
				Float _g4 = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(146)
				Float _g5 = ((int)2 * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(146)
				this->_shovleLight->set_x(_g5);
			}
			;break;
			case (int)11: case (int)14: case (int)17: {
				HX_STACK_LINE(148)
				this->_shovleLight->set_rotation((int)90);
				HX_STACK_LINE(149)
				Float _g6 = ::com::nog::game::view::Tile_obj::getTileWidth();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(149)
				Float _g7 = ((int)3 * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(149)
				this->_shovleLight->set_x(_g7);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,shovelLight,(void))

int SmallGrid_obj::getTileNum( ::com::nog::game::view::Tile tile){
	HX_STACK_FRAME("com.nog.game.view.SmallGrid","getTileNum",0xba6f8b25,"com.nog.game.view.SmallGrid.getTileNum","com/nog/game/view/SmallGrid.hx",155,0xc4813bd5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(155)
	return this->_tilesContainer->getChildIndex(tile);
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,getTileNum,return )

Void SmallGrid_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","dispose",0xa4658b5c,"com.nog.game.view.SmallGrid.dispose","com/nog/game/view/SmallGrid.hx",163,0xc4813bd5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(164)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,dispose,(void))

Float SmallGrid_obj::_gridWidth;

Void SmallGrid_obj::setGridWidth( Float gridWidth){
{
		HX_STACK_FRAME("com.nog.game.view.SmallGrid","setGridWidth",0x82cba981,"com.nog.game.view.SmallGrid.setGridWidth","com/nog/game/view/SmallGrid.hx",157,0xc4813bd5)
		HX_STACK_ARG(gridWidth,"gridWidth")
		HX_STACK_LINE(157)
		::com::nog::game::view::SmallGrid_obj::_gridWidth = gridWidth;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SmallGrid_obj,setGridWidth,(void))


SmallGrid_obj::SmallGrid_obj()
{
}

void SmallGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SmallGrid);
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_shovleLight,"_shovleLight");
	HX_MARK_MEMBER_NAME(_overGrid,"_overGrid");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	HX_MARK_MEMBER_NAME(_tilesContainer,"_tilesContainer");
	HX_MARK_MEMBER_NAME(_activate,"_activate");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SmallGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_shovleLight,"_shovleLight");
	HX_VISIT_MEMBER_NAME(_overGrid,"_overGrid");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	HX_VISIT_MEMBER_NAME(_tilesContainer,"_tilesContainer");
	HX_VISIT_MEMBER_NAME(_activate,"_activate");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SmallGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { return _tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overGrid") ) { return _overGrid; }
		if (HX_FIELD_EQ(inName,"_activate") ) { return _activate; }
		if (HX_FIELD_EQ(inName,"winChange") ) { return winChange_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_gridWidth") ) { return _gridWidth; }
		if (HX_FIELD_EQ(inName,"changeTile") ) { return changeTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileNum") ) { return getTileNum_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"shovelLight") ) { return shovelLight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setGridWidth") ) { return setGridWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_shovleLight") ) { return _shovleLight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shovelLightOff") ) { return shovelLightOff_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_tilesContainer") ) { return _tilesContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SmallGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overGrid") ) { _overGrid=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activate") ) { _activate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_gridWidth") ) { _gridWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_shovleLight") ) { _shovleLight=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_tilesContainer") ) { _tilesContainer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SmallGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_shovleLight"));
	outFields->push(HX_CSTRING("_overGrid"));
	outFields->push(HX_CSTRING("_tiles"));
	outFields->push(HX_CSTRING("_tilesContainer"));
	outFields->push(HX_CSTRING("_activate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_gridWidth"),
	HX_CSTRING("setGridWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(SmallGrid_obj,_background),HX_CSTRING("_background")},
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(SmallGrid_obj,_shovleLight),HX_CSTRING("_shovleLight")},
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(SmallGrid_obj,_overGrid),HX_CSTRING("_overGrid")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SmallGrid_obj,_tiles),HX_CSTRING("_tiles")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(SmallGrid_obj,_tilesContainer),HX_CSTRING("_tilesContainer")},
	{hx::fsBool,(int)offsetof(SmallGrid_obj,_activate),HX_CSTRING("_activate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_background"),
	HX_CSTRING("_shovleLight"),
	HX_CSTRING("_overGrid"),
	HX_CSTRING("_tiles"),
	HX_CSTRING("_tilesContainer"),
	HX_CSTRING("_activate"),
	HX_CSTRING("init"),
	HX_CSTRING("activate"),
	HX_CSTRING("changeTile"),
	HX_CSTRING("winChange"),
	HX_CSTRING("shovelLightOff"),
	HX_CSTRING("shovelLight"),
	HX_CSTRING("getTileNum"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SmallGrid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SmallGrid_obj::_gridWidth,"_gridWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SmallGrid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SmallGrid_obj::_gridWidth,"_gridWidth");
};

#endif

Class SmallGrid_obj::__mClass;

void SmallGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.SmallGrid"), hx::TCanCast< SmallGrid_obj> ,sStaticFields,sMemberFields,
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

void SmallGrid_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
