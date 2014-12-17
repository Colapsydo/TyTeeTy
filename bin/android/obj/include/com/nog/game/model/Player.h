#ifndef INCLUDED_com_nog_game_model_Player
#define INCLUDED_com_nog_game_model_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,nog,game,model,GridData)
HX_DECLARE_CLASS4(com,nog,game,model,Player)
namespace com{
namespace nog{
namespace game{
namespace model{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(int type,bool p1,bool cpu,Array< ::Dynamic > gridData);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player_obj > __new(int type,bool p1,bool cpu,Array< ::Dynamic > gridData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		int _type;
		bool _p1;
		bool _cpu;
		Float _coeffAttackGrid;
		Float _coeffDefenseGrid;
		Float _coeffAttackBoard;
		Float _coeffDefenseBoard;
		Array< ::Dynamic > _data;
		Array< int > _dataAttackGrid;
		Array< int > _dataDefenseGrid;
		Array< int > _dataAttackBoard;
		Array< int > _dataDefenseBoard;
		int _choosenTile;
		int _transferedMatter;
		int _transferedPower;
		int _matter;
		int _power;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Float attackBoard( int tile);
		Dynamic attackBoard_dyn();

		virtual Void play( int grid);
		Dynamic play_dyn();

		virtual Void payConstruction( );
		Dynamic payConstruction_dyn();

		virtual Void usePower( );
		Dynamic usePower_dyn();

		virtual Void giveRessources( int transferedMatter,int transferedPower);
		Dynamic giveRessources_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		virtual bool getCPU( );
		Dynamic getCPU_dyn();

		virtual int getMatter( );
		Dynamic getMatter_dyn();

		virtual int getPower( );
		Dynamic getPower_dyn();

		virtual int getTransMatter( );
		Dynamic getTransMatter_dyn();

		virtual int getTransPower( );
		Dynamic getTransPower_dyn();

		virtual int getChoosenTile( );
		Dynamic getChoosenTile_dyn();

		static Float _ag;
		static Float _dg;
		static Float _ab;
		static Float _db;
		static int _calIndex;
		static Array< Float > _calList;
		static Void readFactors( );
		static Dynamic readFactors_dyn();

		static Void factorUpdate( );
		static Dynamic factorUpdate_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model

#endif /* INCLUDED_com_nog_game_model_Player */ 
