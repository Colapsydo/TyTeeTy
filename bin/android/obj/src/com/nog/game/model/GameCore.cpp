#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_nog_game_model_GameCore
#include <com/nog/game/model/GameCore.h>
#endif
#ifndef INCLUDED_com_nog_game_model_GridData
#include <com/nog/game/model/GridData.h>
#endif
#ifndef INCLUDED_com_nog_game_model_Player
#include <com/nog/game/model/Player.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Timer
#include <openfl/_v2/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace model{

Void GameCore_obj::__construct(int playerType)
{
HX_STACK_FRAME("com.nog.game.model.GameCore","new",0xe3daa1cf,"com.nog.game.model.GameCore.new","com/nog/game/model/GameCore.hx",52,0x673faf01)
HX_STACK_THIS(this)
HX_STACK_ARG(playerType,"playerType")
{
	HX_STACK_LINE(53)
	super::__construct(null());
	HX_STACK_LINE(55)
	this->_playersType = playerType;
	HX_STACK_LINE(57)
	this->init();
}
;
	return null();
}

//GameCore_obj::~GameCore_obj() { }

Dynamic GameCore_obj::__CreateEmpty() { return  new GameCore_obj; }
hx::ObjectPtr< GameCore_obj > GameCore_obj::__new(int playerType)
{  hx::ObjectPtr< GameCore_obj > result = new GameCore_obj();
	result->__construct(playerType);
	return result;}

