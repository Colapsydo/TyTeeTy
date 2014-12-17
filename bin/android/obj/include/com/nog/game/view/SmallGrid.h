#ifndef INCLUDED_com_nog_game_view_SmallGrid
#define INCLUDED_com_nog_game_view_SmallGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,nog,game,view,SmallGrid)
HX_DECLARE_CLASS4(com,nog,game,view,Tile)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Shape)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace nog{
namespace game{
namespace view{


class HXCPP_CLASS_ATTRIBUTES  SmallGrid_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef SmallGrid_obj OBJ_;
		SmallGrid_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SmallGrid_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SmallGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SmallGrid"); }

		::openfl::_v2::display::Shape _background;
		::openfl::_v2::display::Shape _shovleLight;
		::openfl::_v2::display::Shape _overGrid;
		Array< ::Dynamic > _tiles;
		::openfl::_v2::display::Sprite _tilesContainer;
		bool _activate;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void activate( bool activate);
		Dynamic activate_dyn();

		virtual Void changeTile( int tile,int data);
		Dynamic changeTile_dyn();

		virtual Void winChange( int winner);
		Dynamic winChange_dyn();

		virtual Void shovelLightOff( );
		Dynamic shovelLightOff_dyn();

		virtual Void shovelLight( int shovelLine);
		Dynamic shovelLight_dyn();

		virtual int getTileNum( ::com::nog::game::view::Tile tile);
		Dynamic getTileNum_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static Float _gridWidth;
		static Void setGridWidth( Float gridWidth);
		static Dynamic setGridWidth_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view

#endif /* INCLUDED_com_nog_game_view_SmallGrid */ 
