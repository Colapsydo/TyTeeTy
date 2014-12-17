#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_nog_game_model_GridData
#include <com/nog/game/model/GridData.h>
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

Void GridData_obj::__construct()
{
HX_STACK_FRAME("com.nog.game.model.GridData","new",0x10a6d2ee,"com.nog.game.model.GridData.new","com/nog/game/model/GridData.hx",26,0x5bf846c2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->init();
}
;
	return null();
}

//GridData_obj::~GridData_obj() { }

Dynamic GridData_obj::__CreateEmpty() { return  new GridData_obj; }
hx::ObjectPtr< GridData_obj > GridData_obj::__new()
{  hx::ObjectPtr< GridData_obj > result = new GridData_obj();
	result->__construct();
	return result;}

Dynamic GridData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridData_obj > result = new GridData_obj();
	result->__construct();
	return result;}

Void GridData_obj::init( ){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","init",0x7e0a74c2,"com.nog.game.model.GridData.init","com/nog/game/model/GridData.hx",29,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",30,0x5bf846c2)
				{
					HX_STACK_LINE(30)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					struct _Function_2_1{
						inline static Array< int > Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",30,0x5bf846c2)
							{
								HX_STACK_LINE(30)
								Array< int > this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(30)
								Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(30)
								this2 = _g;
								HX_STACK_LINE(30)
								return this2;
							}
							return null();
						}
					};
					HX_STACK_LINE(30)
					this1 = _Function_2_1::Block();
					HX_STACK_LINE(30)
					return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1)));
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		_g1 = _Function_1_1::Block();
		HX_STACK_LINE(30)
		this->_data = _g1;
		HX_STACK_LINE(33)
		Array< int > _g3;		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_2{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",33,0x5bf846c2)
				{
					HX_STACK_LINE(33)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(33)
					Array< int > _g2 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(33)
					this1 = _g2;
					HX_STACK_LINE(33)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		_g3 = _Function_1_2::Block();
		HX_STACK_LINE(33)
		this->_liner = _g3;
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			this->_liner->__SetSizeExact((int)8);
			HX_STACK_LINE(34)
			(int)8;
		}
		HX_STACK_LINE(37)
		Array< int > _g5;		HX_STACK_VAR(_g5,"_g5");
		struct _Function_1_3{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",37,0x5bf846c2)
				{
					HX_STACK_LINE(37)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					struct _Function_2_1{
						inline static Array< int > Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",37,0x5bf846c2)
							{
								HX_STACK_LINE(37)
								Array< int > this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(37)
								Array< int > _g4 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(37)
								this2 = _g4;
								HX_STACK_LINE(37)
								return this2;
							}
							return null();
						}
					};
					HX_STACK_LINE(37)
					this1 = _Function_2_1::Block();
					HX_STACK_LINE(37)
					return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3)));
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		_g5 = _Function_1_3::Block();
		HX_STACK_LINE(37)
		this->_player1AttackData = _g5;
		HX_STACK_LINE(40)
		Array< int > _g7;		HX_STACK_VAR(_g7,"_g7");
		struct _Function_1_4{
			inline static Array< int > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",40,0x5bf846c2)
				{
					HX_STACK_LINE(40)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					struct _Function_2_1{
						inline static Array< int > Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",40,0x5bf846c2)
							{
								HX_STACK_LINE(40)
								Array< int > this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(40)
								Array< int > _g6 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(40)
								this2 = _g6;
								HX_STACK_LINE(40)
								return this2;
							}
							return null();
						}
					};
					HX_STACK_LINE(40)
					this1 = _Function_2_1::Block();
					HX_STACK_LINE(40)
					return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3).Add((int)2).Add((int)3)));
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		_g7 = _Function_1_4::Block();
		HX_STACK_LINE(40)
		this->_player2AttackData = _g7;
		HX_STACK_LINE(43)
		Float _g8 = this->_player2AttackValue = 2.5555555555555554;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(43)
		this->_player1AttackValue = _g8;
		HX_STACK_LINE(45)
		int _g9 = this->_tileToDig = (int)9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(45)
		this->_tileToPlay = _g9;
		HX_STACK_LINE(46)
		this->_win = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,init,(void))

