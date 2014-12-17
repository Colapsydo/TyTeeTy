#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
namespace com{
namespace nog{
namespace game{
namespace model{

Void Player_obj::__construct(int type,bool p1,bool cpu,Array< ::Dynamic > gridData)
{
HX_STACK_FRAME("com.nog.game.model.Player","new",0x4a5a73bf,"com.nog.game.model.Player.new","com/nog/game/model/Player.hx",75,0x992ecb11)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(p1,"p1")
HX_STACK_ARG(cpu,"cpu")
HX_STACK_ARG(gridData,"gridData")
{
	HX_STACK_LINE(76)
	this->_type = type;
	HX_STACK_LINE(77)
	this->_p1 = p1;
	HX_STACK_LINE(78)
	this->_cpu = cpu;
	HX_STACK_LINE(79)
	this->_data = gridData;
	HX_STACK_LINE(80)
	this->init();
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int type,bool p1,bool cpu,Array< ::Dynamic > gridData)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(type,p1,cpu,gridData);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Player_obj::init( ){
{
		HX_STACK_FRAME("com.nog.game.model.Player","init",0xc1838ad1,"com.nog.game.model.Player.init","com/nog/game/model/Player.hx",84,0x992ecb11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		int _g = this->_type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(86)
				this->_coeffAttackGrid = .25;
				HX_STACK_LINE(87)
				this->_coeffDefenseGrid = .25;
				HX_STACK_LINE(88)
				this->_coeffAttackBoard = .25;
				HX_STACK_LINE(89)
				this->_coeffDefenseBoard = .25;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(91)
				this->_coeffAttackGrid = ::com::nog::game::model::Player_obj::_ag;
				HX_STACK_LINE(92)
				this->_coeffDefenseGrid = ::com::nog::game::model::Player_obj::_dg;
				HX_STACK_LINE(93)
				this->_coeffAttackBoard = ::com::nog::game::model::Player_obj::_ab;
				HX_STACK_LINE(94)
				this->_coeffDefenseBoard = ::com::nog::game::model::Player_obj::_db;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,init,(void))

Float Player_obj::attackBoard( int tile){
	HX_STACK_FRAME("com.nog.game.model.Player","attackBoard",0x1c14e01d,"com.nog.game.model.Player.attackBoard","com/nog/game/model/Player.hx",105,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(106)
	int _g = this->_data->__get(tile).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(106)
	if (((_g == (int)0))){
		HX_STACK_LINE(107)
		Array< int > opponentAttack;		HX_STACK_VAR(opponentAttack,"opponentAttack");
		HX_STACK_LINE(107)
		if (((this->_p1 == true))){
			HX_STACK_LINE(107)
			opponentAttack = this->_data->__get(tile).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
		}
		else{
			HX_STACK_LINE(107)
			opponentAttack = this->_data->__get(tile).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
		}
		HX_STACK_LINE(108)
		Float score = (int)0;		HX_STACK_VAR(score,"score");
		HX_STACK_LINE(109)
		Float maxScore = (int)-1000;		HX_STACK_VAR(maxScore,"maxScore");
		HX_STACK_LINE(110)
		Float result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(111)
		Float chance = (int)0;		HX_STACK_VAR(chance,"chance");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			int _g2 = opponentAttack->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(113)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(114)
				score = opponentAttack->__get(i);
				HX_STACK_LINE(115)
				if (((score >= maxScore))){
					HX_STACK_LINE(116)
					if (((score > maxScore))){
						HX_STACK_LINE(117)
						Float _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(117)
						if (((this->_p1 == true))){
							HX_STACK_LINE(117)
							Float _g11 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP1AttValue();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(117)
							Dynamic _g21;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(117)
								_g21 = this1->__get(i);
							}
							HX_STACK_LINE(117)
							Float _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(117)
							_g7 = (_g3 * .5);
						}
						else{
							HX_STACK_LINE(117)
							Float _g4 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP2AttValue();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(117)
							Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(117)
								_g5 = this1->__get(i);
							}
							HX_STACK_LINE(117)
							Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(117)
							_g7 = (_g6 * .5);
						}
						HX_STACK_LINE(117)
						result = _g7;
						HX_STACK_LINE(118)
						chance = (int)1;
						HX_STACK_LINE(119)
						maxScore = score;
					}
					else{
						HX_STACK_LINE(121)
						Float _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(121)
						if (((this->_p1 == true))){
							HX_STACK_LINE(121)
							Float _g8 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP1AttValue();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(121)
							Dynamic _g9;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(121)
								_g9 = this1->__get(i);
							}
							HX_STACK_LINE(121)
							Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(121)
							_g14 = (_g10 * .5);
						}
						else{
							HX_STACK_LINE(121)
							Float _g11 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP2AttValue();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(121)
							Dynamic _g12;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(121)
								_g12 = this1->__get(i);
							}
							HX_STACK_LINE(121)
							Float _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(121)
							_g14 = (_g13 * .5);
						}
						HX_STACK_LINE(121)
						hx::AddEq(result,_g14);
						HX_STACK_LINE(122)
						(chance)++;
					}
				}
			}
		}
		HX_STACK_LINE(127)
		return (Float(result) / Float(chance));
	}
	HX_STACK_LINE(129)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,attackBoard,return )

Void Player_obj::play( int grid){
{
		HX_STACK_FRAME("com.nog.game.model.Player","play",0xc6227db5,"com.nog.game.model.Player.play","com/nog/game/model/Player.hx",134,0x992ecb11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grid,"grid")
		HX_STACK_LINE(136)
		::com::nog::game::model::GridData playGrid = this->_data->__get(grid).StaticCast< ::com::nog::game::model::GridData >();		HX_STACK_VAR(playGrid,"playGrid");
		HX_STACK_LINE(137)
		Float targetDefenseValue;		HX_STACK_VAR(targetDefenseValue,"targetDefenseValue");
		HX_STACK_LINE(138)
		Float score = (int)0;		HX_STACK_VAR(score,"score");
		HX_STACK_LINE(139)
		Float maxScore = (int)-1000;		HX_STACK_VAR(maxScore,"maxScore");
		HX_STACK_LINE(140)
		Array< int > moves;		HX_STACK_VAR(moves,"moves");
		struct _Function_1_1{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",140,0x992ecb11)
				{
					HX_STACK_LINE(140)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(140)
					Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(140)
					this1 = _g;
					HX_STACK_LINE(140)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(140)
		moves = _Function_1_1::Block();
		HX_STACK_LINE(142)
		Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		if (((this->_p1 == true))){
			HX_STACK_LINE(142)
			_g1 = this->_data->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
		}
		else{
			HX_STACK_LINE(142)
			_g1 = this->_data->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
		}
		HX_STACK_LINE(142)
		this->_dataAttackGrid = _g1;
		HX_STACK_LINE(143)
		Array< int > _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(143)
		if (((this->_p1 == true))){
			HX_STACK_LINE(143)
			_g2 = this->_data->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
		}
		else{
			HX_STACK_LINE(143)
			_g2 = this->_data->__get(grid).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
		}
		HX_STACK_LINE(143)
		this->_dataDefenseGrid = _g2;
		HX_STACK_LINE(144)
		Array< int > _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(144)
		if (((this->_p1 == true))){
			HX_STACK_LINE(144)
			_g3 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
		}
		else{
			HX_STACK_LINE(144)
			_g3 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
		}
		HX_STACK_LINE(144)
		this->_dataAttackBoard = _g3;
		HX_STACK_LINE(145)
		Array< int > _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(145)
		if (((this->_p1 == true))){
			HX_STACK_LINE(145)
			_g4 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
		}
		else{
			HX_STACK_LINE(145)
			_g4 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
		}
		HX_STACK_LINE(145)
		this->_dataDefenseBoard = _g4;
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(149)
			int _g = this->_dataAttackGrid->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				if ((!(((_g11 < _g))))){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				int _g5 = playGrid->getData(i);		HX_STACK_VAR(_g5,"_g5");
				struct _Function_3_1{
					inline static bool Block( int &i,::com::nog::game::model::GridData &playGrid){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",150,0x992ecb11)
						{
							HX_STACK_LINE(150)
							int _g6 = playGrid->getData(i);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(150)
							return (_g6 == (int)-1);
						}
						return null();
					}
				};
				HX_STACK_LINE(150)
				if (((  ((!(((  (((_g5 == (int)0))) ? bool((this->_matter > (int)0)) : bool(false) ))))) ? bool(_Function_3_1::Block(i,playGrid)) : bool(true) ))){
					HX_STACK_LINE(152)
					Float _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(152)
					if (((this->_p1 == true))){
						HX_STACK_LINE(152)
						_g7 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP2AttValue();
					}
					else{
						HX_STACK_LINE(152)
						_g7 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP1AttValue();
					}
					HX_STACK_LINE(152)
					targetDefenseValue = _g7;
					HX_STACK_LINE(154)
					int _g8 = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getWin();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(154)
					Float _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(154)
					if (((_g8 == (int)0))){
						HX_STACK_LINE(154)
						Array< int > opponentAttack;		HX_STACK_VAR(opponentAttack,"opponentAttack");
						HX_STACK_LINE(154)
						if (((this->_p1 == true))){
							HX_STACK_LINE(154)
							opponentAttack = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();
						}
						else{
							HX_STACK_LINE(154)
							opponentAttack = this->_data->__get(i).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();
						}
						HX_STACK_LINE(154)
						Float score1 = (int)0;		HX_STACK_VAR(score1,"score1");
						HX_STACK_LINE(154)
						Float maxScore1 = (int)-1000;		HX_STACK_VAR(maxScore1,"maxScore1");
						HX_STACK_LINE(154)
						Float result = (int)0;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(154)
						Float chance = (int)0;		HX_STACK_VAR(chance,"chance");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(154)
							int _g6 = opponentAttack->length;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(154)
							while((true)){
								HX_STACK_LINE(154)
								if ((!(((_g12 < _g6))))){
									HX_STACK_LINE(154)
									break;
								}
								HX_STACK_LINE(154)
								int i1 = (_g12)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(154)
								score1 = opponentAttack->__get(i1);
								HX_STACK_LINE(154)
								if (((score1 >= maxScore1))){
									HX_STACK_LINE(154)
									if (((score1 > maxScore1))){
										HX_STACK_LINE(154)
										Float _g15;		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(154)
										if (((this->_p1 == true))){
											HX_STACK_LINE(154)
											Float _g9 = this->_data->__get(i1).StaticCast< ::com::nog::game::model::GridData >()->getP1AttValue();		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(154)
											Dynamic _g10;		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(154)
											{
												HX_STACK_LINE(154)
												Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(154)
												_g10 = this1->__get(i1);
											}
											HX_STACK_LINE(154)
											Float _g111 = (_g9 + _g10);		HX_STACK_VAR(_g111,"_g111");
											HX_STACK_LINE(154)
											_g15 = (_g111 * .5);
										}
										else{
											HX_STACK_LINE(154)
											Float _g121 = this->_data->__get(i1).StaticCast< ::com::nog::game::model::GridData >()->getP2AttValue();		HX_STACK_VAR(_g121,"_g121");
											HX_STACK_LINE(154)
											Dynamic _g13;		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(154)
											{
												HX_STACK_LINE(154)
												Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(154)
												_g13 = this1->__get(i1);
											}
											HX_STACK_LINE(154)
											Float _g14 = (_g121 + _g13);		HX_STACK_VAR(_g14,"_g14");
											HX_STACK_LINE(154)
											_g15 = (_g14 * .5);
										}
										HX_STACK_LINE(154)
										result = _g15;
										HX_STACK_LINE(154)
										chance = (int)1;
										HX_STACK_LINE(154)
										maxScore1 = score1;
									}
									else{
										HX_STACK_LINE(154)
										Float _g22;		HX_STACK_VAR(_g22,"_g22");
										HX_STACK_LINE(154)
										if (((this->_p1 == true))){
											HX_STACK_LINE(154)
											Float _g16 = this->_data->__get(i1).StaticCast< ::com::nog::game::model::GridData >()->getP1AttValue();		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(154)
											Dynamic _g17;		HX_STACK_VAR(_g17,"_g17");
											HX_STACK_LINE(154)
											{
												HX_STACK_LINE(154)
												Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP1AttData();		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(154)
												_g17 = this1->__get(i1);
											}
											HX_STACK_LINE(154)
											Float _g18 = (_g16 + _g17);		HX_STACK_VAR(_g18,"_g18");
											HX_STACK_LINE(154)
											_g22 = (_g18 * .5);
										}
										else{
											HX_STACK_LINE(154)
											Float _g19 = this->_data->__get(i1).StaticCast< ::com::nog::game::model::GridData >()->getP2AttValue();		HX_STACK_VAR(_g19,"_g19");
											HX_STACK_LINE(154)
											Dynamic _g20;		HX_STACK_VAR(_g20,"_g20");
											HX_STACK_LINE(154)
											{
												HX_STACK_LINE(154)
												Array< int > this1 = this->_data->__get((int)9).StaticCast< ::com::nog::game::model::GridData >()->getP2AttData();		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(154)
												_g20 = this1->__get(i1);
											}
											HX_STACK_LINE(154)
											Float _g21 = (_g19 + _g20);		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(154)
											_g22 = (_g21 * .5);
										}
										HX_STACK_LINE(154)
										hx::AddEq(result,_g22);
										HX_STACK_LINE(154)
										(chance)++;
									}
								}
							}
						}
						HX_STACK_LINE(154)
						_g23 = (Float(result) / Float(chance));
					}
					else{
						HX_STACK_LINE(154)
						_g23 = (int)0;
					}
					HX_STACK_LINE(154)
					Float _g24 = (this->_coeffAttackBoard * _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(154)
					Float _g25 = ((((this->_coeffAttackGrid * this->_dataAttackGrid->__get(i)) + (this->_coeffDefenseGrid * this->_dataDefenseGrid->__get(i))) - ((this->_coeffDefenseBoard * ((targetDefenseValue + this->_dataDefenseBoard->__get(i)))) * .5)) + _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(154)
					score = _g25;
					HX_STACK_LINE(158)
					if (((score >= maxScore))){
						HX_STACK_LINE(159)
						if (((score > maxScore))){
							HX_STACK_LINE(160)
							moves->splice((int)0,moves->length);
							HX_STACK_LINE(161)
							moves->push(i);
						}
						else{
							HX_STACK_LINE(163)
							moves->push(i);
						}
						HX_STACK_LINE(165)
						maxScore = score;
					}
				}
			}
		}
		HX_STACK_LINE(170)
		if (((moves->length > (int)0))){
			HX_STACK_LINE(171)
			Dynamic _g28;		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				Float _g26 = ::Math_obj::random();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(171)
				Float _g27 = (moves->length * _g26);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(171)
				int index = ::Std_obj::_int(_g27);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(171)
				_g28 = moves->__get(index);
			}
			HX_STACK_LINE(171)
			this->_choosenTile = _g28;
		}
		else{
			struct _Function_2_1{
				inline static Dynamic Block( int &grid){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",173,0x992ecb11)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Player.hx"),false);
						__result->Add(HX_CSTRING("lineNumber") , (int)173,false);
						__result->Add(HX_CSTRING("className") , HX_CSTRING("com.nog.game.model.Player"),false);
						__result->Add(HX_CSTRING("methodName") , HX_CSTRING("play"),false);
						__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(grid)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(173)
			::haxe::Log_obj::trace(HX_CSTRING("no more choice in grid "),_Function_2_1::Block(grid));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,play,(void))

Void Player_obj::payConstruction( ){
{
		HX_STACK_FRAME("com.nog.game.model.Player","payConstruction",0x93eb6d78,"com.nog.game.model.Player.payConstruction","com/nog/game/model/Player.hx",179,0x992ecb11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		if (((this->_matter > (int)0))){
			HX_STACK_LINE(179)
			hx::SubEq(this->_matter,(int)1);
		}
		else{
			HX_STACK_LINE(179)
			hx::SubEq(this->_matter,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,payConstruction,(void))

Void Player_obj::usePower( ){
{
		HX_STACK_FRAME("com.nog.game.model.Player","usePower",0x55f7727f,"com.nog.game.model.Player.usePower","com/nog/game/model/Player.hx",182,0x992ecb11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		this->_transferedPower = -(this->_power);
		HX_STACK_LINE(184)
		this->_power = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,usePower,(void))

Void Player_obj::giveRessources( int transferedMatter,int transferedPower){
{
		HX_STACK_FRAME("com.nog.game.model.Player","giveRessources",0x2247ee0a,"com.nog.game.model.Player.giveRessources","com/nog/game/model/Player.hx",187,0x992ecb11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transferedMatter,"transferedMatter")
		HX_STACK_ARG(transferedPower,"transferedPower")
		HX_STACK_LINE(188)
		this->_transferedMatter = transferedMatter;
		HX_STACK_LINE(189)
		this->_transferedPower = transferedPower;
		HX_STACK_LINE(190)
		hx::AddEq(this->_matter,this->_transferedMatter);
		HX_STACK_LINE(191)
		hx::AddEq(this->_power,this->_transferedPower);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,giveRessources,(void))

int Player_obj::getType( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getType",0xe830e14f,"com.nog.game.model.Player.getType","com/nog/game/model/Player.hx",196,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getType,return )

bool Player_obj::getCPU( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getCPU",0xdd672033,"com.nog.game.model.Player.getCPU","com/nog/game/model/Player.hx",197,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	return this->_cpu;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getCPU,return )

int Player_obj::getMatter( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getMatter",0x63ba3516,"com.nog.game.model.Player.getMatter","com/nog/game/model/Player.hx",198,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return this->_matter;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getMatter,return )

int Player_obj::getPower( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getPower",0xee631fd0,"com.nog.game.model.Player.getPower","com/nog/game/model/Player.hx",199,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	return this->_power;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getPower,return )

int Player_obj::getTransMatter( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getTransMatter",0x7dc88f94,"com.nog.game.model.Player.getTransMatter","com/nog/game/model/Player.hx",200,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	return this->_transferedMatter;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getTransMatter,return )

int Player_obj::getTransPower( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getTransPower",0x0b341f12,"com.nog.game.model.Player.getTransPower","com/nog/game/model/Player.hx",201,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	return this->_transferedPower;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getTransPower,return )

int Player_obj::getChoosenTile( ){
	HX_STACK_FRAME("com.nog.game.model.Player","getChoosenTile",0x2e17fe90,"com.nog.game.model.Player.getChoosenTile","com/nog/game/model/Player.hx",202,0x992ecb11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	return this->_choosenTile;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getChoosenTile,return )

Float Player_obj::_ag;

Float Player_obj::_dg;

Float Player_obj::_ab;

Float Player_obj::_db;

int Player_obj::_calIndex;

Array< Float > Player_obj::_calList;

Void Player_obj::readFactors( ){
{
		HX_STACK_FRAME("com.nog.game.model.Player","readFactors",0xb83b4a6d,"com.nog.game.model.Player.readFactors","com/nog/game/model/Player.hx",44,0x992ecb11)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",44,0x992ecb11)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Player.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)44,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.nog.game.model.Player"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("readFactors"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(::com::nog::game::model::Player_obj::_dg).Add(::com::nog::game::model::Player_obj::_ab).Add(::com::nog::game::model::Player_obj::_db)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		::haxe::Log_obj::trace(::com::nog::game::model::Player_obj::_ag,_Function_1_1::Block());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Player_obj,readFactors,(void))

Void Player_obj::factorUpdate( ){
{
		HX_STACK_FRAME("com.nog.game.model.Player","factorUpdate",0x10f410f9,"com.nog.game.model.Player.factorUpdate","com/nog/game/model/Player.hx",47,0x992ecb11)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Player_obj,factorUpdate,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_p1,"_p1");
	HX_MARK_MEMBER_NAME(_cpu,"_cpu");
	HX_MARK_MEMBER_NAME(_coeffAttackGrid,"_coeffAttackGrid");
	HX_MARK_MEMBER_NAME(_coeffDefenseGrid,"_coeffDefenseGrid");
	HX_MARK_MEMBER_NAME(_coeffAttackBoard,"_coeffAttackBoard");
	HX_MARK_MEMBER_NAME(_coeffDefenseBoard,"_coeffDefenseBoard");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_dataAttackGrid,"_dataAttackGrid");
	HX_MARK_MEMBER_NAME(_dataDefenseGrid,"_dataDefenseGrid");
	HX_MARK_MEMBER_NAME(_dataAttackBoard,"_dataAttackBoard");
	HX_MARK_MEMBER_NAME(_dataDefenseBoard,"_dataDefenseBoard");
	HX_MARK_MEMBER_NAME(_choosenTile,"_choosenTile");
	HX_MARK_MEMBER_NAME(_transferedMatter,"_transferedMatter");
	HX_MARK_MEMBER_NAME(_transferedPower,"_transferedPower");
	HX_MARK_MEMBER_NAME(_matter,"_matter");
	HX_MARK_MEMBER_NAME(_power,"_power");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_p1,"_p1");
	HX_VISIT_MEMBER_NAME(_cpu,"_cpu");
	HX_VISIT_MEMBER_NAME(_coeffAttackGrid,"_coeffAttackGrid");
	HX_VISIT_MEMBER_NAME(_coeffDefenseGrid,"_coeffDefenseGrid");
	HX_VISIT_MEMBER_NAME(_coeffAttackBoard,"_coeffAttackBoard");
	HX_VISIT_MEMBER_NAME(_coeffDefenseBoard,"_coeffDefenseBoard");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_dataAttackGrid,"_dataAttackGrid");
	HX_VISIT_MEMBER_NAME(_dataDefenseGrid,"_dataDefenseGrid");
	HX_VISIT_MEMBER_NAME(_dataAttackBoard,"_dataAttackBoard");
	HX_VISIT_MEMBER_NAME(_dataDefenseBoard,"_dataDefenseBoard");
	HX_VISIT_MEMBER_NAME(_choosenTile,"_choosenTile");
	HX_VISIT_MEMBER_NAME(_transferedMatter,"_transferedMatter");
	HX_VISIT_MEMBER_NAME(_transferedPower,"_transferedPower");
	HX_VISIT_MEMBER_NAME(_matter,"_matter");
	HX_VISIT_MEMBER_NAME(_power,"_power");
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ag") ) { return _ag; }
		if (HX_FIELD_EQ(inName,"_dg") ) { return _dg; }
		if (HX_FIELD_EQ(inName,"_ab") ) { return _ab; }
		if (HX_FIELD_EQ(inName,"_db") ) { return _db; }
		if (HX_FIELD_EQ(inName,"_p1") ) { return _p1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_cpu") ) { return _cpu; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_power") ) { return _power; }
		if (HX_FIELD_EQ(inName,"getCPU") ) { return getCPU_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { return _matter; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_calList") ) { return _calList; }
		if (HX_FIELD_EQ(inName,"usePower") ) { return usePower_dyn(); }
		if (HX_FIELD_EQ(inName,"getPower") ) { return getPower_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calIndex") ) { return _calIndex; }
		if (HX_FIELD_EQ(inName,"getMatter") ) { return getMatter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readFactors") ) { return readFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"attackBoard") ) { return attackBoard_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"factorUpdate") ) { return factorUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_choosenTile") ) { return _choosenTile; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTransPower") ) { return getTransPower_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"giveRessources") ) { return giveRessources_dyn(); }
		if (HX_FIELD_EQ(inName,"getTransMatter") ) { return getTransMatter_dyn(); }
		if (HX_FIELD_EQ(inName,"getChoosenTile") ) { return getChoosenTile_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_dataAttackGrid") ) { return _dataAttackGrid; }
		if (HX_FIELD_EQ(inName,"payConstruction") ) { return payConstruction_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_coeffAttackGrid") ) { return _coeffAttackGrid; }
		if (HX_FIELD_EQ(inName,"_dataDefenseGrid") ) { return _dataDefenseGrid; }
		if (HX_FIELD_EQ(inName,"_dataAttackBoard") ) { return _dataAttackBoard; }
		if (HX_FIELD_EQ(inName,"_transferedPower") ) { return _transferedPower; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_coeffDefenseGrid") ) { return _coeffDefenseGrid; }
		if (HX_FIELD_EQ(inName,"_coeffAttackBoard") ) { return _coeffAttackBoard; }
		if (HX_FIELD_EQ(inName,"_dataDefenseBoard") ) { return _dataDefenseBoard; }
		if (HX_FIELD_EQ(inName,"_transferedMatter") ) { return _transferedMatter; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_coeffDefenseBoard") ) { return _coeffDefenseBoard; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ag") ) { _ag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dg") ) { _dg=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ab") ) { _ab=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_db") ) { _db=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_p1") ) { _p1=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_cpu") ) { _cpu=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_power") ) { _power=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { _matter=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_calList") ) { _calList=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calIndex") ) { _calIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_choosenTile") ) { _choosenTile=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_dataAttackGrid") ) { _dataAttackGrid=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_coeffAttackGrid") ) { _coeffAttackGrid=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataDefenseGrid") ) { _dataDefenseGrid=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataAttackBoard") ) { _dataAttackBoard=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transferedPower") ) { _transferedPower=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_coeffDefenseGrid") ) { _coeffDefenseGrid=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_coeffAttackBoard") ) { _coeffAttackBoard=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataDefenseBoard") ) { _dataDefenseBoard=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transferedMatter") ) { _transferedMatter=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_coeffDefenseBoard") ) { _coeffDefenseBoard=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_p1"));
	outFields->push(HX_CSTRING("_cpu"));
	outFields->push(HX_CSTRING("_coeffAttackGrid"));
	outFields->push(HX_CSTRING("_coeffDefenseGrid"));
	outFields->push(HX_CSTRING("_coeffAttackBoard"));
	outFields->push(HX_CSTRING("_coeffDefenseBoard"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_dataAttackGrid"));
	outFields->push(HX_CSTRING("_dataDefenseGrid"));
	outFields->push(HX_CSTRING("_dataAttackBoard"));
	outFields->push(HX_CSTRING("_dataDefenseBoard"));
	outFields->push(HX_CSTRING("_choosenTile"));
	outFields->push(HX_CSTRING("_transferedMatter"));
	outFields->push(HX_CSTRING("_transferedPower"));
	outFields->push(HX_CSTRING("_matter"));
	outFields->push(HX_CSTRING("_power"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ag"),
	HX_CSTRING("_dg"),
	HX_CSTRING("_ab"),
	HX_CSTRING("_db"),
	HX_CSTRING("_calIndex"),
	HX_CSTRING("_calList"),
	HX_CSTRING("readFactors"),
	HX_CSTRING("factorUpdate"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,_type),HX_CSTRING("_type")},
	{hx::fsBool,(int)offsetof(Player_obj,_p1),HX_CSTRING("_p1")},
	{hx::fsBool,(int)offsetof(Player_obj,_cpu),HX_CSTRING("_cpu")},
	{hx::fsFloat,(int)offsetof(Player_obj,_coeffAttackGrid),HX_CSTRING("_coeffAttackGrid")},
	{hx::fsFloat,(int)offsetof(Player_obj,_coeffDefenseGrid),HX_CSTRING("_coeffDefenseGrid")},
	{hx::fsFloat,(int)offsetof(Player_obj,_coeffAttackBoard),HX_CSTRING("_coeffAttackBoard")},
	{hx::fsFloat,(int)offsetof(Player_obj,_coeffDefenseBoard),HX_CSTRING("_coeffDefenseBoard")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Player_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Player_obj,_dataAttackGrid),HX_CSTRING("_dataAttackGrid")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Player_obj,_dataDefenseGrid),HX_CSTRING("_dataDefenseGrid")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Player_obj,_dataAttackBoard),HX_CSTRING("_dataAttackBoard")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Player_obj,_dataDefenseBoard),HX_CSTRING("_dataDefenseBoard")},
	{hx::fsInt,(int)offsetof(Player_obj,_choosenTile),HX_CSTRING("_choosenTile")},
	{hx::fsInt,(int)offsetof(Player_obj,_transferedMatter),HX_CSTRING("_transferedMatter")},
	{hx::fsInt,(int)offsetof(Player_obj,_transferedPower),HX_CSTRING("_transferedPower")},
	{hx::fsInt,(int)offsetof(Player_obj,_matter),HX_CSTRING("_matter")},
	{hx::fsInt,(int)offsetof(Player_obj,_power),HX_CSTRING("_power")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_type"),
	HX_CSTRING("_p1"),
	HX_CSTRING("_cpu"),
	HX_CSTRING("_coeffAttackGrid"),
	HX_CSTRING("_coeffDefenseGrid"),
	HX_CSTRING("_coeffAttackBoard"),
	HX_CSTRING("_coeffDefenseBoard"),
	HX_CSTRING("_data"),
	HX_CSTRING("_dataAttackGrid"),
	HX_CSTRING("_dataDefenseGrid"),
	HX_CSTRING("_dataAttackBoard"),
	HX_CSTRING("_dataDefenseBoard"),
	HX_CSTRING("_choosenTile"),
	HX_CSTRING("_transferedMatter"),
	HX_CSTRING("_transferedPower"),
	HX_CSTRING("_matter"),
	HX_CSTRING("_power"),
	HX_CSTRING("init"),
	HX_CSTRING("attackBoard"),
	HX_CSTRING("play"),
	HX_CSTRING("payConstruction"),
	HX_CSTRING("usePower"),
	HX_CSTRING("giveRessources"),
	HX_CSTRING("getType"),
	HX_CSTRING("getCPU"),
	HX_CSTRING("getMatter"),
	HX_CSTRING("getPower"),
	HX_CSTRING("getTransMatter"),
	HX_CSTRING("getTransPower"),
	HX_CSTRING("getChoosenTile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::_ag,"_ag");
	HX_MARK_MEMBER_NAME(Player_obj::_dg,"_dg");
	HX_MARK_MEMBER_NAME(Player_obj::_ab,"_ab");
	HX_MARK_MEMBER_NAME(Player_obj::_db,"_db");
	HX_MARK_MEMBER_NAME(Player_obj::_calIndex,"_calIndex");
	HX_MARK_MEMBER_NAME(Player_obj::_calList,"_calList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::_ag,"_ag");
	HX_VISIT_MEMBER_NAME(Player_obj::_dg,"_dg");
	HX_VISIT_MEMBER_NAME(Player_obj::_ab,"_ab");
	HX_VISIT_MEMBER_NAME(Player_obj::_db,"_db");
	HX_VISIT_MEMBER_NAME(Player_obj::_calIndex,"_calIndex");
	HX_VISIT_MEMBER_NAME(Player_obj::_calList,"_calList");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.model.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
	_ag= .25;
	_dg= .25;
	_ab= .25;
	_db= .25;
	_calIndex= (int)0;
struct _Function_0_1{
	inline static Array< Float > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",41,0x992ecb11)
		{
			HX_STACK_LINE(41)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			struct _Function_1_1{
				inline static Array< Float > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/Player.hx",41,0x992ecb11)
					{
						HX_STACK_LINE(41)
						Array< Float > this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(41)
						Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(41)
						this2 = _g;
						HX_STACK_LINE(41)
						return this2;
					}
					return null();
				}
			};
			HX_STACK_LINE(41)
			this1 = _Function_1_1::Block();
			HX_STACK_LINE(41)
			return this1->concat(Dynamic( Array_obj<Dynamic>::__new()));
		}
		return null();
	}
};
	_calList= _Function_0_1::Block();
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model
