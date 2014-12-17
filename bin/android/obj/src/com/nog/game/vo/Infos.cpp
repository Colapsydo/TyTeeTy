#include <hxcpp.h>

#ifndef INCLUDED_com_nog_game_vo_Infos
#include <com/nog/game/vo/Infos.h>
#endif
namespace com{
namespace nog{
namespace game{
namespace vo{

Void Infos_obj::__construct()
{
	return null();
}

//Infos_obj::~Infos_obj() { }

Dynamic Infos_obj::__CreateEmpty() { return  new Infos_obj; }
hx::ObjectPtr< Infos_obj > Infos_obj::__new()
{  hx::ObjectPtr< Infos_obj > result = new Infos_obj();
	result->__construct();
	return result;}

Dynamic Infos_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Infos_obj > result = new Infos_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > Infos_obj::_tuto;

Array< ::Dynamic > Infos_obj::_help;

Array< ::Dynamic > Infos_obj::_powers;

Void Infos_obj::init( ){
{
		HX_STACK_FRAME("com.nog.game.vo.Infos","init",0x4ad04687,"com.nog.game.vo.Infos.init","com/nog/game/vo/Infos.hx",15,0xc5a0d9e9)
		HX_STACK_LINE(16)
		Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",16,0xc5a0d9e9)
				{
					HX_STACK_LINE(16)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(16)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(16)
					this1 = _g;
					HX_STACK_LINE(16)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(16)
		_g1 = _Function_1_1::Block();
		HX_STACK_LINE(16)
		::com::nog::game::vo::Infos_obj::_powers = _g1;
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			Array< ::String > x;		HX_STACK_VAR(x,"x");
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",17,0xc5a0d9e9)
					{
						HX_STACK_LINE(17)
						Array< ::String > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< ::String > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",17,0xc5a0d9e9)
								{
									HX_STACK_LINE(17)
									Array< ::String > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(17)
									Array< ::String > _g2 = Array_obj< ::String >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(17)
									this2 = _g2;
									HX_STACK_LINE(17)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(17)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(17)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("Shovel")).Add(HX_CSTRING("Dig an entire Line on the field"))));
					}
					return null();
				}
			};
			HX_STACK_LINE(17)
			x = _Function_2_1::Block();
			HX_STACK_LINE(17)
			::com::nog::game::vo::Infos_obj::_powers->push(x);
		}
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			Array< ::String > x;		HX_STACK_VAR(x,"x");
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",18,0xc5a0d9e9)
					{
						HX_STACK_LINE(18)
						Array< ::String > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< ::String > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",18,0xc5a0d9e9)
								{
									HX_STACK_LINE(18)
									Array< ::String > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(18)
									Array< ::String > _g3 = Array_obj< ::String >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(18)
									this2 = _g3;
									HX_STACK_LINE(18)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(18)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(18)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("T.N.T.")).Add(HX_CSTRING("Destroy one of the opponent construction"))));
					}
					return null();
				}
			};
			HX_STACK_LINE(18)
			x = _Function_2_1::Block();
			HX_STACK_LINE(18)
			::com::nog::game::vo::Infos_obj::_powers->push(x);
		}
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			Array< ::String > x;		HX_STACK_VAR(x,"x");
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",19,0xc5a0d9e9)
					{
						HX_STACK_LINE(19)
						Array< ::String > this1;		HX_STACK_VAR(this1,"this1");
						struct _Function_3_1{
							inline static Array< ::String > Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/nog/game/vo/Infos.hx",19,0xc5a0d9e9)
								{
									HX_STACK_LINE(19)
									Array< ::String > this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(19)
									Array< ::String > _g4 = Array_obj< ::String >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(19)
									this2 = _g4;
									HX_STACK_LINE(19)
									return this2;
								}
								return null();
							}
						};
						HX_STACK_LINE(19)
						this1 = _Function_3_1::Block();
						HX_STACK_LINE(19)
						return this1->concat(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("Special")).Add(HX_CSTRING("Special"))));
					}
					return null();
				}
			};
			HX_STACK_LINE(19)
			x = _Function_2_1::Block();
			HX_STACK_LINE(19)
			::com::nog::game::vo::Infos_obj::_powers->push(x);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Infos_obj,init,(void))

Array< ::String > Infos_obj::getPower( int num){
	HX_STACK_FRAME("com.nog.game.vo.Infos","getPower",0xc716ee86,"com.nog.game.vo.Infos.getPower","com/nog/game/vo/Infos.hx",23,0xc5a0d9e9)
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(24)
	if (((::com::nog::game::vo::Infos_obj::_powers == null()))){
		HX_STACK_LINE(25)
		::com::nog::game::vo::Infos_obj::init();
	}
	HX_STACK_LINE(27)
	return ::com::nog::game::vo::Infos_obj::_powers->__get((num - (int)1)).StaticCast< Array< ::String > >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Infos_obj,getPower,return )


Infos_obj::Infos_obj()
{
}

Dynamic Infos_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tuto") ) { return _tuto; }
		if (HX_FIELD_EQ(inName,"_help") ) { return _help; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_powers") ) { return _powers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPower") ) { return getPower_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Infos_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tuto") ) { _tuto=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_help") ) { _help=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_powers") ) { _powers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Infos_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_tuto"),
	HX_CSTRING("_help"),
	HX_CSTRING("_powers"),
	HX_CSTRING("init"),
	HX_CSTRING("getPower"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Infos_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Infos_obj::_tuto,"_tuto");
	HX_MARK_MEMBER_NAME(Infos_obj::_help,"_help");
	HX_MARK_MEMBER_NAME(Infos_obj::_powers,"_powers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Infos_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Infos_obj::_tuto,"_tuto");
	HX_VISIT_MEMBER_NAME(Infos_obj::_help,"_help");
	HX_VISIT_MEMBER_NAME(Infos_obj::_powers,"_powers");
};

#endif

Class Infos_obj::__mClass;

void Infos_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nog.game.vo.Infos"), hx::TCanCast< Infos_obj> ,sStaticFields,sMemberFields,
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

void Infos_obj::__boot()
{
}

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace vo
