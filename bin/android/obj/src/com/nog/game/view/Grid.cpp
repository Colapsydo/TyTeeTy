#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_nog_game_model_GameCore
#include <com/nog/game/model/GameCore.h>
#endif
#ifndef INCLUDED_com_nog_game_view_Grid
#include <com/nog/game/view/Grid.h>
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
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace view{

Void Grid_obj::__construct(::com::nog::game::model::GameCore model)
{
HX_STACK_FRAME("com.nog.game.view.Grid","new",0xc1dab97a,"com.nog.game.view.Grid.new","com/nog/game/view/Grid.hx",33,0x110fbc14)
HX_STACK_THIS(this)
HX_STACK_ARG(model,"model")
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->_model = model;
	HX_STACK_LINE(36)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(::com::nog::game::model::GameCore model)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(model);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Grid_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","init",0xda4048b6,"com.nog.game.view.Grid.init","com/nog/game/view/Grid.hx",39,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(41)
		this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null(),null(),null());
		HX_STACK_LINE(43)
		::openfl::_v2::display::Shape _g = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->_gridBackground = _g;
		HX_STACK_LINE(44)
		this->addChild(this->_gridBackground);
		HX_STACK_LINE(45)
		int _g1 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		Float gridWidth = (_g1 - (int)2);		HX_STACK_VAR(gridWidth,"gridWidth");
		HX_STACK_LINE(46)
		Float gridDim = (Float(gridWidth) / Float((int)3));		HX_STACK_VAR(gridDim,"gridDim");
		HX_STACK_LINE(47)
		this->_gridBackground->get_graphics()->lineStyle((int)2,(int)15724527,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(48)
		this->_gridBackground->get_graphics()->drawRoundRect((int)0,(int)0,gridWidth,gridWidth,(int)12,(int)12);
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g2 < (int)3))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(50)
				this->_gridBackground->get_graphics()->moveTo((int)0,(i * gridDim));
				HX_STACK_LINE(51)
				this->_gridBackground->get_graphics()->lineTo(gridWidth,(i * gridDim));
				HX_STACK_LINE(52)
				this->_gridBackground->get_graphics()->moveTo((i * gridDim),(int)0);
				HX_STACK_LINE(53)
				this->_gridBackground->get_graphics()->lineTo((i * gridDim),gridWidth);
			}
		}
		HX_STACK_LINE(56)
		::com::nog::game::view::SmallGrid_obj::setGridWidth((gridDim - (int)10));
		HX_STACK_LINE(57)
		::com::nog::game::view::Tile_obj::setTileWidth((Float(((gridDim - (int)10))) / Float((int)3)));
		HX_STACK_LINE(59)
		Array< ::Dynamic > _g3;		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/view/Grid.hx",59,0x110fbc14)
				{
					HX_STACK_LINE(59)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(59)
					Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(59)
					this1 = _g2;
					HX_STACK_LINE(59)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		_g3 = _Function_1_1::Block();
		HX_STACK_LINE(59)
		this->_smallGrids = _g3;
		HX_STACK_LINE(60)
		::openfl::_v2::display::Sprite _g4 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(60)
		this->_smallGridsContainer = _g4;
		HX_STACK_LINE(61)
		this->addChild(this->_smallGridsContainer);
		HX_STACK_LINE(62)
		::com::nog::game::view::SmallGrid smallGrid;		HX_STACK_VAR(smallGrid,"smallGrid");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				if ((!(((_g2 < (int)9))))){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(63)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(64)
				::com::nog::game::view::SmallGrid _g5 = ::com::nog::game::view::SmallGrid_obj::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(64)
				smallGrid = _g5;
				HX_STACK_LINE(65)
				this->_smallGridsContainer->addChild(smallGrid);
				HX_STACK_LINE(66)
				smallGrid->set_x(((hx::Mod(i,(int)3) * gridDim) + (int)5));
				HX_STACK_LINE(67)
				int _g6 = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(67)
				Float _g7 = (_g6 * gridDim);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(67)
				Float _g8 = (_g7 + (int)5);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(67)
				smallGrid->set_y(_g8);
				HX_STACK_LINE(68)
				this->_smallGrids->push(smallGrid);
			}
		}
		HX_STACK_LINE(72)
		this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,init,(void))