Void GridData_obj::winMoveControl( int tile,int player,Dynamic __o_explosion){
Dynamic explosion = __o_explosion.Default(false);
	HX_STACK_FRAME("com.nog.game.model.GridData","winMoveControl",0xa28d9dc2,"com.nog.game.model.GridData.winMoveControl","com/nog/game/model/GridData.hx",51,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(player,"player")
	HX_STACK_ARG(explosion,"explosion")
{
		HX_STACK_LINE(52)
		int coeff;		HX_STACK_VAR(coeff,"coeff");
		HX_STACK_LINE(52)
		if (((explosion == true))){
			HX_STACK_LINE(52)
			coeff = (int)-1;
		}
		else{
			HX_STACK_LINE(52)
			coeff = (int)1;
		}
		HX_STACK_LINE(53)
		int step;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(53)
		if (((player == (int)1))){
			HX_STACK_LINE(53)
			step = coeff;
		}
		else{
			HX_STACK_LINE(53)
			step = (coeff * (int)4);
		}
		HX_STACK_LINE(54)
		int total;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(54)
		if (((player == (int)1))){
			HX_STACK_LINE(54)
			total = (int)3;
		}
		else{
			HX_STACK_LINE(54)
			total = (int)12;
		}
		HX_STACK_LINE(56)
		switch( (int)(tile)){
			case (int)0: {
				HX_STACK_LINE(58)
				this->_liner[(int)0] = (this->_liner->__get((int)0) + step);
				HX_STACK_LINE(59)
				this->_liner[(int)3] = (this->_liner->__get((int)3) + step);
				HX_STACK_LINE(60)
				this->_liner[(int)6] = (this->_liner->__get((int)6) + step);
				HX_STACK_LINE(61)
				if (((bool((bool((this->_liner->__get((int)0) == total)) || bool((this->_liner->__get((int)3) == total)))) || bool((this->_liner->__get((int)6) == total))))){
					HX_STACK_LINE(61)
					this->_win = player;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(63)
				this->_liner[(int)0] = (this->_liner->__get((int)0) + step);
				HX_STACK_LINE(64)
				this->_liner[(int)4] = (this->_liner->__get((int)4) + step);
				HX_STACK_LINE(65)
				if (((bool((this->_liner->__get((int)0) == total)) || bool((this->_liner->__get((int)4) == total))))){
					HX_STACK_LINE(65)
					this->_win = player;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(67)
				this->_liner[(int)0] = (this->_liner->__get((int)0) + step);
				HX_STACK_LINE(68)
				this->_liner[(int)5] = (this->_liner->__get((int)5) + step);
				HX_STACK_LINE(69)
				this->_liner[(int)7] = (this->_liner->__get((int)7) + step);
				HX_STACK_LINE(70)
				if (((bool((bool((this->_liner->__get((int)0) == total)) || bool((this->_liner->__get((int)5) == total)))) || bool((this->_liner->__get((int)7) == total))))){
					HX_STACK_LINE(70)
					this->_win = player;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(72)
				this->_liner[(int)1] = (this->_liner->__get((int)1) + step);
				HX_STACK_LINE(73)
				this->_liner[(int)3] = (this->_liner->__get((int)3) + step);
				HX_STACK_LINE(74)
				if (((bool((this->_liner->__get((int)1) == total)) || bool((this->_liner->__get((int)3) == total))))){
					HX_STACK_LINE(74)
					this->_win = player;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(76)
				this->_liner[(int)1] = (this->_liner->__get((int)1) + step);
				HX_STACK_LINE(77)
				this->_liner[(int)4] = (this->_liner->__get((int)4) + step);
				HX_STACK_LINE(78)
				this->_liner[(int)6] = (this->_liner->__get((int)6) + step);
				HX_STACK_LINE(79)
				this->_liner[(int)7] = (this->_liner->__get((int)7) + step);
				HX_STACK_LINE(80)
				if (((bool((bool((bool((this->_liner->__get((int)1) == total)) || bool((this->_liner->__get((int)4) == total)))) || bool((this->_liner->__get((int)6) == total)))) || bool((this->_liner->__get((int)7) == total))))){
					HX_STACK_LINE(80)
					this->_win = player;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(82)
				this->_liner[(int)1] = (this->_liner->__get((int)1) + step);
				HX_STACK_LINE(83)
				this->_liner[(int)5] = (this->_liner->__get((int)5) + step);
				HX_STACK_LINE(84)
				if (((bool((this->_liner->__get((int)1) == total)) || bool((this->_liner->__get((int)5) == total))))){
					HX_STACK_LINE(84)
					this->_win = player;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(86)
				this->_liner[(int)2] = (this->_liner->__get((int)2) + step);
				HX_STACK_LINE(87)
				this->_liner[(int)3] = (this->_liner->__get((int)3) + step);
				HX_STACK_LINE(88)
				this->_liner[(int)7] = (this->_liner->__get((int)7) + step);
				HX_STACK_LINE(89)
				if (((bool((bool((this->_liner->__get((int)2) == total)) || bool((this->_liner->__get((int)3) == total)))) || bool((this->_liner->__get((int)7) == total))))){
					HX_STACK_LINE(89)
					this->_win = player;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(91)
				this->_liner[(int)2] = (this->_liner->__get((int)2) + step);
				HX_STACK_LINE(92)
				this->_liner[(int)4] = (this->_liner->__get((int)4) + step);
				HX_STACK_LINE(93)
				if (((bool((this->_liner->__get((int)2) == total)) || bool((this->_liner->__get((int)4) == total))))){
					HX_STACK_LINE(93)
					this->_win = player;
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(95)
				this->_liner[(int)2] = (this->_liner->__get((int)2) + step);
				HX_STACK_LINE(96)
				this->_liner[(int)5] = (this->_liner->__get((int)5) + step);
				HX_STACK_LINE(97)
				this->_liner[(int)6] = (this->_liner->__get((int)6) + step);
				HX_STACK_LINE(98)
				if (((bool((bool((this->_liner->__get((int)2) == total)) || bool((this->_liner->__get((int)5) == total)))) || bool((this->_liner->__get((int)6) == total))))){
					HX_STACK_LINE(98)
					this->_win = player;
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GridData_obj,winMoveControl,(void))

Void GridData_obj::updateAttackData( ){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","updateAttackData",0x150dce2d,"com.nog.game.model.GridData.updateAttackData","com/nog/game/model/GridData.hx",102,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		Float _g = this->_player2AttackValue = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		this->_player1AttackValue = _g;
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int _g2 = this->_data->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				if (((this->_data->__get(i) < (int)1))){
					HX_STACK_LINE(108)
					switch( (int)(i)){
						case (int)0: {
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								int _g11 = this->getLinerValue((int)0,true);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(110)
								int _g21 = this->getLinerValue((int)3,true);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(110)
								int _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(110)
								int _g4 = this->getLinerValue((int)6,true);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(110)
								int value = (_g3 + _g4);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(110)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(111)
							{
								HX_STACK_LINE(111)
								int _g5 = this->getLinerValue((int)0,false);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(111)
								int _g6 = this->getLinerValue((int)3,false);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(111)
								int _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(111)
								int _g8 = this->getLinerValue((int)6,false);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(111)
								int value = (_g7 + _g8);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(111)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(113)
							{
								HX_STACK_LINE(113)
								int _g9 = this->getLinerValue((int)0,true);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(113)
								int _g10 = this->getLinerValue((int)4,true);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(113)
								int value = (_g9 + _g10);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(113)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(114)
							{
								HX_STACK_LINE(114)
								int _g11 = this->getLinerValue((int)0,false);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(114)
								int _g12 = this->getLinerValue((int)4,false);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(114)
								int value = (_g11 + _g12);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(114)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(116)
							{
								HX_STACK_LINE(116)
								int _g13 = this->getLinerValue((int)0,true);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(116)
								int _g14 = this->getLinerValue((int)5,true);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(116)
								int _g15 = (_g13 + _g14);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(116)
								int _g16 = this->getLinerValue((int)7,true);		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(116)
								int value = (_g15 + _g16);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(116)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								int _g17 = this->getLinerValue((int)0,false);		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(117)
								int _g18 = this->getLinerValue((int)5,false);		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(117)
								int _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(117)
								int _g20 = this->getLinerValue((int)7,false);		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(117)
								int value = (_g19 + _g20);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(117)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								int _g21 = this->getLinerValue((int)1,true);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(119)
								int _g22 = this->getLinerValue((int)3,true);		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(119)
								int value = (_g21 + _g22);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(119)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								int _g23 = this->getLinerValue((int)1,false);		HX_STACK_VAR(_g23,"_g23");
								HX_STACK_LINE(120)
								int _g24 = this->getLinerValue((int)3,false);		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(120)
								int value = (_g23 + _g24);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(120)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								int _g25 = this->getLinerValue((int)1,true);		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(122)
								int _g26 = this->getLinerValue((int)4,true);		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(122)
								int _g27 = (_g25 + _g26);		HX_STACK_VAR(_g27,"_g27");
								HX_STACK_LINE(122)
								int _g28 = this->getLinerValue((int)6,true);		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(122)
								int _g29 = (_g27 + _g28);		HX_STACK_VAR(_g29,"_g29");
								HX_STACK_LINE(122)
								int _g30 = this->getLinerValue((int)7,true);		HX_STACK_VAR(_g30,"_g30");
								HX_STACK_LINE(122)
								int value = (_g29 + _g30);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(122)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								int _g31 = this->getLinerValue((int)1,false);		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(123)
								int _g32 = this->getLinerValue((int)4,false);		HX_STACK_VAR(_g32,"_g32");
								HX_STACK_LINE(123)
								int _g33 = (_g31 + _g32);		HX_STACK_VAR(_g33,"_g33");
								HX_STACK_LINE(123)
								int _g34 = this->getLinerValue((int)6,false);		HX_STACK_VAR(_g34,"_g34");
								HX_STACK_LINE(123)
								int _g35 = (_g33 + _g34);		HX_STACK_VAR(_g35,"_g35");
								HX_STACK_LINE(123)
								int _g36 = this->getLinerValue((int)7,false);		HX_STACK_VAR(_g36,"_g36");
								HX_STACK_LINE(123)
								int value = (_g35 + _g36);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(123)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								int _g37 = this->getLinerValue((int)1,true);		HX_STACK_VAR(_g37,"_g37");
								HX_STACK_LINE(125)
								int _g38 = this->getLinerValue((int)5,true);		HX_STACK_VAR(_g38,"_g38");
								HX_STACK_LINE(125)
								int value = (_g37 + _g38);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(125)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								int _g39 = this->getLinerValue((int)1,false);		HX_STACK_VAR(_g39,"_g39");
								HX_STACK_LINE(126)
								int _g40 = this->getLinerValue((int)5,false);		HX_STACK_VAR(_g40,"_g40");
								HX_STACK_LINE(126)
								int value = (_g39 + _g40);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(126)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								int _g41 = this->getLinerValue((int)2,true);		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(128)
								int _g42 = this->getLinerValue((int)3,true);		HX_STACK_VAR(_g42,"_g42");
								HX_STACK_LINE(128)
								int _g43 = (_g41 + _g42);		HX_STACK_VAR(_g43,"_g43");
								HX_STACK_LINE(128)
								int _g44 = this->getLinerValue((int)7,true);		HX_STACK_VAR(_g44,"_g44");
								HX_STACK_LINE(128)
								int value = (_g43 + _g44);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(128)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								int _g45 = this->getLinerValue((int)2,false);		HX_STACK_VAR(_g45,"_g45");
								HX_STACK_LINE(129)
								int _g46 = this->getLinerValue((int)3,false);		HX_STACK_VAR(_g46,"_g46");
								HX_STACK_LINE(129)
								int _g47 = (_g45 + _g46);		HX_STACK_VAR(_g47,"_g47");
								HX_STACK_LINE(129)
								int _g48 = this->getLinerValue((int)7,false);		HX_STACK_VAR(_g48,"_g48");
								HX_STACK_LINE(129)
								int value = (_g47 + _g48);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(129)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(131)
							{
								HX_STACK_LINE(131)
								int _g49 = this->getLinerValue((int)2,true);		HX_STACK_VAR(_g49,"_g49");
								HX_STACK_LINE(131)
								int _g50 = this->getLinerValue((int)4,true);		HX_STACK_VAR(_g50,"_g50");
								HX_STACK_LINE(131)
								int value = (_g49 + _g50);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(131)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(132)
							{
								HX_STACK_LINE(132)
								int _g51 = this->getLinerValue((int)2,false);		HX_STACK_VAR(_g51,"_g51");
								HX_STACK_LINE(132)
								int _g52 = this->getLinerValue((int)4,false);		HX_STACK_VAR(_g52,"_g52");
								HX_STACK_LINE(132)
								int value = (_g51 + _g52);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(132)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								int _g53 = this->getLinerValue((int)2,true);		HX_STACK_VAR(_g53,"_g53");
								HX_STACK_LINE(134)
								int _g54 = this->getLinerValue((int)5,true);		HX_STACK_VAR(_g54,"_g54");
								HX_STACK_LINE(134)
								int _g55 = (_g53 + _g54);		HX_STACK_VAR(_g55,"_g55");
								HX_STACK_LINE(134)
								int _g56 = this->getLinerValue((int)6,true);		HX_STACK_VAR(_g56,"_g56");
								HX_STACK_LINE(134)
								int value = (_g55 + _g56);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(134)
								this->_player1AttackData[i] = value;
							}
							HX_STACK_LINE(135)
							{
								HX_STACK_LINE(135)
								int _g57 = this->getLinerValue((int)2,false);		HX_STACK_VAR(_g57,"_g57");
								HX_STACK_LINE(135)
								int _g58 = this->getLinerValue((int)5,false);		HX_STACK_VAR(_g58,"_g58");
								HX_STACK_LINE(135)
								int _g59 = (_g57 + _g58);		HX_STACK_VAR(_g59,"_g59");
								HX_STACK_LINE(135)
								int _g60 = this->getLinerValue((int)6,false);		HX_STACK_VAR(_g60,"_g60");
								HX_STACK_LINE(135)
								int value = (_g59 + _g60);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(135)
								this->_player2AttackData[i] = value;
							}
						}
						;break;
					}
					HX_STACK_LINE(137)
					hx::AddEq(this->_player1AttackValue,this->_player1AttackData->__get(i));
					HX_STACK_LINE(138)
					hx::AddEq(this->_player2AttackValue,this->_player2AttackData->__get(i));
				}
				else{
					HX_STACK_LINE(140)
					int value = this->_player2AttackData[i] = (int)0;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(140)
					this->_player1AttackData[i] = value;
				}
			}
		}
		HX_STACK_LINE(144)
		hx::DivEq(this->_player1AttackValue,this->_tileToPlay);
		HX_STACK_LINE(145)
		hx::DivEq(this->_player2AttackValue,this->_tileToPlay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,updateAttackData,(void))

int GridData_obj::getLinerValue( int index,bool player1){
	HX_STACK_FRAME("com.nog.game.model.GridData","getLinerValue",0x6463f4d7,"com.nog.game.model.GridData.getLinerValue","com/nog/game/model/GridData.hx",150,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(player1,"player1")
	HX_STACK_LINE(150)
	int _g = this->_liner->__get(index);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	switch( (int)(_g)){
		case (int)0: {
			HX_STACK_LINE(152)
			return (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(154)
			if (((player1 == true))){
				HX_STACK_LINE(154)
				return (int)3;
			}
			HX_STACK_LINE(155)
			return (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(157)
			if (((player1 == true))){
				HX_STACK_LINE(157)
				return (int)10;
			}
			HX_STACK_LINE(158)
			return (int)0;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(160)
			if (((player1 == true))){
				HX_STACK_LINE(160)
				return (int)0;
			}
			HX_STACK_LINE(161)
			return (int)3;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(163)
			return (int)0;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(165)
			if (((player1 == true))){
				HX_STACK_LINE(165)
				return (int)0;
			}
			HX_STACK_LINE(166)
			return (int)10;
		}
		;break;
		default: {
			HX_STACK_LINE(168)
			return (int)0;
		}
	}
	HX_STACK_LINE(150)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(GridData_obj,getLinerValue,return )

bool GridData_obj::dig( int tile){
	HX_STACK_FRAME("com.nog.game.model.GridData","dig",0x109f3fd0,"com.nog.game.model.GridData.dig","com/nog/game/model/GridData.hx",173,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(173)
	if (((this->_data->__get(tile) == (int)-1))){
		HX_STACK_LINE(174)
		(this->_tileToDig)--;
		HX_STACK_LINE(175)
		this->_data[tile] = (int)0;
		HX_STACK_LINE(176)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		Float _g1 = (_g * (int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(176)
		int _g3 = ((int)1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(176)
		hx::AddEq(this->_matter,_g3);
		HX_STACK_LINE(177)
		Float _g4 = ::Math_obj::random();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(177)
		int _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(177)
		if (((_g4 > 0.95))){
			HX_STACK_LINE(177)
			_g5 = (int)1;
		}
		else{
			HX_STACK_LINE(177)
			_g5 = (int)0;
		}
		HX_STACK_LINE(177)
		hx::AddEq(this->_power,_g5);
		HX_STACK_LINE(178)
		return true;
	}
	else{
		HX_STACK_LINE(180)
		return false;
	}
	HX_STACK_LINE(173)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GridData_obj,dig,return )

Void GridData_obj::removeDirt( ){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","removeDirt",0xce752c1d,"com.nog.game.model.GridData.removeDirt","com/nog/game/model/GridData.hx",186,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->_tileToDig = (int)0;
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(188)
			int _g = this->_data->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(188)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(188)
				this->_data[i] = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,removeDirt,(void))

bool GridData_obj::play( int tile,int player){
	HX_STACK_FRAME("com.nog.game.model.GridData","play",0x82a967a6,"com.nog.game.model.GridData.play","com/nog/game/model/GridData.hx",191,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(player,"player")
	HX_STACK_LINE(192)
	int _g = this->_power = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	this->_matter = _g;
	HX_STACK_LINE(194)
	if (((this->_data->__get(tile) == (int)0))){
		HX_STACK_LINE(195)
		(this->_tileToPlay)--;
		HX_STACK_LINE(196)
		this->_data[tile] = player;
		HX_STACK_LINE(197)
		this->winMoveControl(tile,player,null());
		HX_STACK_LINE(198)
		if (((this->_win == (int)0))){
			HX_STACK_LINE(199)
			this->updateAttackData();
			HX_STACK_LINE(200)
			if ((((this->_tileToPlay + this->_tileToDig) == (int)0))){
				HX_STACK_LINE(201)
				this->_win = (int)3;
			}
		}
		else{
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(204)
				int _g2 = this->_player1AttackData->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(205)
						int value = this->_player2AttackData[i] = (int)0;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(205)
						this->_player1AttackData[i] = value;
					}
				}
			}
			HX_STACK_LINE(207)
			Float _g1 = this->_player2AttackValue = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			this->_player1AttackValue = _g1;
		}
		HX_STACK_LINE(209)
		return true;
	}
	else{
		HX_STACK_LINE(211)
		return this->dig(tile);
	}
	HX_STACK_LINE(213)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(GridData_obj,play,return )

Array< int > GridData_obj::shovel( int grid,int shovelLine){
	HX_STACK_FRAME("com.nog.game.model.GridData","shovel",0x7c45ee95,"com.nog.game.model.GridData.shovel","com/nog/game/model/GridData.hx",216,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_ARG(shovelLine,"shovelLine")
	HX_STACK_LINE(217)
	int _g = this->_power = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(217)
	this->_matter = _g;
	HX_STACK_LINE(218)
	Array< int > result;		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/model/GridData.hx",218,0x5bf846c2)
			{
				HX_STACK_LINE(218)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(218)
				Array< int > _g1 = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(218)
				this1 = _g1;
				HX_STACK_LINE(218)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	result = _Function_1_1::Block();
	HX_STACK_LINE(219)
	switch( (int)(shovelLine)){
		case (int)0: case (int)3: case (int)6: {
			HX_STACK_LINE(221)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(222)
				bool _g2 = this->dig(i);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(222)
				if (((_g2 == true))){
					HX_STACK_LINE(223)
					result->push(grid);
					HX_STACK_LINE(224)
					result->push(i);
				}
			}
		}
		;break;
		case (int)1: case (int)4: case (int)7: {
			HX_STACK_LINE(228)
			int _g1 = (int)3;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(228)
			while((true)){
				HX_STACK_LINE(228)
				if ((!(((_g1 < (int)6))))){
					HX_STACK_LINE(228)
					break;
				}
				HX_STACK_LINE(228)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(229)
				bool _g3 = this->dig(i);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(229)
				if (((_g3 == true))){
					HX_STACK_LINE(230)
					result->push(grid);
					HX_STACK_LINE(231)
					result->push(i);
				}
			}
		}
		;break;
		case (int)2: case (int)5: case (int)8: {
			HX_STACK_LINE(235)
			int _g1 = (int)6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				if ((!(((_g1 < (int)9))))){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				bool _g4 = this->dig(i);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(236)
				if (((_g4 == true))){
					HX_STACK_LINE(237)
					result->push(grid);
					HX_STACK_LINE(238)
					result->push(i);
				}
			}
		}
		;break;
		case (int)9: case (int)12: case (int)15: {
			HX_STACK_LINE(242)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(243)
				bool _g5 = this->dig((i * (int)3));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(243)
				if (((_g5 == true))){
					HX_STACK_LINE(244)
					result->push(grid);
					HX_STACK_LINE(245)
					result->push((i * (int)3));
				}
			}
		}
		;break;
		case (int)10: case (int)13: case (int)16: {
			HX_STACK_LINE(249)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(250)
				bool _g6 = this->dig(((int)1 + (i * (int)3)));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(250)
				if (((_g6 == true))){
					HX_STACK_LINE(251)
					result->push(grid);
					HX_STACK_LINE(252)
					result->push(((int)1 + (i * (int)3)));
				}
			}
		}
		;break;
		case (int)11: case (int)14: case (int)17: {
			HX_STACK_LINE(256)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(257)
				bool _g7 = this->dig(((int)2 + (i * (int)3)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(257)
				if (((_g7 == true))){
					HX_STACK_LINE(258)
					result->push(grid);
					HX_STACK_LINE(259)
					result->push(((int)2 + (i * (int)3)));
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(263)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(GridData_obj,shovel,return )

Void GridData_obj::explode( int tile,int player){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","explode",0xed461d6f,"com.nog.game.model.GridData.explode","com/nog/game/model/GridData.hx",266,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(267)
		this->_data[tile] = (int)0;
		HX_STACK_LINE(268)
		player = hx::Mod(((player + (int)1)),(int)2);
		HX_STACK_LINE(269)
		this->winMoveControl(tile,(player + (int)1),true);
		HX_STACK_LINE(270)
		this->updateAttackData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GridData_obj,explode,(void))

Void GridData_obj::reset( ){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","reset",0xf3cb8bdd,"com.nog.game.model.GridData.reset","com/nog/game/model/GridData.hx",273,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(274)
		this->init();
		HX_STACK_LINE(275)
		this->removeDirt();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,reset,(void))

Void GridData_obj::showData( ){
{
		HX_STACK_FRAME("com.nog.game.model.GridData","showData",0x0a1d1479,"com.nog.game.model.GridData.showData","com/nog/game/model/GridData.hx",278,0x5bf846c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(279)
		::String _g = this->_data->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		::haxe::Log_obj::trace(_g,hx::SourceInfo(HX_CSTRING("GridData.hx"),279,HX_CSTRING("com.nog.game.model.GridData"),HX_CSTRING("showData")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,showData,(void))

int GridData_obj::getData( int tile){
	HX_STACK_FRAME("com.nog.game.model.GridData","getData",0xdac8676e,"com.nog.game.model.GridData.getData","com/nog/game/model/GridData.hx",284,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(284)
	return this->_data->__get(tile);
}


HX_DEFINE_DYNAMIC_FUNC1(GridData_obj,getData,return )

int GridData_obj::getMatter( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getMatter",0x0488a185,"com.nog.game.model.GridData.getMatter","com/nog/game/model/GridData.hx",285,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	return this->_matter;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getMatter,return )

int GridData_obj::getPower( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getPower",0x86a45641,"com.nog.game.model.GridData.getPower","com/nog/game/model/GridData.hx",286,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	return this->_power;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getPower,return )

int GridData_obj::getWin( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getWin",0xf9006b58,"com.nog.game.model.GridData.getWin","com/nog/game/model/GridData.hx",287,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return this->_win;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getWin,return )

bool GridData_obj::getTileToPlay( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getTileToPlay",0x4f65cb21,"com.nog.game.model.GridData.getTileToPlay","com/nog/game/model/GridData.hx",288,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	return (this->_tileToPlay > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getTileToPlay,return )

bool GridData_obj::getDirtToDig( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getDirtToDig",0x840fc6bc,"com.nog.game.model.GridData.getDirtToDig","com/nog/game/model/GridData.hx",289,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(289)
	return (this->_tileToDig > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getDirtToDig,return )

int GridData_obj::getTileToPlayNum( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getTileToPlayNum",0xe216b5a5,"com.nog.game.model.GridData.getTileToPlayNum","com/nog/game/model/GridData.hx",290,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return this->_tileToPlay;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getTileToPlayNum,return )

Array< int > GridData_obj::getP1AttData( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getP1AttData",0x3f386f66,"com.nog.game.model.GridData.getP1AttData","com/nog/game/model/GridData.hx",291,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	return this->_player1AttackData;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getP1AttData,return )

Float GridData_obj::getP1AttValue( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getP1AttValue",0x6f597ab5,"com.nog.game.model.GridData.getP1AttValue","com/nog/game/model/GridData.hx",292,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	return this->_player1AttackValue;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getP1AttValue,return )

Array< int > GridData_obj::getP2AttData( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getP2AttData",0x786ae185,"com.nog.game.model.GridData.getP2AttData","com/nog/game/model/GridData.hx",293,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	return this->_player2AttackData;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getP2AttData,return )

Float GridData_obj::getP2AttValue( ){
	HX_STACK_FRAME("com.nog.game.model.GridData","getP2AttValue",0x424ae3b6,"com.nog.game.model.GridData.getP2AttValue","com/nog/game/model/GridData.hx",294,0x5bf846c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	return this->_player2AttackValue;
}


HX_DEFINE_DYNAMIC_FUNC0(GridData_obj,getP2AttValue,return )


GridData_obj::GridData_obj()
{
}

void GridData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GridData);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_liner,"_liner");
	HX_MARK_MEMBER_NAME(_player1AttackData,"_player1AttackData");
	HX_MARK_MEMBER_NAME(_player2AttackData,"_player2AttackData");
	HX_MARK_MEMBER_NAME(_player1AttackValue,"_player1AttackValue");
	HX_MARK_MEMBER_NAME(_player2AttackValue,"_player2AttackValue");
	HX_MARK_MEMBER_NAME(_tileToPlay,"_tileToPlay");
	HX_MARK_MEMBER_NAME(_win,"_win");
	HX_MARK_MEMBER_NAME(_tileToDig,"_tileToDig");
	HX_MARK_MEMBER_NAME(_matter,"_matter");
	HX_MARK_MEMBER_NAME(_power,"_power");
	HX_MARK_END_CLASS();
}

void GridData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_liner,"_liner");
	HX_VISIT_MEMBER_NAME(_player1AttackData,"_player1AttackData");
	HX_VISIT_MEMBER_NAME(_player2AttackData,"_player2AttackData");
	HX_VISIT_MEMBER_NAME(_player1AttackValue,"_player1AttackValue");
	HX_VISIT_MEMBER_NAME(_player2AttackValue,"_player2AttackValue");
	HX_VISIT_MEMBER_NAME(_tileToPlay,"_tileToPlay");
	HX_VISIT_MEMBER_NAME(_win,"_win");
	HX_VISIT_MEMBER_NAME(_tileToDig,"_tileToDig");
	HX_VISIT_MEMBER_NAME(_matter,"_matter");
	HX_VISIT_MEMBER_NAME(_power,"_power");
}

Dynamic GridData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dig") ) { return dig_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { return _win; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_liner") ) { return _liner; }
		if (HX_FIELD_EQ(inName,"_power") ) { return _power; }
		if (HX_FIELD_EQ(inName,"shovel") ) { return shovel_dyn(); }
		if (HX_FIELD_EQ(inName,"getWin") ) { return getWin_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { return _matter; }
		if (HX_FIELD_EQ(inName,"explode") ) { return explode_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showData") ) { return showData_dyn(); }
		if (HX_FIELD_EQ(inName,"getPower") ) { return getPower_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatter") ) { return getMatter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileToDig") ) { return _tileToDig; }
		if (HX_FIELD_EQ(inName,"removeDirt") ) { return removeDirt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileToPlay") ) { return _tileToPlay; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getDirtToDig") ) { return getDirtToDig_dyn(); }
		if (HX_FIELD_EQ(inName,"getP1AttData") ) { return getP1AttData_dyn(); }
		if (HX_FIELD_EQ(inName,"getP2AttData") ) { return getP2AttData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLinerValue") ) { return getLinerValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileToPlay") ) { return getTileToPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"getP1AttValue") ) { return getP1AttValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getP2AttValue") ) { return getP2AttValue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"winMoveControl") ) { return winMoveControl_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAttackData") ) { return updateAttackData_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileToPlayNum") ) { return getTileToPlayNum_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_player1AttackData") ) { return _player1AttackData; }
		if (HX_FIELD_EQ(inName,"_player2AttackData") ) { return _player2AttackData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_player1AttackValue") ) { return _player1AttackValue; }
		if (HX_FIELD_EQ(inName,"_player2AttackValue") ) { return _player2AttackValue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GridData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { _win=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_liner") ) { _liner=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_power") ) { _power=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matter") ) { _matter=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileToDig") ) { _tileToDig=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileToPlay") ) { _tileToPlay=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_player1AttackData") ) { _player1AttackData=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_player2AttackData") ) { _player2AttackData=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_player1AttackValue") ) { _player1AttackValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_player2AttackValue") ) { _player2AttackValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_liner"));
	outFields->push(HX_CSTRING("_player1AttackData"));
	outFields->push(HX_CSTRING("_player2AttackData"));
	outFields->push(HX_CSTRING("_player1AttackValue"));
	outFields->push(HX_CSTRING("_player2AttackValue"));
	outFields->push(HX_CSTRING("_tileToPlay"));
	outFields->push(HX_CSTRING("_win"));
	outFields->push(HX_CSTRING("_tileToDig"));
	outFields->push(HX_CSTRING("_matter"));
	outFields->push(HX_CSTRING("_power"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GridData_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GridData_obj,_liner),HX_CSTRING("_liner")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GridData_obj,_player1AttackData),HX_CSTRING("_player1AttackData")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GridData_obj,_player2AttackData),HX_CSTRING("_player2AttackData")},
	{hx::fsFloat,(int)offsetof(GridData_obj,_player1AttackValue),HX_CSTRING("_player1AttackValue")},
	{hx::fsFloat,(int)offsetof(GridData_obj,_player2AttackValue),HX_CSTRING("_player2AttackValue")},
	{hx::fsInt,(int)offsetof(GridData_obj,_tileToPlay),HX_CSTRING("_tileToPlay")},
	{hx::fsInt,(int)offsetof(GridData_obj,_win),HX_CSTRING("_win")},
	{hx::fsInt,(int)offsetof(GridData_obj,_tileToDig),HX_CSTRING("_tileToDig")},
	{hx::fsInt,(int)offsetof(GridData_obj,_matter),HX_CSTRING("_matter")},
	{hx::fsInt,(int)offsetof(GridData_obj,_power),HX_CSTRING("_power")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_data"),
	HX_CSTRING("_liner"),
	HX_CSTRING("_player1AttackData"),
	HX_CSTRING("_player2AttackData"),
	HX_CSTRING("_player1AttackValue"),
	HX_CSTRING("_player2AttackValue"),
	HX_CSTRING("_tileToPlay"),
	HX_CSTRING("_win"),
	HX_CSTRING("_tileToDig"),
	HX_CSTRING("_matter"),
	HX_CSTRING("_power"),
	HX_CSTRING("init"),
	HX_CSTRING("winMoveControl"),
	HX_CSTRING("updateAttackData"),
	HX_CSTRING("getLinerValue"),
	HX_CSTRING("dig"),
	HX_CSTRING("removeDirt"),
	HX_CSTRING("play"),
	HX_CSTRING("shovel"),
	HX_CSTRING("explode"),
	HX_CSTRING("reset"),
	HX_CSTRING("showData"),
	HX_CSTRING("getData"),
	HX_CSTRING("getMatter"),
	HX_CSTRING("getPower"),
	HX_CSTRING("getWin"),
	HX_CSTRING("getTileToPlay"),
	HX_CSTRING("getDirtToDig"),
	HX_CSTRING("getTileToPlayNum"),
	HX_CSTRING("getP1AttData"),
	HX_CSTRING("getP1AttValue"),
	HX_CSTRING("getP2AttData"),
	HX_CSTRING("getP2AttValue"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridData_obj::__mClass,"__mClass");
};

#endif

Class GridData_obj::__mClass;

void GridData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.model.GridData"), hx::TCanCast< GridData_obj> ,sStaticFields,sMemberFields,
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

void GridData_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model
