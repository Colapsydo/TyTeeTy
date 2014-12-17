#ifndef INCLUDED_com_nog_game_view_player_PlayerFace
#define INCLUDED_com_nog_game_view_player_PlayerFace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerFace)
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
namespace player{


class HXCPP_CLASS_ATTRIBUTES  PlayerFace_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef PlayerFace_obj OBJ_;
		PlayerFace_obj();
		Void __construct(int type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayerFace_obj > __new(int type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerFace_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerFace"); }

		int _type;
		::String _state;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void changeMood( ::String mood);
		Dynamic changeMood_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static ::String THINKING;
		static ::String HAPPY;
		static ::String NEUTRAL;
		static ::String ANGRY;
		static ::String VICTORY;
		static ::String DEFEAT;
};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player

#endif /* INCLUDED_com_nog_game_view_player_PlayerFace */ 
