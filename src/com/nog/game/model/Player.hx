package com.nog.game.model;

import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */
class Player
{
	var _type:Int; //character and bonus
	var _p1:Bool;
	var _cpu:Bool;
	
	var _coeffAttackGrid:Float;
	var _coeffDefenseGrid:Float;
	var _coeffAttackBoard:Float;
	var _coeffDefenseBoard:Float;
	
	var _data:Vector<GridData>; //all grid data
	
	var _dataAttackGrid:Vector<Int>;
	var _dataDefenseGrid:Vector<Int>;
	var _dataAttackBoard:Vector<Int>;
	var _dataDefenseBoard:Vector<Int>;
	
	var _choosenGrid:Int;
	var _choosenTile:Int;
	
	var _transferedMatter:Int;
	var _transferedPower:Int;
	var _matter:Int;
	var _power:Int;
	
	//AI CALIBRATION
	static var _ag:Float = .2;
	static var _dg:Float = .3;
	static var _ab:Float = .1;
	static var _db:Float = .4;
	
	static var _calIndex:Int = 0;
	static var _calList:Vector<Float> = Vector.ofArray([]);
	
	static public function readFactors():Void {
		trace(_ag, _dg, _ab, _db);
	}
	
	static public function factorUpdate():Void {
		if (_dg >= 1 - _ag) { //if AG series over
			//_ag += 0.05;
			_ag += 0.1;
			_dg = 0;
			_ab = 0;
			_db = 1 - (_ag + _dg + _ab);
		}else {
			if (_db <= 0.0) { //if DG series over
				//_dg += 0.05;
				_dg += 0.1;
				_ab = 0;
				_db = 1 - (_ag + _dg + _ab);
			}else {
				//_ab += 0.05;
				_ab += 0.1;
				_db = 1 - (_ag + _dg + _ab);
			}
		}
		
		//_calIndex++;
		//var start:Int = _calIndex * 4;
		//_ag = _calList[start];
		//_dg = _calList[1+start];
		//_ab = _calList[2+start];
		//_db = _calList[3+start];
	}
	//END AI CALIBRATIONS
	
	public function new(type:Int, p1:Bool, cpu:Bool, gridData:Vector<GridData>) {
		_type = type;
		_p1 = p1;
		_cpu = cpu;
		_data = gridData;
		init();
	}
	
	function init():Void{
		switch(_type) {
			case 0:
				_coeffAttackGrid = .25;
				_coeffDefenseGrid = .25;
				_coeffAttackBoard = .25;
				_coeffDefenseBoard = .25;
			case 1:
				_coeffAttackGrid = _ag;
				_coeffDefenseGrid = _dg;
				_coeffAttackBoard = _ab;
				_coeffDefenseBoard = _db;
		}
		
		//test
		//if (_cpu == false) {
			//_power = 2;
		//}
	}
	
	//PRIVATE FUNCTION 
	
	inline function attackBoard(tile:Int):Float {
		if (_data[tile].getWin() == 0) { //if target grid is playable
			var opponentAttack:Vector<Int> = _p1 == true ? _data[tile].getP2AttData() : _data[tile].getP1AttData(); //opponent attack value for target grid
			var score:Float = 0;
			var maxScore:Float = -1000;
			var result:Float=0;
			var chance:Float = 0;
			
			for (i in 0...opponentAttack.length) {
				score = opponentAttack[i];
				if (score >= maxScore) {
					if (score > maxScore) {
						result = _p1 == true ? (_data[i].getP1AttValue()+_data[9].getP1AttData()[i])*.5 : (_data[i].getP2AttValue()+_data[9].getP2AttData()[i])*.5;
						chance = 1;
						maxScore = score;
					}else {
						result += _p1 == true ? (_data[i].getP1AttValue()+_data[9].getP1AttData()[i])*.5 : (_data[i].getP2AttValue()+_data[9].getP2AttData()[i])*.5;
						chance++;
					}
				}
			}
			//trace(result / chance);
			return(result/chance);
		}
		return(0);
	}
	
	//PUBLIC FUNCTIONS
	
