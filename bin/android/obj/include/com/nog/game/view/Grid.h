#ifndef INCLUDED_com_nog_game_view_Grid
#define INCLUDED_com_nog_game_view_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,nog,game,model,GameCore)
HX_DECLARE_CLASS4(com,nog,game,view,Grid)
HX_DECLARE_CLASS4(com,nog,game,view,SmallGrid)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Shape)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
namespace com{
namespace nog{
namespace game{
namespace view{


class HXCPP_CLASS_ATTRIBUTES  Grid_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct(::com::nog::game::model::GameCore model);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Grid_obj > __new(::com::nog::game::model::GameCore model);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grid"); }

		::com::nog::game::model::GameCore _model;
		::openfl::_v2::display::Shape _gridBackground;
		Array< ::Dynamic > _smallGrids;
		::openfl::_v2::display::Sprite _smallGridsContainer;
		int _shovelX;
		int _shovelY;
		int _shovelTile;
		int _shovelLine;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void clickHandler( ::openfl::_v2::events::Event e);
		Dynamic clickHandler_dyn();

		virtual Void shovelHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic shovelHandler_dyn();

		virtual Void shovelMoveHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic shovelMoveHandler_dyn();

		virtual Void shovelUpHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic shovelUpHandler_dyn();

		virtual Void tntHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic tntHandler_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void dig( );
		Dynamic dig_dyn();

		virtual Void selected( bool cpu);
		Dynamic selected_dyn();

		virtual Void winGrid( );
		Dynamic winGrid_dyn();

		virtual Void powerOn( int player,int power);
		Dynamic powerOn_dyn();

		virtual Void powerOff( );
		Dynamic powerOff_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static ::String PLAY;
		static ::String DUG;
};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view

#endif /* INCLUDED_com_nog_game_view_Grid */ 
