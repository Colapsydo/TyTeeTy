#ifndef INCLUDED_com_nog_game_vo_Infos
#define INCLUDED_com_nog_game_vo_Infos

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,nog,game,vo,Infos)
namespace com{
namespace nog{
namespace game{
namespace vo{


class HXCPP_CLASS_ATTRIBUTES  Infos_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Infos_obj OBJ_;
		Infos_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Infos_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Infos_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Infos"); }

		static Array< ::Dynamic > _tuto;
		static Array< ::Dynamic > _help;
		static Array< ::Dynamic > _powers;
		static Void init( );
		static Dynamic init_dyn();

		static Array< ::String > getPower( int num);
		static Dynamic getPower_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace vo

#endif /* INCLUDED_com_nog_game_vo_Infos */ 
