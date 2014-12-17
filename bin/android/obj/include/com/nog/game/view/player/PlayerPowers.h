#ifndef INCLUDED_com_nog_game_view_player_PlayerPowers
#define INCLUDED_com_nog_game_view_player_PlayerPowers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerPowers)
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
namespace player{


class HXCPP_CLASS_ATTRIBUTES  PlayerPowers_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef PlayerPowers_obj OBJ_;
		PlayerPowers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayerPowers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerPowers_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerPowers"); }

		int _power;
		::openfl::_v2::display::Shape _powerCircle;
		Float _startAngle;
		Float _actualAngle;
		Float _targetAngle;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void drawPowerHandler( ::openfl::_v2::events::Event e);
		Dynamic drawPowerHandler_dyn();

		virtual Void resetPowerHandler( ::openfl::_v2::events::Event e);
		Dynamic resetPowerHandler_dyn();

		virtual Void clickHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic clickHandler_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void addPower( int power);
		Dynamic addPower_dyn();

		virtual Void removePower( );
		Dynamic removePower_dyn();

		virtual Void activate( bool value);
		Dynamic activate_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static Float _twoThirdPi;
		static ::String POWER;
};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player

#endif /* INCLUDED_com_nog_game_view_player_PlayerPowers */ 