	public function play(grid:Int):Void {
		//var time:Float = Date.now().getTime();
		var playGrid:GridData = _data[grid];
		var dirtGridDefense:Int;
		var targetDefenseValue:Float;
		var score:Float = 0;
		var maxScore:Float = -1000; //since defenseBoard could become realy negative 
		var moves:Vector<Int> = new Vector<Int>();
		
		_dataAttackGrid = _p1 == true ? _data[grid].getP1AttData() : _data[grid].getP2AttData();
		_dataDefenseGrid = _p1 == true ? _data[grid].getP2AttData() : _data[grid].getP1AttData();
		_dataAttackBoard = _p1 == true ? _data[9].getP1AttData() : _data[9].getP2AttData();
		_dataDefenseBoard = _p1 == true ? _data[9].getP2AttData() : _data[9].getP1AttData();
		
		//add a board grid to weight each decision for board attack and board defense
		//trace("grid",grid);
		for (i in 0..._dataAttackGrid.length) {
			if ((playGrid.getData(i) == 0 && _matter > 0) || playGrid.getData(i) == -1) {
				
				dirtGridDefense = playGrid.getData(i) == -1 ? 0 : 1; //if tile is dirt, then defense not needed
				targetDefenseValue = _p1 == true ? _data[i].getP2AttValue() : _data[i].getP1AttValue();
				
				score = (_coeffAttackGrid * _dataAttackGrid[i]) + (_coeffDefenseGrid * dirtGridDefense *  _dataDefenseGrid[i]) - (_coeffDefenseBoard * (targetDefenseValue+_dataDefenseBoard[i]) * .5) + (_coeffAttackBoard * attackBoard(i));
				
				//trace(i, _coeffAttackGrid * _dataAttackGrid[i], _coeffDefenseGrid * _dataDefenseGrid[i], -targetDefenseValue,-_dataDefenseBoard[i],_coeffAttackBoard * attackBoard(i));				
				
				if (score >= maxScore) {
					if (score > maxScore) {
						moves.splice(0, moves.length);
						moves.push(i);
					}else {
						moves.push(i);
					}
					maxScore = score;
				}
			}
		}
		
		if (moves.length > 0) {
			_choosenTile = moves[Std.int(moves.length * Math.random())];
		}else {
			trace("no more choice in grid ", grid);
		}
		//trace(Date.now().getTime()-time);
	}
	
	public function chooseGrid():Void{
		var playGrid:GridData = _data[9];
		var targetDefenseValue:Float;
		var score:Float = 0;
		var maxScore:Float = -1000;
		var moves:Vector<Int> = new Vector<Int>();
		
		_dataAttackBoard = _p1 == true ? _data[9].getP1AttData() : _data[9].getP2AttData();
		_dataDefenseBoard = _p1 == true ? _data[9].getP2AttData() : _data[9].getP1AttData();
		
		for (i in 0..._dataAttackBoard.length) {
			if (playGrid.getData(i) == 0) {
				targetDefenseValue = _p1 == true ? _data[i].getP2AttValue() : _data[i].getP1AttValue();
				score =  (_coeffAttackBoard * attackBoard(i)) - (_coeffDefenseBoard * (targetDefenseValue+_dataDefenseBoard[i]) * .5);
				
				if (Math.isNaN(score)) {
					trace(i, -targetDefenseValue,-_dataDefenseBoard[i],_coeffAttackBoard, attackBoard(i));
				}
				
				if (score >= maxScore) {
					if (score > maxScore) {
						moves.splice(0, moves.length);
						moves.push(i);
					}else {
						moves.push(i);
					}
					maxScore = score;
				}
			}
		}
		
		if (moves.length > 0) {
			_choosenGrid = moves[Std.int(moves.length * Math.random())];
		}else {
			trace("no more grid to select from CPU");
			_data[9].showData();
			trace(_dataAttackBoard);
			trace(_dataDefenseBoard);
		}
	}
	
	public function payConstruction():Void {
		_matter -= _matter > 0 ? 1 : 0;
	}
	
	public function usePower():Void {
		_transferedPower = -_power;
		_power = 0;
	}
	
	public function giveRessources(transferedMatter:Int, transferedPower:Int) {
		_transferedMatter = transferedMatter;
		_transferedPower = transferedPower;
		_matter += _transferedMatter;
		_power += _transferedPower;
	}
	
	//GETTERS && SETTERS
	
	public function getType():Int { return(_type); }
	public function getCPU():Bool { return(_cpu); }
	public function getMatter():Int { return(_matter); }
	public function getPower():Int { return(_power); }
	public function getTransMatter() { return(_transferedMatter); }
	public function getTransPower() { return(_transferedPower); }
	public function getChoosenGrid():Int { return(_choosenGrid); }
	public function getChoosenTile():Int { return(_choosenTile); }
}