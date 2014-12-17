package com.nog.game.vo;

import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */
class Infos
{
	static var _tuto:Vector<Vector<String>>;
	static var _help:Vector<Vector<String>>;
	static var _powers:Vector<Vector<String>>;
	
	static public inline var CHOOSE_GRID:String = "chooseGrid";
	
	static private function init() {
		
		_help = new Vector<Vector<String>>();
		_help.push(Vector.ofArray(["Choosing","Choose the next playing grid for your opponent"]));
		
		_powers = new Vector<Vector<String>>();
		_powers.push(Vector.ofArray(["Shovel", "Dig an entire Line on the field"]));
		_powers.push(Vector.ofArray(["T.N.T.","Destroy one of the opponent construction"]));
		_powers.push(Vector.ofArray(["Special","Special"]));
	}
	
	//PUBLIC FUNCTIONS
	static public function getPower(num:Int):Vector<String> {
		if (_powers == null) {
			init();
		}
		return(_powers[num - 1]);
	}
	
	static public function getHelp(help:String):Vector<String> {
		if (_help == null) {
			init();
		}
		switch(help) {
			case CHOOSE_GRID:
				return(_help[0]);
		}
		return(_help[0]);
	}
	
}