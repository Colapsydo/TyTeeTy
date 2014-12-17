#ifndef INCLUDED_com_nog_game_view_GameBoard
#define INCLUDED_com_nog_game_view_GameBoard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,nog,game,model,GameCore)
HX_DECLARE_CLASS4(com,nog,game,view,GameBoard)
HX_DECLARE_CLASS4(com,nog,game,view,Grid)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerGameView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace nog{
namespace game{
namespace view{


class HXCPP_CLASS_ATTRIBUTES  GameBoard_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef GameBoard_obj OBJ_;
		GameBoard_obj();
		Void __construct(::com::nog::game::model::GameCore model);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameBoard_obj > __new(::com::nog::game::model::GameCore model);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameBoard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameBoard"); }

		::com::nog::game::model::GameCore _model;
		::com::nog::game::view::Grid _grid;
		::com::nog::game::view::player::PlayerGameView _player1;
		::com::nog::game::view::player::PlayerGameView _player2;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void dugHandler( ::openfl::_v2::events::Event e);
		Dynamic dugHandler_dyn();

		virtual Void powerOnHandler( ::openfl::_v2::events::Event e);
		Dynamic powerOnHandler_dyn();

		virtual Void powerOffHandler( ::openfl::_v2::events::Event e);
		Dynamic powerOffHandler_dyn();

		virtual Void update( ::openfl::_v2::events::Event e);
		Dynamic update_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view

#endif /* INCLUDED_com_nog_game_view_GameBoard */ 