Void Grid_obj::clickHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","clickHandler",0x64641808,"com.nog.game.view.Grid.clickHandler","com/nog/game/view/Grid.hx",77,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(78)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		bool _g1 = ::Std_obj::is(_g,hx::ClassOf< ::com::nog::game::view::Tile >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		if (((_g1 == true))){
			HX_STACK_LINE(79)
			::com::nog::game::view::Tile tile = e->get_target();		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(80)
			::com::nog::game::view::SmallGrid grid = e->get_target()->__Field(HX_CSTRING("parent"),true)->__Field(HX_CSTRING("parent"),true);		HX_STACK_VAR(grid,"grid");
			HX_STACK_LINE(81)
			int _g2 = this->_smallGridsContainer->getChildIndex(grid);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(81)
			int _g3 = grid->getTileNum(tile);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(81)
			this->_model->play(_g2,_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,clickHandler,(void))

Void Grid_obj::shovelHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","shovelHandler",0xa6e92341,"com.nog.game.view.Grid.shovelHandler","com/nog/game/view/Grid.hx",89,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(90)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		bool _g1 = ::Std_obj::is(_g,hx::ClassOf< ::com::nog::game::view::Tile >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		if (((_g1 == true))){
			HX_STACK_LINE(91)
			::com::nog::game::view::SmallGrid grid = e->get_target()->__Field(HX_CSTRING("parent"),true)->__Field(HX_CSTRING("parent"),true);		HX_STACK_VAR(grid,"grid");
			HX_STACK_LINE(92)
			int gridIndex = this->_smallGridsContainer->getChildIndex(grid);		HX_STACK_VAR(gridIndex,"gridIndex");
			HX_STACK_LINE(93)
			int _g2 = this->_model->getPlayGrid();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(93)
			if (((gridIndex == _g2))){
				HX_STACK_LINE(94)
				this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->shovelHandler_dyn(),null());
				HX_STACK_LINE(95)
				this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_MOVE,this->shovelMoveHandler_dyn(),null(),null(),null());
				HX_STACK_LINE(96)
				this->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shovelUpHandler_dyn(),null(),null(),null());
				HX_STACK_LINE(98)
				Dynamic _g3 = e->get_target();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(98)
				int _g4 = grid->getTileNum(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(98)
				this->_shovelTile = _g4;
				HX_STACK_LINE(99)
				this->_shovelX = ((hx::Mod(gridIndex,(int)3) * (int)3) + hx::Mod(this->_shovelTile,(int)3));
				HX_STACK_LINE(100)
				int _g5 = ::Std_obj::_int((Float(gridIndex) / Float((int)3)));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(100)
				int _g6 = (_g5 * (int)3);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(100)
				int _g7 = ::Std_obj::_int((Float(this->_shovelTile) / Float((int)3)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(100)
				int _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(100)
				this->_shovelY = _g8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,shovelHandler,(void))

Void Grid_obj::shovelMoveHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","shovelMoveHandler",0x9e49e3b0,"com.nog.game.view.Grid.shovelMoveHandler","com/nog/game/view/Grid.hx",105,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(106)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		bool _g1 = ::Std_obj::is(_g,hx::ClassOf< ::com::nog::game::view::Tile >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		if (((_g1 == true))){
			HX_STACK_LINE(107)
			::com::nog::game::view::SmallGrid grid = e->get_target()->__Field(HX_CSTRING("parent"),true)->__Field(HX_CSTRING("parent"),true);		HX_STACK_VAR(grid,"grid");
			HX_STACK_LINE(108)
			int gridIndex = this->_smallGridsContainer->getChildIndex(grid);		HX_STACK_VAR(gridIndex,"gridIndex");
			HX_STACK_LINE(109)
			Dynamic _g2 = e->get_target();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(109)
			int tileIndex = grid->getTileNum(_g2);		HX_STACK_VAR(tileIndex,"tileIndex");
			HX_STACK_LINE(111)
			int shovelNewX = ((hx::Mod(gridIndex,(int)3) * (int)3) + hx::Mod(tileIndex,(int)3));		HX_STACK_VAR(shovelNewX,"shovelNewX");
			HX_STACK_LINE(112)
			int _g3 = ::Std_obj::_int((Float(gridIndex) / Float((int)3)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(112)
			int _g4 = (_g3 * (int)3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(112)
			int _g5 = ::Std_obj::_int((Float(tileIndex) / Float((int)3)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(112)
			int shovelNewY = (_g4 + _g5);		HX_STACK_VAR(shovelNewY,"shovelNewY");
			HX_STACK_LINE(114)
			this->_shovelLine = (int)-1;
			HX_STACK_LINE(116)
			if (((this->_shovelX == shovelNewX))){
				HX_STACK_LINE(117)
				if (((this->_shovelY != shovelNewY))){
					HX_STACK_LINE(118)
					this->_shovelLine = ((int)9 + this->_shovelX);
				}
			}
			else{
				HX_STACK_LINE(121)
				if (((this->_shovelY == shovelNewY))){
					HX_STACK_LINE(122)
					this->_shovelLine = this->_shovelY;
				}
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(126)
				Array< ::Dynamic > _g11 = this->_smallGrids;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(126)
				while((true)){
					HX_STACK_LINE(126)
					if ((!(((_g6 < _g11->length))))){
						HX_STACK_LINE(126)
						break;
					}
					HX_STACK_LINE(126)
					::com::nog::game::view::SmallGrid s = _g11->__get(_g6).StaticCast< ::com::nog::game::view::SmallGrid >();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(126)
					++(_g6);
					HX_STACK_LINE(127)
					s->shovelLightOff();
				}
			}
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				int _g6 = this->_shovelLine;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(130)
				switch( (int)(_g6)){
					case (int)0: case (int)1: case (int)2: {
						HX_STACK_LINE(132)
						this->_smallGrids->__get((int)0).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(133)
						this->_smallGrids->__get((int)1).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(134)
						this->_smallGrids->__get((int)2).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
					case (int)3: case (int)4: case (int)5: {
						HX_STACK_LINE(136)
						this->_smallGrids->__get((int)3).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(137)
						this->_smallGrids->__get((int)4).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(138)
						this->_smallGrids->__get((int)5).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
					case (int)6: case (int)7: case (int)8: {
						HX_STACK_LINE(140)
						this->_smallGrids->__get((int)6).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(141)
						this->_smallGrids->__get((int)7).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(142)
						this->_smallGrids->__get((int)8).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
					case (int)9: case (int)10: case (int)11: {
						HX_STACK_LINE(144)
						this->_smallGrids->__get((int)0).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(145)
						this->_smallGrids->__get((int)3).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(146)
						this->_smallGrids->__get((int)6).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
					case (int)12: case (int)13: case (int)14: {
						HX_STACK_LINE(148)
						this->_smallGrids->__get((int)1).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(149)
						this->_smallGrids->__get((int)4).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(150)
						this->_smallGrids->__get((int)7).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
					case (int)15: case (int)16: case (int)17: {
						HX_STACK_LINE(152)
						this->_smallGrids->__get((int)2).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(153)
						this->_smallGrids->__get((int)5).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
						HX_STACK_LINE(154)
						this->_smallGrids->__get((int)8).StaticCast< ::com::nog::game::view::SmallGrid >()->shovelLight(this->_shovelLine);
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,shovelMoveHandler,(void))

Void Grid_obj::shovelUpHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","shovelUpHandler",0xe4fe41e6,"com.nog.game.view.Grid.shovelUpHandler","com/nog/game/view/Grid.hx",159,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(160)
		this->get_stage()->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shovelUpHandler_dyn(),null());
		HX_STACK_LINE(161)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_MOVE,this->shovelMoveHandler_dyn(),null());
		HX_STACK_LINE(162)
		this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->shovelHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			Array< ::Dynamic > _g1 = this->_smallGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				::com::nog::game::view::SmallGrid s = _g1->__get(_g).StaticCast< ::com::nog::game::view::SmallGrid >();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(164)
				++(_g);
				HX_STACK_LINE(165)
				s->shovelLightOff();
			}
		}
		HX_STACK_LINE(168)
		this->_model->shovel(this->_shovelLine,this->_shovelTile);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,shovelUpHandler,(void))

Void Grid_obj::tntHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","tntHandler",0x97b3cb56,"com.nog.game.view.Grid.tntHandler","com/nog/game/view/Grid.hx",171,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(172)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		bool _g1 = ::Std_obj::is(_g,hx::ClassOf< ::com::nog::game::view::Tile >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		if (((_g1 == true))){
			HX_STACK_LINE(173)
			::com::nog::game::view::Tile tile = e->get_target();		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(174)
			::com::nog::game::view::SmallGrid grid = e->get_target()->__Field(HX_CSTRING("parent"),true)->__Field(HX_CSTRING("parent"),true);		HX_STACK_VAR(grid,"grid");
			HX_STACK_LINE(175)
			int _g2 = this->_smallGridsContainer->getChildIndex(grid);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(175)
			int _g3 = grid->getTileNum(tile);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(175)
			this->_model->tnt(_g2,_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,tntHandler,(void))

Void Grid_obj::play( ){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","play",0xdedf3b9a,"com.nog.game.view.Grid.play","com/nog/game/view/Grid.hx",183,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		this->powerOff();
		HX_STACK_LINE(185)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null());
		HX_STACK_LINE(186)
		Array< int > playedTiles = this->_model->getPlayedTiles();		HX_STACK_VAR(playedTiles,"playedTiles");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			if ((!(((playedTiles->length > (int)0))))){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(190)
			int _g = this->_model->getData(playedTiles->__get((int)0),playedTiles->__get((int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			this->_smallGrids->__get(playedTiles->__get((int)0)).StaticCast< ::com::nog::game::view::SmallGrid >()->changeTile(playedTiles->__get((int)1),_g);
			HX_STACK_LINE(191)
			playedTiles->splice((int)0,(int)2);
		}
		HX_STACK_LINE(195)
		this->_model->checkGrid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,play,(void))

Void Grid_obj::dig( ){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","dig",0xc1d3265c,"com.nog.game.view.Grid.dig","com/nog/game/view/Grid.hx",198,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->shovelHandler_dyn(),null());
		HX_STACK_LINE(200)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null());
		HX_STACK_LINE(201)
		Array< int > playedTiles = this->_model->getPlayedTiles();		HX_STACK_VAR(playedTiles,"playedTiles");
		HX_STACK_LINE(206)
		while((true)){
			HX_STACK_LINE(206)
			if ((!(((playedTiles->length > (int)0))))){
				HX_STACK_LINE(206)
				break;
			}
			HX_STACK_LINE(208)
			int _g = this->_model->getData(playedTiles->__get((int)0),playedTiles->__get((int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			this->_smallGrids->__get(playedTiles->__get((int)0)).StaticCast< ::com::nog::game::view::SmallGrid >()->changeTile(playedTiles->__get((int)1),_g);
			HX_STACK_LINE(209)
			playedTiles->splice((int)0,(int)2);
		}
		HX_STACK_LINE(216)
		::openfl::_v2::events::Event _g1 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("dug"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,dig,(void))

Void Grid_obj::selected( bool cpu){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","selected",0x36810301,"com.nog.game.view.Grid.selected","com/nog/game/view/Grid.hx",219,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cpu,"cpu")
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(220)
			int _g = this->_smallGrids->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(220)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(221)
				int _g2 = this->_model->getPlayGrid();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(221)
				bool _g11 = (i == _g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(221)
				this->_smallGrids->__get(i).StaticCast< ::com::nog::game::view::SmallGrid >()->activate(_g11);
			}
		}
		HX_STACK_LINE(223)
		if (((cpu == false))){
			HX_STACK_LINE(224)
			this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,selected,(void))

Void Grid_obj::winGrid( ){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","winGrid",0x2766671c,"com.nog.game.view.Grid.winGrid","com/nog/game/view/Grid.hx",228,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		int _g = this->_model->getLastPlay();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Float _g1 = (Float(_g) / Float((int)9));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		int grid = ::Std_obj::_int(_g1);		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(231)
		int _g2 = this->_model->getWinner(grid);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(231)
		this->_smallGrids->__get(grid).StaticCast< ::com::nog::game::view::SmallGrid >()->winChange(_g2);
		HX_STACK_LINE(233)
		this->_model->checkBoard();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,winGrid,(void))

Void Grid_obj::powerOn( int player,int power){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","powerOn",0xace3da9e,"com.nog.game.view.Grid.powerOn","com/nog/game/view/Grid.hx",236,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(power,"power")
		HX_STACK_LINE(237)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null());
		HX_STACK_LINE(238)
		switch( (int)(power)){
			case (int)1: {
				HX_STACK_LINE(240)
				this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->shovelHandler_dyn(),null(),null(),null());
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(242)
				this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->tntHandler_dyn(),null(),null(),null());
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,powerOn,(void))

Void Grid_obj::powerOff( ){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","powerOff",0x9a7b6910,"com.nog.game.view.Grid.powerOff","com/nog/game/view/Grid.hx",246,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->shovelHandler_dyn(),null());
		HX_STACK_LINE(248)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_MOVE,this->shovelMoveHandler_dyn(),null());
		HX_STACK_LINE(249)
		this->_smallGridsContainer->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->tntHandler_dyn(),null());
		HX_STACK_LINE(250)
		this->get_stage()->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shovelUpHandler_dyn(),null());
		HX_STACK_LINE(251)
		this->_smallGridsContainer->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->clickHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,powerOff,(void))

Void Grid_obj::dispose( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.view.Grid","dispose",0x0d66feb9,"com.nog.game.view.Grid.dispose","com/nog/game/view/Grid.hx",261,0x110fbc14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(262)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->dispose_dyn(),null());
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(264)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(264)
				break;
			}
			HX_STACK_LINE(264)
			this->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,dispose,(void))

::String Grid_obj::PLAY;

::String Grid_obj::DUG;


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_model,"_model");
	HX_MARK_MEMBER_NAME(_gridBackground,"_gridBackground");
	HX_MARK_MEMBER_NAME(_smallGrids,"_smallGrids");
	HX_MARK_MEMBER_NAME(_smallGridsContainer,"_smallGridsContainer");
	HX_MARK_MEMBER_NAME(_shovelX,"_shovelX");
	HX_MARK_MEMBER_NAME(_shovelY,"_shovelY");
	HX_MARK_MEMBER_NAME(_shovelTile,"_shovelTile");
	HX_MARK_MEMBER_NAME(_shovelLine,"_shovelLine");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_model,"_model");
	HX_VISIT_MEMBER_NAME(_gridBackground,"_gridBackground");
	HX_VISIT_MEMBER_NAME(_smallGrids,"_smallGrids");
	HX_VISIT_MEMBER_NAME(_smallGridsContainer,"_smallGridsContainer");
	HX_VISIT_MEMBER_NAME(_shovelX,"_shovelX");
	HX_VISIT_MEMBER_NAME(_shovelY,"_shovelY");
	HX_VISIT_MEMBER_NAME(_shovelTile,"_shovelTile");
	HX_VISIT_MEMBER_NAME(_shovelLine,"_shovelLine");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dig") ) { return dig_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { return _model; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winGrid") ) { return winGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"powerOn") ) { return powerOn_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_shovelX") ) { return _shovelX; }
		if (HX_FIELD_EQ(inName,"_shovelY") ) { return _shovelY; }
		if (HX_FIELD_EQ(inName,"selected") ) { return selected_dyn(); }
		if (HX_FIELD_EQ(inName,"powerOff") ) { return powerOff_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tntHandler") ) { return tntHandler_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_smallGrids") ) { return _smallGrids; }
		if (HX_FIELD_EQ(inName,"_shovelTile") ) { return _shovelTile; }
		if (HX_FIELD_EQ(inName,"_shovelLine") ) { return _shovelLine; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickHandler") ) { return clickHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shovelHandler") ) { return shovelHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_gridBackground") ) { return _gridBackground; }
		if (HX_FIELD_EQ(inName,"shovelUpHandler") ) { return shovelUpHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shovelMoveHandler") ) { return shovelMoveHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_smallGridsContainer") ) { return _smallGridsContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { _model=inValue.Cast< ::com::nog::game::model::GameCore >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_shovelX") ) { _shovelX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shovelY") ) { _shovelY=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_smallGrids") ) { _smallGrids=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shovelTile") ) { _shovelTile=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shovelLine") ) { _shovelLine=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_gridBackground") ) { _gridBackground=inValue.Cast< ::openfl::_v2::display::Shape >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_smallGridsContainer") ) { _smallGridsContainer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_model"));
	outFields->push(HX_CSTRING("_gridBackground"));
	outFields->push(HX_CSTRING("_smallGrids"));
	outFields->push(HX_CSTRING("_smallGridsContainer"));
	outFields->push(HX_CSTRING("_shovelX"));
	outFields->push(HX_CSTRING("_shovelY"));
	outFields->push(HX_CSTRING("_shovelTile"));
	outFields->push(HX_CSTRING("_shovelLine"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PLAY"),
	HX_CSTRING("DUG"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::nog::game::model::GameCore*/ ,(int)offsetof(Grid_obj,_model),HX_CSTRING("_model")},
	{hx::fsObject /*::openfl::_v2::display::Shape*/ ,(int)offsetof(Grid_obj,_gridBackground),HX_CSTRING("_gridBackground")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Grid_obj,_smallGrids),HX_CSTRING("_smallGrids")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Grid_obj,_smallGridsContainer),HX_CSTRING("_smallGridsContainer")},
	{hx::fsInt,(int)offsetof(Grid_obj,_shovelX),HX_CSTRING("_shovelX")},
	{hx::fsInt,(int)offsetof(Grid_obj,_shovelY),HX_CSTRING("_shovelY")},
	{hx::fsInt,(int)offsetof(Grid_obj,_shovelTile),HX_CSTRING("_shovelTile")},
	{hx::fsInt,(int)offsetof(Grid_obj,_shovelLine),HX_CSTRING("_shovelLine")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_model"),
	HX_CSTRING("_gridBackground"),
	HX_CSTRING("_smallGrids"),
	HX_CSTRING("_smallGridsContainer"),
	HX_CSTRING("_shovelX"),
	HX_CSTRING("_shovelY"),
	HX_CSTRING("_shovelTile"),
	HX_CSTRING("_shovelLine"),
	HX_CSTRING("init"),
	HX_CSTRING("clickHandler"),
	HX_CSTRING("shovelHandler"),
	HX_CSTRING("shovelMoveHandler"),
	HX_CSTRING("shovelUpHandler"),
	HX_CSTRING("tntHandler"),
	HX_CSTRING("play"),
	HX_CSTRING("dig"),
	HX_CSTRING("selected"),
	HX_CSTRING("winGrid"),
	HX_CSTRING("powerOn"),
	HX_CSTRING("powerOff"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Grid_obj::PLAY,"PLAY");
	HX_MARK_MEMBER_NAME(Grid_obj::DUG,"DUG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Grid_obj::PLAY,"PLAY");
	HX_VISIT_MEMBER_NAME(Grid_obj::DUG,"DUG");
};

#endif

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.view.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
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

void Grid_obj::__boot()
{
	PLAY= HX_CSTRING("play");
	DUG= HX_CSTRING("dug");
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
