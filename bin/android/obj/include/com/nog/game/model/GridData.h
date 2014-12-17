#ifndef INCLUDED_com_nog_game_model_GridData
#define INCLUDED_com_nog_game_model_GridData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,nog,game,model,GridData)
namespace com{
namespace nog{
namespace game{
namespace model{


class HXCPP_CLASS_ATTRIBUTES  GridData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GridData_obj OBJ_;
		GridData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GridData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GridData"); }

		Array< int > _data;
		Array< int > _liner;
		Array< int > _player1AttackData;
		Array< int > _player2AttackData;
		Float _player1AttackValue;
		Float _player2AttackValue;
		int _tileToPlay;
		int _win;
		int _tileToDig;
		int _matter;
		int _power;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void winMoveControl( int tile,int player,Dynamic explosion);
		Dynamic winMoveControl_dyn();

		virtual Void updateAttackData( );
		Dynamic updateAttackData_dyn();

		virtual int getLinerValue( int index,bool player1);
		Dynamic getLinerValue_dyn();

		virtual bool dig( int tile);
		Dynamic dig_dyn();

		virtual Void removeDirt( );
		Dynamic removeDirt_dyn();

		virtual bool play( int tile,int player);
		Dynamic play_dyn();

		virtual Array< int > shovel( int grid,int shovelLine);
		Dynamic shovel_dyn();

		virtual Void explode( int tile,int player);
		Dynamic explode_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void showData( );
		Dynamic showData_dyn();

		virtual int getData( int tile);
		Dynamic getData_dyn();

		virtual int getMatter( );
		Dynamic getMatter_dyn();

		virtual int getPower( );
		Dynamic getPower_dyn();

		virtual int getWin( );
		Dynamic getWin_dyn();

		virtual bool getTileToPlay( );
		Dynamic getTileToPlay_dyn();

		virtual bool getDirtToDig( );
		Dynamic getDirtToDig_dyn();

		virtual int getTileToPlayNum( );
		Dynamic getTileToPlayNum_dyn();

		virtual Array< int > getP1AttData( );
		Dynamic getP1AttData_dyn();

		virtual Float getP1AttValue( );
		Dynamic getP1AttValue_dyn();

		virtual Array< int > getP2AttData( );
		Dynamic getP2AttData_dyn();

		virtual Float getP2AttValue( );
		Dynamic getP2AttValue_dyn();

};

} // end namespace com
} // end namespace nog
} // end namespace game
} // end namespace model

#endif /* INCLUDED_com_nog_game_model_GridData */ 
