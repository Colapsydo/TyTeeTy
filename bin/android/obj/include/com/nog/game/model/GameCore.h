#ifndef INCLUDED_com_nog_game_model_GameCore
#define INCLUDED_com_nog_game_model_GameCore

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS4(com,nog,game,model,GameCore)
HX_DECLARE_CLASS4(com,nog,game,model,GridData)
HX_DECLARE_CLASS4(com,nog,game,model,Player)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,utils,Timer)
namespace com{
namespace nog{
namespace game{
namespace model{


class HXCPP_CLASS_ATTRIBUTES  GameCore_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef GameCore_obj OBJ_;
		GameCore_obj();
		Void __construct(int playerType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameCore_obj > __new(int playerType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameCore_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameCore"); }

		Array< ::Dynamic > _grids;
		int _playersType;
		Array< ::Dynamic > _players;
		Array< int > _playableGrid;
		int _playGrid;
		int _playerTurn;
		::String _state;
		Array< int > _playedTiles;
		int _lastPlay;
		bool _fullGrid;
		bool _draw;
		::openfl::_v2::utils::Timer _cpuTimer;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void cpuTimerHandler( ::openfl::_v2::events::Event e);
		Dynamic cpuTimerHandler_dyn();

		virtual Void cpuPlay( );
		Dynamic cpuPlay_dyn();

		virtual Void startNewTurn( );
		Dynamic startNewTurn_dyn();

		virtual Void play( int grid,int tile);
		Dynamic play_dyn();

		virtual Void checkGrid( );
		Dynamic checkGrid_dyn();

		virtual Void checkBoard( );
		Dynamic checkBoard_dyn();

		virtual bool isPlayerCpu( bool p1);
		Dynamic isPlayerCpu_dyn();

		virtual Void shovel( int shovelLine,int tile);
		Dynamic shovel_dyn();

		virtual Void tnt( int grid,int tile);
		Dynamic tnt_dyn();

		virtual ::com::nog::game::model::Player getPlayer( int index);
		Dynamic getPlayer_dyn();

		virtual ::String getState( );
		Dynamic getState_dyn();

		virtual int getPlayerTurn( );
		Dynamic getPlayerTurn_dyn();

		virtual int getPlayGrid( );
		Dynamic getPlayGrid_dyn();

		virtual int getLastPlay( );
		Dynamic getLastPlay_dyn();

		virtual Array< int > getPlayedTiles( );
		Dynamic getPlayedTiles_dyn();

		virtual bool getFullGrid( );
		Dynamic getFullGrid_dyn();

		virtual int getWinner( int grid);
		Dynamic getWinner_dyn();

		virtual int getData( int grid,int tile);
		Dynamic getData_dyn();

		virtual int getPlayerType( bool p1);
		Dynamic getPlayerType_dyn();

		static int _play;
		static Array< int > _stats;
		static Float _time;
		static ::String THINKINGP1;
		static ::String THINKINGP2;
		static ::String CHOOSINGGRID;
		static ::String DIGGING;
		static ::String EXPLOSION;
		static ::String PLAYINGMOVE;
		static ::String WINNINGGRID;
		static ::String WINNINGGAME;
		static ::String UPDATE;
		static ::String ENDED;
};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model

#endif /* INCLUDED_com_nog_game_model_GameCore */ 
