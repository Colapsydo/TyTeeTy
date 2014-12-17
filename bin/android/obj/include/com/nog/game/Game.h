#ifndef INCLUDED_com_nog_game_Game
#define INCLUDED_com_nog_game_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(com,nog,game,Game)
HX_DECLARE_CLASS4(com,nog,game,model,GameCore)
HX_DECLARE_CLASS4(com,nog,game,view,GameBoard)
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


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		::com::nog::game::model::GameCore _gameCore;
		::com::nog::game::view::GameBoard _gameBoard;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void newGame( ::openfl::_v2::events::Event e);
		Dynamic newGame_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game

#endif /* INCLUDED_com_nog_game_Game */ 
