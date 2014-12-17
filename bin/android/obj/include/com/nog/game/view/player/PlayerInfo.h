#ifndef INCLUDED_com_nog_game_view_player_PlayerInfo
#define INCLUDED_com_nog_game_view_player_PlayerInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerInfo)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
namespace com{
namespace nog{
namespace game{
namespace view{
namespace player{


class HXCPP_CLASS_ATTRIBUTES  PlayerInfo_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef PlayerInfo_obj OBJ_;
		PlayerInfo_obj();
		Void __construct(Float width);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayerInfo_obj > __new(Float width);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerInfo"); }

		Float _width;
		::openfl::_v2::text::TextField _text;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void showPower( int power,int type);
		Dynamic showPower_dyn();

		virtual Void fadeOff( );
		Dynamic fadeOff_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player

#endif /* INCLUDED_com_nog_game_view_player_PlayerInfo */ 
