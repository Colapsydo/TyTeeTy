package com.nog.game.model;
import openfl.display.InterpolationMethod;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */
class GridData
{
	var _data:Vector<Int>;
	var _liner:Vector<Int>;
	var _player1AttackData:Vector<Int>; //list of each tile attack score for player 1 (it's also defense score for player 2)
	var _player2AttackData:Vector<Int>; 
	var _player1AttackValue:Float; // a way to sort best grids to play (signal for attacking or defending)
	var _player2AttackValue:Float; 
	
	var _tileToPlay:Int;
	var _win:Int; //0:InPlay 1:P1 2:P2 3:draw 
	
	var _tileToDig:Int;
	var _matter:Int;
	var _power:Int;
	
	public function new() {
		init();
	}
	
	function init():Void{
		_data = Vector.ofArray([-1,-1,-1,-1,-1,-1,-1,-1,-1]);
		_data.fixed = true;
		
		_liner = new Vector<Int>(); // 0:R1 1:R2 2:R3 3:C1 4:C2 5:C3 6:D1 7:D2
		_liner.length = 8;
		_liner.fixed = true;
		
		_player1AttackData = Vector.ofArray([3,2,3,2,3,2,3,2,3]);
		_player1AttackData.fixed = true;
		
		_player2AttackData = Vector.ofArray([3,2,3,2,3,2,3,2,3]);
		_player2AttackData.fixed = true;
		
		_player1AttackValue = _player2AttackValue = 23 / 9;
		
		_tileToPlay = _tileToDig = 9;
		_win = 0;
	}
	
	//PRIVATE FUNCTIONS
	
	function winMoveControl(tile:Int,player:Int, ?explosion:Bool=false):Void{
		var coeff:Int = explosion == true? -1 : 1;
		var step:Int;
		
		switch(player) {
			case 1:
				step = coeff;
			case 2:
				step = coeff * 4;
			case 3:
				step = coeff * 15;
			default:
				step = coeff;
		}		
		
		switch(tile) {
			case 0:
				_liner[0] += step;
				_liner[3] += step;
				_liner[6] += step;
				_win = checkWinner(Vector.ofArray([_liner[0],_liner[3],_liner[6]]));
			case 1:
				_liner[0] += step;
				_liner[4] += step;
				_win = checkWinner(Vector.ofArray([_liner[0], _liner[4]]));		
			case 2:
				_liner[0] += step;
				_liner[5] += step;
				_liner[7] += step;
				_win = checkWinner(Vector.ofArray([_liner[0], _liner[5], _liner[7]]));
			case 3:
				_liner[1] += step;
				_liner[3] += step;
				_win = checkWinner(Vector.ofArray([_liner[1], _liner[3]]));
			case 4:
				_liner[1] += step;
				_liner[4] += step;
				_liner[6] += step;
				_liner[7] += step;
				_win = checkWinner(Vector.ofArray([_liner[1], _liner[4], _liner[6], _liner[7]]));
			case 5:
				_liner[1] += step;
				_liner[5] += step;
				_win = checkWinner(Vector.ofArray([_liner[1], _liner[5]]));
			case 6:
				_liner[2] += step;
				_liner[3] += step;
				_liner[7] += step;
				_win = checkWinner(Vector.ofArray([_liner[2], _liner[3], _liner[7]]));
			case 7:
				_liner[2] += step;
				_liner[4] += step;
				_win = checkWinner(Vector.ofArray([_liner[2], _liner[4]]));
			case 8:
				_liner[2] += step;
				_liner[5] += step;
				_liner[6] += step;
				_win = checkWinner(Vector.ofArray([_liner[2], _liner[5], _liner[6]]));
		}
		
		//if (_win != 0) {
			//trace(_win);
			//trace(_data);
		//}
	}
	
	function checkWinner(liners:Vector<Int>):Int{
		var trueWinner:Int=0;
		var winner:Int;
		var result:Int;
		var numOfDraw:Int;
		for (i in 0...liners.length) {
			numOfDraw = winner = 0;
			result = liners[i];
			
			if (result > 15) {
				numOfDraw = Std.int(result / 15);
				result %= 15;
			}
			
			switch(numOfDraw) {
				case 0:
					if (result == 3) {winner = 1;}
					if (result == 12) { winner = 2; }
				case 1:
					if (result == 2) {winner = 1;}
					if (result == 8) {winner = 2; }
				case 3:
					return(3);
			}
			if (winner != 0) {
				trueWinner = (trueWinner > 0 && trueWinner != winner) ? 3 : winner;
			}
		}	
		return(trueWinner);
	}
	
