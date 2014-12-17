#ifndef INCLUDED_com_nog_game_view_Tile
#define INCLUDED_com_nog_game_view_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,nog,game,view,Tile)
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


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tile_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tile"); }

		int _state;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void change( int data);
		Dynamic change_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static Float _tileWidth;
		static Float getTileWidth( );
		static Dynamic getTileWidth_dyn();

		static Void setTileWidth( Float tileWidth);
		static Dynamic setTileWidth_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view

#endif /* INCLUDED_com_nog_game_view_Tile */ 