Dynamic GameCore_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameCore_obj > result = new GameCore_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameCore_obj::init( ){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","init",0x782baac1,"com.nog.game.model.GameCore.init","com/nog/game/model/GameCore.hx",60,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		if (((::com::nog::game::model::GameCore_obj::_stats == null()))){
			HX_STACK_LINE(62)
			::com::nog::game::model::GameCore_obj::_play = (int)0;
			HX_STACK_LINE(63)
			Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Array< int > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",63,0x673faf01)
					{
						HX_STACK_LINE(63)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< int > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",63,0x673faf01)
								{
									HX_STACK_LINE(63)
									Array< int > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(63)
									Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(63)
									this2 = _g;
									HX_STACK_LINE(63)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(63)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(63)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(63)
			_g1 = _Function_2_1::Block();
			HX_STACK_LINE(63)
			::com::nog::game::model::GameCore_obj::_stats = _g1;
			HX_STACK_LINE(65)
			Float _g2 = ::Date_obj::now()->getTime();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(65)
			::com::nog::game::model::GameCore_obj::_time = _g2;
		}
		HX_STACK_LINE(68)
		Array< int > _g4;		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",68,0x673faf01)
				{
					HX_STACK_LINE(68)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(68)
					Array< int > _g3 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(68)
					this1 = _g3;
					HX_STACK_LINE(68)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		_g4 = _Function_1_1::Block();
		HX_STACK_LINE(68)
		this->_playableGrid = _g4;
		HX_STACK_LINE(69)
		Array< ::Dynamic > _g6;		HX_STACK_VAR(_g6,"_g6");
		struct _Function_1_2{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",69,0x673faf01)
				{
					HX_STACK_LINE(69)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(69)
					Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(69)
					this1 = _g5;
					HX_STACK_LINE(69)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(69)
		_g6 = _Function_1_2::Block();
		HX_STACK_LINE(69)
		this->_grids = _g6;
		HX_STACK_LINE(70)
		::com::nog::game::model::GridData grid;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				if ((!(((_g < (int)9))))){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(72)
				::com::nog::game::model::GridData _g7 = ::com::nog::game::model::GridData_obj::__new();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(72)
				grid = _g7;
				HX_STACK_LINE(73)
				this->_grids->push(grid);
				HX_STACK_LINE(74)
				this->_playableGrid->push(i);
			}
		}
		HX_STACK_LINE(76)
		::com::nog::game::model::GridData _g8 = ::com::nog::game::model::GridData_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(76)
		grid = _g8;
		HX_STACK_LINE(77)
		grid->removeDirt();
		HX_STACK_LINE(78)
		this->_grids->push(grid);
		HX_STACK_LINE(82)
		Array< ::Dynamic > _g10;		HX_STACK_VAR(_g10,"_g10");
		struct _Function_1_3{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",82,0x673faf01)
				{
					HX_STACK_LINE(82)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(82)
					Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(82)
					this1 = _g9;
					HX_STACK_LINE(82)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		_g10 = _Function_1_3::Block();
		HX_STACK_LINE(82)
		this->_players = _g10;
		HX_STACK_LINE(83)
		::com::nog::game::model::Player player;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(83)
		if (((this->_playersType < (int)2))){
			HX_STACK_LINE(83)
			player = ::com::nog::game::model::Player_obj::__new((int)0,true,false,this->_grids);
		}
		else{
			HX_STACK_LINE(83)
			player = ::com::nog::game::model::Player_obj::__new((int)0,true,true,this->_grids);
		}
		HX_STACK_LINE(84)
		this->_players->push(player);
		HX_STACK_LINE(85)
		::com::nog::game::model::Player _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(85)
		if (((this->_playersType == (int)1))){
			HX_STACK_LINE(85)
			_g11 = ::com::nog::game::model::Player_obj::__new((int)1,false,false,this->_grids);
		}
		else{
			HX_STACK_LINE(85)
			_g11 = ::com::nog::game::model::Player_obj::__new((int)1,false,true,this->_grids);
		}
		HX_STACK_LINE(85)
		player = _g11;
		HX_STACK_LINE(86)
		this->_players->push(player);
		HX_STACK_LINE(88)
		this->_playerTurn = (int)0;
		HX_STACK_LINE(89)
		this->_state = HX_CSTRING("thinkingp1");
		HX_STACK_LINE(90)
		Dynamic _g14;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Float _g12 = ::Math_obj::random();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(90)
			Float _g13 = (_g12 * this->_playableGrid->length);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(90)
			int index = ::Std_obj::_int(_g13);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(90)
			_g14 = this->_playableGrid->__get(index);
		}
		HX_STACK_LINE(90)
		this->_playGrid = _g14;
		HX_STACK_LINE(93)
		::openfl::_v2::utils::Timer _g15 = ::openfl::_v2::utils::Timer_obj::__new((int)30,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(93)
		this->_cpuTimer = _g15;
		HX_STACK_LINE(94)
		this->cpuPlay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,init,(void))

Void GameCore_obj::cpuTimerHandler( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","cpuTimerHandler",0x362a6fbc,"com.nog.game.model.GameCore.cpuTimerHandler","com/nog/game/model/GameCore.hx",99,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(100)
		this->_cpuTimer->stop();
		HX_STACK_LINE(101)
		this->_cpuTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->cpuTimerHandler_dyn(),null());
		HX_STACK_LINE(102)
		int _g = this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->getChoosenTile();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->play(this->_playGrid,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameCore_obj,cpuTimerHandler,(void))

Void GameCore_obj::cpuPlay( ){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","cpuPlay",0x3718442b,"com.nog.game.model.GameCore.cpuPlay","com/nog/game/model/GameCore.hx",107,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		bool _g = this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->getCPU();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		if (((_g == true))){
			HX_STACK_LINE(109)
			this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->play(this->_playGrid);
			HX_STACK_LINE(110)
			this->_cpuTimer->reset();
			HX_STACK_LINE(111)
			this->_cpuTimer->start();
			HX_STACK_LINE(112)
			this->_cpuTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->cpuTimerHandler_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,cpuPlay,(void))

Void GameCore_obj::startNewTurn( ){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","startNewTurn",0x165f846c,"com.nog.game.model.GameCore.startNewTurn","com/nog/game/model/GameCore.hx",116,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		bool _g = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getDirtToDig();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::nog::game::model::GameCore_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",117,0x673faf01)
				{
					HX_STACK_LINE(117)
					int _g1 = __this->_players->__get(__this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->getMatter();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(117)
					return (_g1 == (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		if (((  (((_g == false))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(118)
			::haxe::Log_obj::trace(HX_CSTRING("You can't play, you don't have any matter"),hx::SourceInfo(HX_CSTRING("GameCore.hx"),118,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("startNewTurn")));
		}
		else{
			HX_STACK_LINE(120)
			if (((this->_playerTurn == (int)0))){
				HX_STACK_LINE(120)
				this->_state = HX_CSTRING("thinkingp1");
			}
			else{
				HX_STACK_LINE(120)
				this->_state = HX_CSTRING("thinkingp2");
			}
			HX_STACK_LINE(121)
			this->cpuPlay();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,startNewTurn,(void))

Void GameCore_obj::play( int grid,int tile){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","play",0x7cca9da5,"com.nog.game.model.GameCore.play","com/nog/game/model/GameCore.hx",127,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grid,"grid")
		HX_STACK_ARG(tile,"tile")
		HX_STACK_LINE(128)
		if (((grid != this->_playGrid))){
			HX_STACK_LINE(129)
			return null();
		}
		HX_STACK_LINE(132)
		int tileType = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getData(tile);		HX_STACK_VAR(tileType,"tileType");
		HX_STACK_LINE(133)
		if (((tileType < (int)1))){
			HX_STACK_LINE(134)
			if (((tileType == (int)-1))){
				HX_STACK_LINE(135)
				this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->play(tile,(this->_playerTurn + (int)1));
				HX_STACK_LINE(136)
				this->_state = HX_CSTRING("digging");
			}
			else{
				HX_STACK_LINE(138)
				int _g = this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->getMatter();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(138)
				if (((_g > (int)0))){
					HX_STACK_LINE(139)
					this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->play(tile,(this->_playerTurn + (int)1));
					HX_STACK_LINE(140)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->payConstruction();
					HX_STACK_LINE(141)
					int _g1 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(141)
					if (((_g1 != (int)0))){
						HX_STACK_LINE(142)
						this->_fullGrid = true;
						HX_STACK_LINE(143)
						int _g2 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(143)
						if (((_g2 < (int)3))){
							HX_STACK_LINE(144)
							int _g3 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(144)
							this->_grids->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->play(this->_playGrid,_g3);
							HX_STACK_LINE(145)
							{
								HX_STACK_LINE(145)
								int pos = this->_playableGrid->lastIndexOf(this->_playGrid,null());		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(145)
								this->_playableGrid->splice(pos,(int)1);
							}
						}
					}
					HX_STACK_LINE(148)
					this->_state = HX_CSTRING("playingmove");
				}
				else{
					HX_STACK_LINE(150)
					::haxe::Log_obj::trace(HX_CSTRING("need matter"),hx::SourceInfo(HX_CSTRING("GameCore.hx"),150,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("play")));
					HX_STACK_LINE(151)
					return null();
				}
			}
			HX_STACK_LINE(154)
			int _g4 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(154)
			int _g5 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(154)
			this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g4,_g5);
			HX_STACK_LINE(157)
			this->_playerTurn = hx::Mod(((this->_playerTurn + (int)1)),(int)2);
			HX_STACK_LINE(158)
			Array< int > _g7;		HX_STACK_VAR(_g7,"_g7");
			struct _Function_2_1{
				inline static Array< int > Block( hx::ObjectPtr< ::com::nog::game::model::GameCore_obj > __this,int &tile){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",158,0x673faf01)
					{
						HX_STACK_LINE(158)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< int > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",158,0x673faf01)
								{
									HX_STACK_LINE(158)
									Array< int > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(158)
									Array< int > _g6 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(158)
									this2 = _g6;
									HX_STACK_LINE(158)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(158)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(158)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add(__this->_playGrid).Add(tile)));
					}
					return null();
				}
			};
			HX_STACK_LINE(158)
			_g7 = _Function_2_1::Block(this,tile);
			HX_STACK_LINE(158)
			this->_playedTiles = _g7;
			HX_STACK_LINE(159)
			this->_lastPlay = ((this->_playGrid * (int)9) + tile);
			HX_STACK_LINE(160)
			this->_playGrid = tile;
			HX_STACK_LINE(161)
			int _g8 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(161)
			if (((_g8 != (int)0))){
				HX_STACK_LINE(162)
				if (((this->_playableGrid->length > (int)0))){
					HX_STACK_LINE(164)
					Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						Float _g9 = ::Math_obj::random();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(164)
						Float _g10 = (_g9 * this->_playableGrid->length);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(164)
						int index = ::Std_obj::_int(_g10);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(164)
						_g11 = this->_playableGrid->__get(index);
					}
					HX_STACK_LINE(164)
					this->_playGrid = _g11;
				}
			}
			HX_STACK_LINE(167)
			::openfl::_v2::events::Event _g12 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("update"),null(),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(167)
			this->dispatchEvent(_g12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameCore_obj,play,(void))

Void GameCore_obj::checkGrid( ){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","checkGrid",0xf213ae5d,"com.nog.game.model.GameCore.checkGrid","com/nog/game/model/GameCore.hx",171,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		if (((this->_fullGrid == true))){
			HX_STACK_LINE(173)
			this->_state = HX_CSTRING("winninggrid");
			HX_STACK_LINE(174)
			this->_fullGrid = false;
		}
		else{
			HX_STACK_LINE(176)
			this->startNewTurn();
		}
		HX_STACK_LINE(178)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("update"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,checkGrid,(void))

Void GameCore_obj::checkBoard( ){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","checkBoard",0xfc22532f,"com.nog.game.model.GameCore.checkBoard","com/nog/game/model/GameCore.hx",181,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		int grid = ::Std_obj::_int((Float(this->_lastPlay) / Float((int)9)));		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(184)
		int _g = this->_grids->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		if (((_g == (int)3))){
			HX_STACK_LINE(185)
			int _g1 = this->_grids->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getTileToPlayNum();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			if (((_g1 == (int)1))){
				HX_STACK_LINE(186)
				Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(186)
				Float _g3 = (_g2 * (int)2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(186)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(186)
				int _g5 = ((int)1 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(186)
				this->_grids->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->play(grid,_g5);
			}
			else{
				HX_STACK_LINE(188)
				this->_grids->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->reset();
			}
		}
		HX_STACK_LINE(193)
		int _g6 = this->_grids->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(193)
		if (((_g6 != (int)0))){
			HX_STACK_LINE(194)
			(::com::nog::game::model::GameCore_obj::_play)++;
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				int _g1 = this->_grids->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(195)
				::com::nog::game::model::GameCore_obj::_stats[_g1] = (::com::nog::game::model::GameCore_obj::_stats->__get(_g1) + (int)1);
			}
			HX_STACK_LINE(196)
			if (((::com::nog::game::model::GameCore_obj::_play < (int)1000))){
			}
			else{
				HX_STACK_LINE(199)
				::haxe::Log_obj::trace(HX_CSTRING(""),hx::SourceInfo(HX_CSTRING("GameCore.hx"),199,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("checkBoard")));
				HX_STACK_LINE(200)
				::com::nog::game::model::Player_obj::readFactors();
				HX_STACK_LINE(201)
				::String _g7 = ::com::nog::game::model::GameCore_obj::_stats->toString();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(201)
				::haxe::Log_obj::trace(_g7,hx::SourceInfo(HX_CSTRING("GameCore.hx"),201,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("checkBoard")));
				HX_STACK_LINE(202)
				{
					HX_STACK_LINE(202)
					int value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(202)
					{
						HX_STACK_LINE(202)
						int value1;		HX_STACK_VAR(value1,"value1");
						HX_STACK_LINE(202)
						{
							HX_STACK_LINE(202)
							int value2 = ::com::nog::game::model::GameCore_obj::_play = (int)0;		HX_STACK_VAR(value2,"value2");
							HX_STACK_LINE(202)
							value1 = ::com::nog::game::model::GameCore_obj::_stats[(int)3] = value2;
						}
						HX_STACK_LINE(202)
						value = ::com::nog::game::model::GameCore_obj::_stats[(int)2] = value1;
					}
					HX_STACK_LINE(202)
					::com::nog::game::model::GameCore_obj::_stats[(int)1] = value;
				}
				HX_STACK_LINE(203)
				::com::nog::game::model::Player_obj::factorUpdate();
				HX_STACK_LINE(204)
				Float _g8 = ::Date_obj::now()->getTime();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(204)
				Float _g9 = (_g8 - ::com::nog::game::model::GameCore_obj::_time);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(204)
				Float _g10 = (Float(_g9) / Float((int)60000));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(204)
				::haxe::Log_obj::trace(_g10,hx::SourceInfo(HX_CSTRING("GameCore.hx"),204,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("checkBoard")));
			}
		}
		else{
			HX_STACK_LINE(208)
			this->startNewTurn();
			HX_STACK_LINE(209)
			::openfl::_v2::events::Event _g11 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("update"),null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(209)
			this->dispatchEvent(_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,checkBoard,(void))

bool GameCore_obj::isPlayerCpu( bool p1){
	HX_STACK_FRAME("com.nog.game.model.GameCore","isPlayerCpu",0x4629ef6c,"com.nog.game.model.GameCore.isPlayerCpu","com/nog/game/model/GameCore.hx",214,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(214)
	if (((p1 == true))){
		HX_STACK_LINE(215)
		return this->_players->__get((int)0).StaticCast< ::com::nog::game::model::Player >()->getCPU();
	}
	else{
		HX_STACK_LINE(217)
		return this->_players->__get((int)1).StaticCast< ::com::nog::game::model::Player >()->getCPU();
	}
	HX_STACK_LINE(214)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GameCore_obj,isPlayerCpu,return )

Void GameCore_obj::shovel( int shovelLine,int tile){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","shovel",0x299fe254,"com.nog.game.model.GameCore.shovel","com/nog/game/model/GameCore.hx",224,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shovelLine,"shovelLine")
		HX_STACK_ARG(tile,"tile")
		HX_STACK_LINE(224)
		if (((shovelLine > (int)-1))){
			HX_STACK_LINE(225)
			Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Array< int > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",225,0x673faf01)
					{
						HX_STACK_LINE(225)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(225)
						Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(225)
						this1 = _g;
						HX_STACK_LINE(225)
						return this1;
					}
					return null();
				}
			};
			HX_STACK_LINE(225)
			_g1 = _Function_2_1::Block();
			HX_STACK_LINE(225)
			this->_playedTiles = _g1;
			HX_STACK_LINE(226)
			switch( (int)(shovelLine)){
				case (int)0: case (int)1: case (int)2: {
					HX_STACK_LINE(228)
					Array< int > _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						Array< int > a = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)0,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(228)
						_g2 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(228)
					this->_playedTiles = _g2;
					HX_STACK_LINE(229)
					Array< int > _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						Array< int > a = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)1,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(229)
						_g3 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(229)
					this->_playedTiles = _g3;
					HX_STACK_LINE(230)
					Array< int > _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						Array< int > a = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)2,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(230)
						_g4 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(230)
					this->_playedTiles = _g4;
					HX_STACK_LINE(231)
					int _g5 = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(231)
					int _g6 = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(231)
					int _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(231)
					int _g8 = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(231)
					int _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(231)
					int _g10 = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(231)
					int _g11 = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(231)
					int _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(231)
					int _g13 = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(231)
					int _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(231)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g9,_g14);
				}
				;break;
				case (int)3: case (int)4: case (int)5: {
					HX_STACK_LINE(233)
					Array< int > _g15;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Array< int > a = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)3,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(233)
						_g15 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(233)
					this->_playedTiles = _g15;
					HX_STACK_LINE(234)
					Array< int > _g16;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						Array< int > a = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)4,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(234)
						_g16 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(234)
					this->_playedTiles = _g16;
					HX_STACK_LINE(235)
					Array< int > _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						Array< int > a = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)5,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(235)
						_g17 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(235)
					this->_playedTiles = _g17;
					HX_STACK_LINE(236)
					int _g18 = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(236)
					int _g19 = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(236)
					int _g20 = (_g18 + _g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(236)
					int _g21 = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(236)
					int _g22 = (_g20 + _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(236)
					int _g23 = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(236)
					int _g24 = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(236)
					int _g25 = (_g23 + _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(236)
					int _g26 = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(236)
					int _g27 = (_g25 + _g26);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(236)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g22,_g27);
				}
				;break;
				case (int)6: case (int)7: case (int)8: {
					HX_STACK_LINE(238)
					Array< int > _g28;		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Array< int > a = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)6,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(238)
						_g28 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(238)
					this->_playedTiles = _g28;
					HX_STACK_LINE(239)
					Array< int > _g29;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						Array< int > a = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)7,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(239)
						_g29 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(239)
					this->_playedTiles = _g29;
					HX_STACK_LINE(240)
					Array< int > _g30;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						Array< int > a = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)8,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(240)
						_g30 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(240)
					this->_playedTiles = _g30;
					HX_STACK_LINE(241)
					int _g31 = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(241)
					int _g32 = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(241)
					int _g33 = (_g31 + _g32);		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(241)
					int _g34 = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(241)
					int _g35 = (_g33 + _g34);		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(241)
					int _g36 = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(241)
					int _g37 = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(241)
					int _g38 = (_g36 + _g37);		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(241)
					int _g39 = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(241)
					int _g40 = (_g38 + _g39);		HX_STACK_VAR(_g40,"_g40");
					HX_STACK_LINE(241)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g35,_g40);
				}
				;break;
				case (int)9: case (int)10: case (int)11: {
					HX_STACK_LINE(243)
					Array< int > _g41;		HX_STACK_VAR(_g41,"_g41");
					HX_STACK_LINE(243)
					{
						HX_STACK_LINE(243)
						Array< int > a = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)0,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(243)
						_g41 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(243)
					this->_playedTiles = _g41;
					HX_STACK_LINE(244)
					Array< int > _g42;		HX_STACK_VAR(_g42,"_g42");
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(244)
						Array< int > a = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)3,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(244)
						_g42 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(244)
					this->_playedTiles = _g42;
					HX_STACK_LINE(245)
					Array< int > _g43;		HX_STACK_VAR(_g43,"_g43");
					HX_STACK_LINE(245)
					{
						HX_STACK_LINE(245)
						Array< int > a = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)6,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(245)
						_g43 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(245)
					this->_playedTiles = _g43;
					HX_STACK_LINE(246)
					int _g44 = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g44,"_g44");
					HX_STACK_LINE(246)
					int _g45 = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g45,"_g45");
					HX_STACK_LINE(246)
					int _g46 = (_g44 + _g45);		HX_STACK_VAR(_g46,"_g46");
					HX_STACK_LINE(246)
					int _g47 = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g47,"_g47");
					HX_STACK_LINE(246)
					int _g48 = (_g46 + _g47);		HX_STACK_VAR(_g48,"_g48");
					HX_STACK_LINE(246)
					int _g49 = this->_grids->__get((int)0).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g49,"_g49");
					HX_STACK_LINE(246)
					int _g50 = this->_grids->__get((int)3).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g50,"_g50");
					HX_STACK_LINE(246)
					int _g51 = (_g49 + _g50);		HX_STACK_VAR(_g51,"_g51");
					HX_STACK_LINE(246)
					int _g52 = this->_grids->__get((int)6).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g52,"_g52");
					HX_STACK_LINE(246)
					int _g53 = (_g51 + _g52);		HX_STACK_VAR(_g53,"_g53");
					HX_STACK_LINE(246)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g48,_g53);
				}
				;break;
				case (int)12: case (int)13: case (int)14: {
					HX_STACK_LINE(248)
					Array< int > _g54;		HX_STACK_VAR(_g54,"_g54");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						Array< int > a = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)1,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(248)
						_g54 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(248)
					this->_playedTiles = _g54;
					HX_STACK_LINE(249)
					Array< int > _g55;		HX_STACK_VAR(_g55,"_g55");
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						Array< int > a = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)4,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(249)
						_g55 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(249)
					this->_playedTiles = _g55;
					HX_STACK_LINE(250)
					Array< int > _g56;		HX_STACK_VAR(_g56,"_g56");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(250)
						Array< int > a = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)7,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(250)
						_g56 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(250)
					this->_playedTiles = _g56;
					HX_STACK_LINE(251)
					int _g57 = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(251)
					int _g58 = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g58,"_g58");
					HX_STACK_LINE(251)
					int _g59 = (_g57 + _g58);		HX_STACK_VAR(_g59,"_g59");
					HX_STACK_LINE(251)
					int _g60 = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g60,"_g60");
					HX_STACK_LINE(251)
					int _g61 = (_g59 + _g60);		HX_STACK_VAR(_g61,"_g61");
					HX_STACK_LINE(251)
					int _g62 = this->_grids->__get((int)1).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g62,"_g62");
					HX_STACK_LINE(251)
					int _g63 = this->_grids->__get((int)4).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g63,"_g63");
					HX_STACK_LINE(251)
					int _g64 = (_g62 + _g63);		HX_STACK_VAR(_g64,"_g64");
					HX_STACK_LINE(251)
					int _g65 = this->_grids->__get((int)7).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g65,"_g65");
					HX_STACK_LINE(251)
					int _g66 = (_g64 + _g65);		HX_STACK_VAR(_g66,"_g66");
					HX_STACK_LINE(251)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g61,_g66);
				}
				;break;
				case (int)15: case (int)16: case (int)17: {
					HX_STACK_LINE(253)
					Array< int > _g67;		HX_STACK_VAR(_g67,"_g67");
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(253)
						Array< int > a = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)2,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(253)
						_g67 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(253)
					this->_playedTiles = _g67;
					HX_STACK_LINE(254)
					Array< int > _g68;		HX_STACK_VAR(_g68,"_g68");
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						Array< int > a = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)5,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(254)
						_g68 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(254)
					this->_playedTiles = _g68;
					HX_STACK_LINE(255)
					Array< int > _g69;		HX_STACK_VAR(_g69,"_g69");
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						Array< int > a = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->shovel((int)8,shovelLine);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(255)
						_g69 = this->_playedTiles->concat(a);
					}
					HX_STACK_LINE(255)
					this->_playedTiles = _g69;
					HX_STACK_LINE(256)
					int _g70 = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g70,"_g70");
					HX_STACK_LINE(256)
					int _g71 = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g71,"_g71");
					HX_STACK_LINE(256)
					int _g72 = (_g70 + _g71);		HX_STACK_VAR(_g72,"_g72");
					HX_STACK_LINE(256)
					int _g73 = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->getMatter();		HX_STACK_VAR(_g73,"_g73");
					HX_STACK_LINE(256)
					int _g74 = (_g72 + _g73);		HX_STACK_VAR(_g74,"_g74");
					HX_STACK_LINE(256)
					int _g75 = this->_grids->__get((int)2).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g75,"_g75");
					HX_STACK_LINE(256)
					int _g76 = this->_grids->__get((int)5).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g76,"_g76");
					HX_STACK_LINE(256)
					int _g77 = (_g75 + _g76);		HX_STACK_VAR(_g77,"_g77");
					HX_STACK_LINE(256)
					int _g78 = this->_grids->__get((int)8).StaticCast< ::com::nog::game::model::GridData >()->getPower();		HX_STACK_VAR(_g78,"_g78");
					HX_STACK_LINE(256)
					int _g79 = (_g77 + _g78);		HX_STACK_VAR(_g79,"_g79");
					HX_STACK_LINE(256)
					this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->giveRessources(_g74,_g79);
				}
				;break;
			}
			HX_STACK_LINE(259)
			if (((this->_playedTiles->length > (int)0))){
				HX_STACK_LINE(260)
				this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->usePower();
				HX_STACK_LINE(263)
				this->_playerTurn = hx::Mod(((this->_playerTurn + (int)1)),(int)2);
				HX_STACK_LINE(264)
				this->_playGrid = tile;
				HX_STACK_LINE(265)
				int _g80 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g80,"_g80");
				HX_STACK_LINE(265)
				if (((_g80 != (int)0))){
					HX_STACK_LINE(266)
					if (((this->_playableGrid->length > (int)0))){
						HX_STACK_LINE(268)
						Dynamic _g83;		HX_STACK_VAR(_g83,"_g83");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							Float _g81 = ::Math_obj::random();		HX_STACK_VAR(_g81,"_g81");
							HX_STACK_LINE(268)
							Float _g82 = (_g81 * this->_playableGrid->length);		HX_STACK_VAR(_g82,"_g82");
							HX_STACK_LINE(268)
							int index = ::Std_obj::_int(_g82);		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(268)
							_g83 = this->_playableGrid->__get(index);
						}
						HX_STACK_LINE(268)
						this->_playGrid = _g83;
					}
				}
				HX_STACK_LINE(272)
				this->_state = HX_CSTRING("digging");
				HX_STACK_LINE(273)
				::openfl::_v2::events::Event _g84 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("update"),null(),null());		HX_STACK_VAR(_g84,"_g84");
				HX_STACK_LINE(273)
				this->dispatchEvent(_g84);
			}
			else{
				HX_STACK_LINE(275)
				::haxe::Log_obj::trace(HX_CSTRING("nothing to shovel"),hx::SourceInfo(HX_CSTRING("GameCore.hx"),275,HX_CSTRING("com.nog.game.model.GameCore"),HX_CSTRING("shovel")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameCore_obj,shovel,(void))

Void GameCore_obj::tnt( int grid,int tile){
{
		HX_STACK_FRAME("com.nog.game.model.GameCore","tnt",0xe3df3729,"com.nog.game.model.GameCore.tnt","com/nog/game/model/GameCore.hx",280,0x673faf01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grid,"grid")
		HX_STACK_ARG(tile,"tile")
		HX_STACK_LINE(281)
		if (((grid != this->_playGrid))){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(285)
		int tileType = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getData(tile);		HX_STACK_VAR(tileType,"tileType");
		HX_STACK_LINE(286)
		if (((bool((tileType > (int)0)) && bool((tileType != (this->_playerTurn + (int)1)))))){
			HX_STACK_LINE(287)
			this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->explode(tile,this->_playerTurn);
			HX_STACK_LINE(288)
			this->_players->__get(this->_playerTurn).StaticCast< ::com::nog::game::model::Player >()->usePower();
			HX_STACK_LINE(291)
			this->_playerTurn = hx::Mod(((this->_playerTurn + (int)1)),(int)2);
			HX_STACK_LINE(292)
			Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Array< int > Block( hx::ObjectPtr< ::com::nog::game::model::GameCore_obj > __this,int &tile){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",292,0x673faf01)
					{
						HX_STACK_LINE(292)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< int > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GameCore.hx",292,0x673faf01)
								{
									HX_STACK_LINE(292)
									Array< int > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(292)
									Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(292)
									this2 = _g;
									HX_STACK_LINE(292)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(292)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(292)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add(__this->_playGrid).Add(tile)));
					}
					return null();
				}
			};
			HX_STACK_LINE(292)
			_g1 = _Function_2_1::Block(this,tile);
			HX_STACK_LINE(292)
			this->_playedTiles = _g1;
			HX_STACK_LINE(293)
			this->_playGrid = tile;
			HX_STACK_LINE(294)
			int _g2 = this->_grids->__get(this->_playGrid).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(294)
			if (((_g2 != (int)0))){
				HX_STACK_LINE(295)
				if (((this->_playableGrid->length > (int)0))){
					HX_STACK_LINE(297)
					Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(297)
						Float _g4 = (_g3 * this->_playableGrid->length);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(297)
						int index = ::Std_obj::_int(_g4);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(297)
						_g5 = this->_playableGrid->__get(index);
					}
					HX_STACK_LINE(297)
					this->_playGrid = _g5;
				}
			}
			HX_STACK_LINE(301)
			this->_state = HX_CSTRING("explosion");
			HX_STACK_LINE(302)
			::openfl::_v2::events::Event _g6 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("update"),null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(302)
			this->dispatchEvent(_g6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameCore_obj,tnt,(void))

::com::nog::game::model::Player GameCore_obj::getPlayer( int index){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getPlayer",0x0dd78346,"com.nog.game.model.GameCore.getPlayer","com/nog/game/model/GameCore.hx",308,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(308)
	return this->_players->__get((index - (int)1)).StaticCast< ::com::nog::game::model::Player >();
}


HX_DEFINE_DYNAMIC_FUNC1(GameCore_obj,getPlayer,return )

::String GameCore_obj::getState( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getState",0x72a321cc,"com.nog.game.model.GameCore.getState","com/nog/game/model/GameCore.hx",309,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getState,return )

int GameCore_obj::getPlayerTurn( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getPlayerTurn",0x4940b5e3,"com.nog.game.model.GameCore.getPlayerTurn","com/nog/game/model/GameCore.hx",310,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	return this->_playerTurn;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getPlayerTurn,return )

int GameCore_obj::getPlayGrid( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getPlayGrid",0xc15f55ff,"com.nog.game.model.GameCore.getPlayGrid","com/nog/game/model/GameCore.hx",311,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	return this->_playGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getPlayGrid,return )

int GameCore_obj::getLastPlay( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getLastPlay",0x6a83628f,"com.nog.game.model.GameCore.getLastPlay","com/nog/game/model/GameCore.hx",312,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	return this->_lastPlay;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getLastPlay,return )

Array< int > GameCore_obj::getPlayedTiles( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getPlayedTiles",0x2e6c3f2d,"com.nog.game.model.GameCore.getPlayedTiles","com/nog/game/model/GameCore.hx",313,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	return this->_playedTiles;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getPlayedTiles,return )

bool GameCore_obj::getFullGrid( ){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getFullGrid",0xe55f7b1a,"com.nog.game.model.GameCore.getFullGrid","com/nog/game/model/GameCore.hx",314,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	return this->_fullGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(GameCore_obj,getFullGrid,return )

int GameCore_obj::getWinner( int grid){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getWinner",0x28b2b9a4,"com.nog.game.model.GameCore.getWinner","com/nog/game/model/GameCore.hx",315,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(315)
	return this->_grids->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getWin();
}


HX_DEFINE_DYNAMIC_FUNC1(GameCore_obj,getWinner,return )

int GameCore_obj::getData( int grid,int tile){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getData",0xdc23bacf,"com.nog.game.model.GameCore.getData","com/nog/game/model/GameCore.hx",316,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(316)
	return this->_grids->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getData(tile);
}


HX_DEFINE_DYNAMIC_FUNC2(GameCore_obj,getData,return )

int GameCore_obj::getPlayerType( bool p1){
	HX_STACK_FRAME("com.nog.game.model.GameCore","getPlayerType",0x4943bd20,"com.nog.game.model.GameCore.getPlayerType","com/nog/game/model/GameCore.hx",318,0x673faf01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(319)
	if (((p1 == true))){
		HX_STACK_LINE(319)
		return this->_players->__get((int)0).StaticCast< ::com::nog::game::model::Player >()->getType();
	}
	HX_STACK_LINE(320)
	return this->_players->__get((int)1).StaticCast< ::com::nog::game::model::Player >()->getType();
}


HX_DEFINE_DYNAMIC_FUNC1(GameCore_obj,getPlayerType,return )

int GameCore_obj::_play;

Array< int > GameCore_obj::_stats;

Float GameCore_obj::_time;

::String GameCore_obj::THINKINGP1;

::String GameCore_obj::THINKINGP2;

::String GameCore_obj::CHOOSINGGRID;

::String GameCore_obj::DIGGING;

::String GameCore_obj::EXPLOSION;

::String GameCore_obj::PLAYINGMOVE;

::String GameCore_obj::WINNINGGRID;

::String GameCore_obj::WINNINGGAME;

::String GameCore_obj::UPDATE;

::String GameCore_obj::ENDED;


GameCore_obj::GameCore_obj()
{
}

void GameCore_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameCore);
	HX_MARK_MEMBER_NAME(_grids,"_grids");
	HX_MARK_MEMBER_NAME(_playersType,"_playersType");
	HX_MARK_MEMBER_NAME(_players,"_players");
	HX_MARK_MEMBER_NAME(_playableGrid,"_playableGrid");
	HX_MARK_MEMBER_NAME(_playGrid,"_playGrid");
	HX_MARK_MEMBER_NAME(_playerTurn,"_playerTurn");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_playedTiles,"_playedTiles");
	HX_MARK_MEMBER_NAME(_lastPlay,"_lastPlay");
	HX_MARK_MEMBER_NAME(_fullGrid,"_fullGrid");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_cpuTimer,"_cpuTimer");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameCore_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_grids,"_grids");
	HX_VISIT_MEMBER_NAME(_playersType,"_playersType");
	HX_VISIT_MEMBER_NAME(_players,"_players");
	HX_VISIT_MEMBER_NAME(_playableGrid,"_playableGrid");
	HX_VISIT_MEMBER_NAME(_playGrid,"_playGrid");
	HX_VISIT_MEMBER_NAME(_playerTurn,"_playerTurn");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_playedTiles,"_playedTiles");
	HX_VISIT_MEMBER_NAME(_lastPlay,"_lastPlay");
	HX_VISIT_MEMBER_NAME(_fullGrid,"_fullGrid");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_cpuTimer,"_cpuTimer");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameCore_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tnt") ) { return tnt_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_play") ) { return _play; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stats") ) { return _stats; }
		if (HX_FIELD_EQ(inName,"_grids") ) { return _grids; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"shovel") ) { return shovel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cpuPlay") ) { return cpuPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_players") ) { return _players; }
		if (HX_FIELD_EQ(inName,"getState") ) { return getState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_playGrid") ) { return _playGrid; }
		if (HX_FIELD_EQ(inName,"_lastPlay") ) { return _lastPlay; }
		if (HX_FIELD_EQ(inName,"_fullGrid") ) { return _fullGrid; }
		if (HX_FIELD_EQ(inName,"_cpuTimer") ) { return _cpuTimer; }
		if (HX_FIELD_EQ(inName,"checkGrid") ) { return checkGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayer") ) { return getPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getWinner") ) { return getWinner_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkBoard") ) { return checkBoard_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playerTurn") ) { return _playerTurn; }
		if (HX_FIELD_EQ(inName,"isPlayerCpu") ) { return isPlayerCpu_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayGrid") ) { return getPlayGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastPlay") ) { return getLastPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"getFullGrid") ) { return getFullGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playersType") ) { return _playersType; }
		if (HX_FIELD_EQ(inName,"_playedTiles") ) { return _playedTiles; }
		if (HX_FIELD_EQ(inName,"startNewTurn") ) { return startNewTurn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_playableGrid") ) { return _playableGrid; }
		if (HX_FIELD_EQ(inName,"getPlayerTurn") ) { return getPlayerTurn_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayerType") ) { return getPlayerType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPlayedTiles") ) { return getPlayedTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuTimerHandler") ) { return cpuTimerHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameCore_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_play") ) { _play=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stats") ) { _stats=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grids") ) { _grids=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_players") ) { _players=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_playGrid") ) { _playGrid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPlay") ) { _lastPlay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fullGrid") ) { _fullGrid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cpuTimer") ) { _cpuTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playerTurn") ) { _playerTurn=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playersType") ) { _playersType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_playedTiles") ) { _playedTiles=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_playableGrid") ) { _playableGrid=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameCore_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_grids"));
	outFields->push(HX_CSTRING("_playersType"));
	outFields->push(HX_CSTRING("_players"));
	outFields->push(HX_CSTRING("_playableGrid"));
	outFields->push(HX_CSTRING("_playGrid"));
	outFields->push(HX_CSTRING("_playerTurn"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_playedTiles"));
	outFields->push(HX_CSTRING("_lastPlay"));
	outFields->push(HX_CSTRING("_fullGrid"));
	outFields->push(HX_CSTRING("_draw"));
	outFields->push(HX_CSTRING("_cpuTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_play"),
	HX_CSTRING("_stats"),
	HX_CSTRING("_time"),
	HX_CSTRING("THINKINGP1"),
	HX_CSTRING("THINKINGP2"),
	HX_CSTRING("CHOOSINGGRID"),
	HX_CSTRING("DIGGING"),
	HX_CSTRING("EXPLOSION"),
	HX_CSTRING("PLAYINGMOVE"),
	HX_CSTRING("WINNINGGRID"),
	HX_CSTRING("WINNINGGAME"),
	HX_CSTRING("UPDATE"),
	HX_CSTRING("ENDED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameCore_obj,_grids),HX_CSTRING("_grids")},
	{hx::fsInt,(int)offsetof(GameCore_obj,_playersType),HX_CSTRING("_playersType")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameCore_obj,_players),HX_CSTRING("_players")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GameCore_obj,_playableGrid),HX_CSTRING("_playableGrid")},
	{hx::fsInt,(int)offsetof(GameCore_obj,_playGrid),HX_CSTRING("_playGrid")},
	{hx::fsInt,(int)offsetof(GameCore_obj,_playerTurn),HX_CSTRING("_playerTurn")},
	{hx::fsString,(int)offsetof(GameCore_obj,_state),HX_CSTRING("_state")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GameCore_obj,_playedTiles),HX_CSTRING("_playedTiles")},
	{hx::fsInt,(int)offsetof(GameCore_obj,_lastPlay),HX_CSTRING("_lastPlay")},
	{hx::fsBool,(int)offsetof(GameCore_obj,_fullGrid),HX_CSTRING("_fullGrid")},
	{hx::fsBool,(int)offsetof(GameCore_obj,_draw),HX_CSTRING("_draw")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameCore_obj,_cpuTimer),HX_CSTRING("_cpuTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_grids"),
	HX_CSTRING("_playersType"),
	HX_CSTRING("_players"),
	HX_CSTRING("_playableGrid"),
	HX_CSTRING("_playGrid"),
	HX_CSTRING("_playerTurn"),
	HX_CSTRING("_state"),
	HX_CSTRING("_playedTiles"),
	HX_CSTRING("_lastPlay"),
	HX_CSTRING("_fullGrid"),
	HX_CSTRING("_draw"),
	HX_CSTRING("_cpuTimer"),
	HX_CSTRING("init"),
	HX_CSTRING("cpuTimerHandler"),
	HX_CSTRING("cpuPlay"),
	HX_CSTRING("startNewTurn"),
	HX_CSTRING("play"),
	HX_CSTRING("checkGrid"),
	HX_CSTRING("checkBoard"),
	HX_CSTRING("isPlayerCpu"),
	HX_CSTRING("shovel"),
	HX_CSTRING("tnt"),
	HX_CSTRING("getPlayer"),
	HX_CSTRING("getState"),
	HX_CSTRING("getPlayerTurn"),
	HX_CSTRING("getPlayGrid"),
	HX_CSTRING("getLastPlay"),
	HX_CSTRING("getPlayedTiles"),
	HX_CSTRING("getFullGrid"),
	HX_CSTRING("getWinner"),
	HX_CSTRING("getData"),
	HX_CSTRING("getPlayerType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameCore_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameCore_obj::_play,"_play");
	HX_MARK_MEMBER_NAME(GameCore_obj::_stats,"_stats");
	HX_MARK_MEMBER_NAME(GameCore_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(GameCore_obj::THINKINGP1,"THINKINGP1");
	HX_MARK_MEMBER_NAME(GameCore_obj::THINKINGP2,"THINKINGP2");
	HX_MARK_MEMBER_NAME(GameCore_obj::CHOOSINGGRID,"CHOOSINGGRID");
	HX_MARK_MEMBER_NAME(GameCore_obj::DIGGING,"DIGGING");
	HX_MARK_MEMBER_NAME(GameCore_obj::EXPLOSION,"EXPLOSION");
	HX_MARK_MEMBER_NAME(GameCore_obj::PLAYINGMOVE,"PLAYINGMOVE");
	HX_MARK_MEMBER_NAME(GameCore_obj::WINNINGGRID,"WINNINGGRID");
	HX_MARK_MEMBER_NAME(GameCore_obj::WINNINGGAME,"WINNINGGAME");
	HX_MARK_MEMBER_NAME(GameCore_obj::UPDATE,"UPDATE");
	HX_MARK_MEMBER_NAME(GameCore_obj::ENDED,"ENDED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameCore_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameCore_obj::_play,"_play");
	HX_VISIT_MEMBER_NAME(GameCore_obj::_stats,"_stats");
	HX_VISIT_MEMBER_NAME(GameCore_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(GameCore_obj::THINKINGP1,"THINKINGP1");
	HX_VISIT_MEMBER_NAME(GameCore_obj::THINKINGP2,"THINKINGP2");
	HX_VISIT_MEMBER_NAME(GameCore_obj::CHOOSINGGRID,"CHOOSINGGRID");
	HX_VISIT_MEMBER_NAME(GameCore_obj::DIGGING,"DIGGING");
	HX_VISIT_MEMBER_NAME(GameCore_obj::EXPLOSION,"EXPLOSION");
	HX_VISIT_MEMBER_NAME(GameCore_obj::PLAYINGMOVE,"PLAYINGMOVE");
	HX_VISIT_MEMBER_NAME(GameCore_obj::WINNINGGRID,"WINNINGGRID");
	HX_VISIT_MEMBER_NAME(GameCore_obj::WINNINGGAME,"WINNINGGAME");
	HX_VISIT_MEMBER_NAME(GameCore_obj::UPDATE,"UPDATE");
	HX_VISIT_MEMBER_NAME(GameCore_obj::ENDED,"ENDED");
};

#endif

Class GameCore_obj::__mClass;

void GameCore_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.model.GameCore"), hx::TCanCast< GameCore_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void GameCore_obj::__boot()
{
	THINKINGP1= HX_CSTRING("thinkingp1");
	THINKINGP2= HX_CSTRING("thinkingp2");
	CHOOSINGGRID= HX_CSTRING("choosinggrid");
	DIGGING= HX_CSTRING("digging");
	EXPLOSION= HX_CSTRING("explosion");
	PLAYINGMOVE= HX_CSTRING("playingmove");
	WINNINGGRID= HX_CSTRING("winninggrid");
	WINNINGGAME= HX_CSTRING("winninggame");
	UPDATE= HX_CSTRING("update");
	ENDED= HX_CSTRING("ended");
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model