	function updateAttackData():Void {
		_player1AttackValue = _player2AttackValue = 0;
		
		for (i in 0..._data.length) {
			//if (_data[i] == 0) {
			if (_data[i] <1) {
				switch(i) {
					case 0:
						_player1AttackData[i] = getLinerValue(0, true) + getLinerValue(3, true) + getLinerValue(6, true);
						_player2AttackData[i] = getLinerValue(0, false) + getLinerValue(3, false) + getLinerValue(6, false);
					case 1:
						_player1AttackData[i] = getLinerValue(0, true) + getLinerValue(4, true);
						_player2AttackData[i] = getLinerValue(0, false) + getLinerValue(4, false);
					case 2:
						_player1AttackData[i] = getLinerValue(0, true) + getLinerValue(5, true) + getLinerValue(7, true);
						_player2AttackData[i] = getLinerValue(0, false) + getLinerValue(5, false) + getLinerValue(7, false);
					case 3:
						_player1AttackData[i] = getLinerValue(1, true) + getLinerValue(3, true);
						_player2AttackData[i] = getLinerValue(1, false) + getLinerValue(3, false);
					case 4:
						_player1AttackData[i] = getLinerValue(1, true) + getLinerValue(4, true) + getLinerValue(6, true)+ getLinerValue(7, true);
						_player2AttackData[i] = getLinerValue(1, false) + getLinerValue(4, false) + getLinerValue(6, false)+ getLinerValue(7, false);
					case 5:
						_player1AttackData[i] = getLinerValue(1, true) + getLinerValue(5, true);
						_player2AttackData[i] = getLinerValue(1, false) + getLinerValue(5, false);
					case 6:
						_player1AttackData[i] = getLinerValue(2, true) + getLinerValue(3, true) + getLinerValue(7, true);
						_player2AttackData[i] = getLinerValue(2, false) + getLinerValue(3, false) + getLinerValue(7, false);
					case 7:
						_player1AttackData[i] = getLinerValue(2, true) + getLinerValue(4, true);
						_player2AttackData[i] = getLinerValue(2, false) + getLinerValue(4, false);
					case 8:
						_player1AttackData[i] = getLinerValue(2, true) + getLinerValue(5, true) + getLinerValue(6, true);
						_player2AttackData[i] = getLinerValue(2, false) + getLinerValue(5, false) + getLinerValue(6, false);
				}
				_player1AttackValue+= _player1AttackData[i];
				_player2AttackValue+= _player2AttackData[i];
			}else {
				_player1AttackData[i] = _player2AttackData[i] = 0;
			}
		}
		
		_player1AttackValue /= _tileToPlay;
		_player2AttackValue /= _tileToPlay;
		
	}
	
	function getLinerValue(index:Int, player1:Bool):Int {
		switch(_liner[index]) {
			case 0:
				return(1);
			case 1:
				if (player1 == true) {return(3);}
				return(0);
			case 2,16:
				if (player1 == true) { return(10); }
				return(0);
			case 4:
				if (player1 == true) { return(0); }
				return(3);
			case 5:
				return(0);
			case 8,19:
				if (player1 == true) { return(0); }
				return(10);
			case 15:
				return(3);
			default:
				return(0);
		}
	}
	
	function dig(tile:Int):Bool {
		if (_data[tile] == -1) {
			_tileToDig--;
			_data[tile] = 0;
			_matter += 1 + Std.int(Math.random() * 2);
			_power += Math.random() > 0.95 ?1:0;
			return(true);
		}else {
			return(false);
		}
	}
	
	//PUBLIC FUNCTIONS
	
	public function removeDirt():Void{
		_tileToDig = 0;
		for (i in 0..._data.length) { _data[i] = 0; }
	}
	
	public function play(tile:Int, player:Int):Bool {
		_matter = _power = 0;
		
		if (_data[tile] == 0) {
			_tileToPlay--;
			_data[tile] = player; 
			winMoveControl(tile, player);
			
			if (_tileToPlay + _tileToDig == 0) {
				_win = 3; //draw
			}
			
			if (_win == 0) { 
				updateAttackData(); 
			}else {//if grid completed
				for (i in 0..._player1AttackData.length) {
					_player1AttackData[i] = _player2AttackData[i] = 0;
				}
				_player1AttackValue = _player2AttackValue = 0;
			}
			return(true);
			
		}else {
			return(dig(tile));
		}
		return(false);
	}
	
	public function shovel(grid:Int, shovelLine:Int):Vector<Int>{
		_matter = _power = 0;
		var result:Vector<Int> = new Vector<Int>();
		switch(shovelLine) {
			case 0, 3, 6:
				for (i in 0...3) {
					if (dig(i) == true) {
						result.push(grid);
						result.push(i);
					}
				}
			case 1, 4, 7:
				for (i in 3...6) {
					if (dig(i) == true) {
						result.push(grid);
						result.push(i);
					}
				}
			case 2, 5, 8:
				for (i in 6...9) {
					if (dig(i) == true) {
						result.push(grid);
						result.push(i);
					}
				}
			case 9, 12, 15:
				for (i in 0...3) {
					if (dig(i*3) == true) {
						result.push(grid);
						result.push(i*3);
					}
				}
			case 10, 13, 16:
				for (i in 0...3) {
					if (dig(1+i*3) == true) {
						result.push(grid);
						result.push(1+i*3);
					}
				}
			case 11, 14, 17:
				for (i in 0...3) {
					if (dig(2+i*3) == true) {
						result.push(grid);
						result.push(2+i*3);
					}
				}
		}
		return(result);
	}
	
	public function explode(tile:Int, player:Int):Void{
		_data[tile] = 0;
		player = (player + 1) % 2;
		winMoveControl(tile, player + 1, true);
		updateAttackData();
	}
	
	public function reset():Void{
		init();
		removeDirt();
	}
	
	public function showData():Void {
		trace(_data);
	}
	
	//GETTERS && SETTERS
	
	public function getData(tile:Int):Int {return(_data[tile]); }
	public function getMatter():Int { return(_matter); }
	public function getPower():Int { return(_power); }
	public function getWin():Int { return(_win); }
	public function getTileToPlay():Bool { return(_tileToPlay > 0); }
	public function getDirtToDig():Bool { return(_tileToDig > 0); }
	public function getTileToPlayNum():Int { return(_tileToPlay); }
	public function getP1AttData():Vector<Int> { return(_player1AttackData); }
	public function getP1AttValue():Float { return(_player1AttackValue); }
	public function getP2AttData():Vector<Int> { return(_player2AttackData); }
	public function getP2AttValue():Float { return(_player2AttackValue); }
}