#ifndef INCLUDED_com_nog_game_view_player_PlayerGameView
#define INCLUDED_com_nog_game_view_player_PlayerGameView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,nog,game,model,Player)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerFace)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerGameView)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerInfo)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerMatter)
HX_DECLARE_CLASS5(com,nog,game,view,player,PlayerPowers)
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


class HXCPP_CLASS_ATTRIBUTES  PlayerGameView_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef PlayerGameView_obj OBJ_;
		PlayerGameView_obj();
		Void __construct(::com::nog::game::model::Player player);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayerGameView_obj > __new(::com::nog::game::model::Player player);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerGameView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerGameView"); }

		::com::nog::game::model::Player _playerData;
		::com::nog::game::view::player::PlayerFace _face;
		::com::nog::game::view::player::PlayerMatter _matter;
		::com::nog::game::view::player::PlayerPowers _power;
		::com::nog::game::view::player::PlayerInfo _info;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void powerPlayHandler( ::openfl::_v2::events::Event e);
		Dynamic powerPlayHandler_dyn();

		virtual Void powerCancelHandler( ::openfl::_v2::events::Event e);
		Dynamic powerCancelHandler_dyn();

		virtual Void thinking( );
		Dynamic thinking_dyn();

		virtual Void waiting( );
		Dynamic waiting_dyn();

		virtual Void addRessources( );
		Dynamic addRessources_dyn();

		virtual Void payConstruct( );
		Dynamic payConstruct_dyn();

		virtual Void checkPower( );
		Dynamic checkPower_dyn();

		virtual Void dispose( ::openfl::_v2::events::Event e);
		Dynamic dispose_dyn();

		static Float _width;
		static ::String POWERON;
		static ::String POWEROFF;
		static Void setWidth( Float width);
		static Dynamic setWidth_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace view
} // end namespace player

#endif /* INCLUDED_com_nog_game_view_player_PlayerGameView */ 
