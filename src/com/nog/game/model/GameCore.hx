package com.nog.game.model ;

import openfl.utils.Timer;
import openfl.events.TimerEvent;
import openfl.events.Event;
import openfl.events.EventDispatcher;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */

enum GameState {
	THINKING_P1; //When player 1 is playing or algo is thinking
	THINKING_P2; //When player 2 is playing or algo is thinking
	CHOOSING_GRID; //When grid is choosen randomly or manually
	DIGGING; //Digging + Matter/Power Transfer
	EXPLOSION; //Power of destruction
	PLAYING_MOVE; //Animation Move
	WINNING_GRID; //Animation Win Grid
	WINNING_GAME;
}
 
class GameCore extends EventDispatcher
{
	var _grids:Vector<GridData>;
	
	var _playersType:Int; //0 1pVsCpu - 1 1pVs2p - 2 CpuVsCpu
	var _players:Vector<Player>;
	
	var _playableGrid:Vector<Int>;
	var _playGrid:Int;
	var _playerTurn:Int;
	
	var _state:GameState;
	var _playedTiles:Vector<Int>;
	var _lastPlay:Int;
	var _fullGrid:Bool;
	var _draw:Bool;
	
	var _cpuTimer:Timer;
	
	//AI Calibration
	static var _play:Int;
	static var _stats:Vector<Int>;
	static var _time:Float;
	
	//EVENT
	static public inline var UPDATE:String = "update";
	static public inline var ENDED:String = "ended";
	
	public function new(playerType:Int){
		super();
		
		_playersType = playerType;
		
		init();
	}
	
	function init():Void {
		if (_stats == null) {
			_play = 0;
			_stats = Vector.ofArray([0, 0, 0, 0]);
			_stats.fixed = true;
			_time = Date.now().getTime();
		}
		
		_playableGrid = new Vector<Int>();
		_grids = new Vector<GridData>();
		var grid:GridData;
		for (i in 0...9) {
			grid = new GridData();
			_grids.push(grid);
			_playableGrid.push(i);
		}
		grid = new GridData(); //adding a 10th grid to monitor the board status :D
		grid.removeDirt();
		_grids.push(grid);
		_grids.fixed = true;
		
		
		_players = new Vector<Player>();
		var player:Player = _playersType < 2 ? new Player(0, true, false, _grids):new Player(0, true, true, _grids);
		_players.push(player);
		player = _playersType == 1 ? new Player(1, false, false, _grids):new Player(1, false, true, _grids);
		_players.push(player);
		
		_playerTurn = 0;
		_state = THINKING_P1;
		_playGrid = _playableGrid[Std.int(Math.random() * _playableGrid.length)];
		
		
		_cpuTimer = new Timer(10);
		cpuPlay();
	}
	
	//HANDLERS
	
	private function cpuTimerHandler(e:Event):Void {
		_cpuTimer.stop();
		_cpuTimer.removeEventListener(TimerEvent.TIMER, cpuTimerHandler);
		play(_playGrid, _players[_playerTurn].getChoosenTile());
	}
	
	private function cpuChooseTimerHandler(e:TimerEvent):Void {
		_cpuTimer.stop();
		_cpuTimer.removeEventListener(TimerEvent.TIMER, cpuChooseTimerHandler);
		var playerTurn:Int = (_playerTurn + 1) % 2;
		choose(_players[playerTurn].getChoosenGrid());
	}
	
	//PRIVATE FUNCTIONS
	
	function cpuPlay():Void {
		if (_players[_playerTurn].getCPU() == true) {
			_players[_playerTurn].play(_playGrid);
			_cpuTimer.reset();
			_cpuTimer.start();
			_cpuTimer.addEventListener(TimerEvent.TIMER, cpuTimerHandler);
		}
	}
	
	function cpuChoose():Void{
		var playerTurn:Int = (_playerTurn + 1) % 2;
		if (_players[playerTurn].getCPU() == true) {
			_players[playerTurn].chooseGrid();
			_cpuTimer.reset();
			_cpuTimer.start();
			_cpuTimer.addEventListener(TimerEvent.TIMER, cpuChooseTimerHandler);
		}
	}
	
	function prepareNextTurn(tile:Int):Void {
		_playerTurn = (_playerTurn + 1) % 2;
		_lastPlay = _playGrid * 9 + tile;
		_playGrid = tile;		
	}
	
	function startNewTurn():Void {
		if (_grids[_playGrid].getWin() != 0) { //if next target playgrid is done
			if (_playableGrid.length > 0) {
			//Make the last player choose where to bring its opponent
				cpuChoose();
				_state = CHOOSING_GRID;				
			//random selection
				//_playGrid = _playableGrid[Std.int(Math.random() * _playableGrid.length)];
			}else {
				trace("no more grid to play");
			}
		}else {
			if (_grids[_playGrid].getDirtToDig() == false && _players[_playerTurn].getMatter() == 0) {
				trace("You can't play, you don't have any matter");
				_players[_playerTurn].giveRessources(1, 0); //offer an extra matter to avoid situation next turn
				prepareNextTurn(Std.int(Math.random() * 9));
				startNewTurn();
				return;
			}else {
				_state = _playerTurn == 0 ? THINKING_P1 : THINKING_P2;
				cpuPlay();
			}
		}
		
		dispatchEvent(new Event(GameCore.UPDATE));
	}
	
	//PUBLIC FUNCTIONS
	
	public function choose(grid:Int) {
		if (_grids[grid].getWin() == 0) {
			_playGrid = grid;
			startNewTurn();
		}
	}
	
	public function play(grid:Int, tile:Int):Void {
		if (grid != _playGrid) { //if click on the playable grid
 			return;
		}
		
		var tileType:Int = _grids[_playGrid].getData(tile);
		if (tileType < 1) { //if tile playable
			if (tileType == -1) { //Dirt Tile
				_grids[_playGrid].play(tile, _playerTurn + 1);
				_state = DIGGING;
			}else { //Construct Tile
				if (_players[_playerTurn].getMatter() > 0) {
					_grids[_playGrid].play(tile, _playerTurn + 1);
					_players[_playerTurn].payConstruction();
					_fullGrid = _grids[_playGrid].getWin()>0;
					_state = PLAYING_MOVE;
				}else {
					trace("need matter");
					return;
				}
			}
			_players[_playerTurn].giveRessources(_grids[_playGrid].getMatter(), _grids[_playGrid].getPower()); //update transfered ressources
		
			//update vars for next turn
			_playedTiles = Vector.ofArray([_playGrid, tile]);
			prepareNextTurn(tile);
			
			dispatchEvent(new Event(GameCore.UPDATE));
		}
	}
	
	public function checkGrid():Void {
		if (_fullGrid == true) { //if last grid was filled
			_fullGrid = false;
			var grid:Int = Std.int(_lastPlay / 9);
			_grids[9].play(grid, _grids[grid].getWin()); //update boardGrid
			_playableGrid.splice(_playableGrid.lastIndexOf(grid), 1); //remove grid index from playable selection
			
			//if (_grids[grid].getWin() == 3) {
				//_grids[grid].reset(); //In case of reseting draws
			//}
			
			_state = WINNING_GRID;	
			dispatchEvent(new Event(GameCore.UPDATE));
		}else {	
			startNewTurn();
		}
		
	}
	
	public function checkBoard():Void{
		//Check if game ended
		if (_grids[9].getWin() != 0) {
			_play++;
			_stats[_grids[9].getWin()]+=1;
			if (_play < 200) {
				//if (_play % 100 == 0) {
					//trace(_play);
					//trace((Date.now().getTime() - _time) / 60000);
				//}
				dispatchEvent(new Event(ENDED));
			}else {
				trace("");
				Player.readFactors();
				trace(_stats);
				_stats[1] = _stats[2] = _stats[3] = _play = 0;
				Player.factorUpdate();
				//trace((Date.now().getTime() - _time) / 60000);
				dispatchEvent(new Event(ENDED));
			}
		}else {
			startNewTurn();
		}
	}
	
	public function isPlayerCpu(p1:Bool):Bool {
		if (p1 == true) {
			return(_players[0].getCPU());
		}else {
			return(_players[1].getCPU());
		}
	}
	
	//POWERS
	
	public function shovel(shovelLine:Int, tile:Int):Void{
		if (shovelLine > -1) {
			_playedTiles = new Vector<Int>();
			switch(shovelLine) {
				case 0, 1, 2:
					_playedTiles = _playedTiles.concat(_grids[0].shovel(0,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[1].shovel(1,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[2].shovel(2,shovelLine));
					_players[_playerTurn].giveRessources(_grids[0].getMatter()+_grids[1].getMatter()+_grids[2].getMatter(), _grids[0].getPower()+_grids[1].getPower()+_grids[2].getPower()); //update transfered ressources
				case 3, 4, 5:
					_playedTiles = _playedTiles.concat(_grids[3].shovel(3,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[4].shovel(4,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[5].shovel(5,shovelLine));
					_players[_playerTurn].giveRessources(_grids[3].getMatter()+_grids[4].getMatter()+_grids[5].getMatter(), _grids[3].getPower()+_grids[4].getPower()+_grids[5].getPower()); //update transfered ressources
				case 6, 7, 8:
					_playedTiles = _playedTiles.concat(_grids[6].shovel(6,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[7].shovel(7,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[8].shovel(8,shovelLine));
					_players[_playerTurn].giveRessources(_grids[6].getMatter()+_grids[7].getMatter()+_grids[8].getMatter(), _grids[6].getPower()+_grids[7].getPower()+_grids[8].getPower()); //update transfered ressources
				case 9, 10, 11:
					_playedTiles = _playedTiles.concat(_grids[0].shovel(0,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[3].shovel(3,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[6].shovel(6,shovelLine));
					_players[_playerTurn].giveRessources(_grids[0].getMatter()+_grids[3].getMatter()+_grids[6].getMatter(), _grids[0].getPower()+_grids[3].getPower()+_grids[6].getPower()); //update transfered ressources
				case 12, 13, 14:
					_playedTiles = _playedTiles.concat(_grids[1].shovel(1,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[4].shovel(4,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[7].shovel(7,shovelLine));
					_players[_playerTurn].giveRessources(_grids[1].getMatter()+_grids[4].getMatter()+_grids[7].getMatter(), _grids[1].getPower()+_grids[4].getPower()+_grids[7].getPower()); //update transfered ressources
				case 15, 16, 17:
					_playedTiles = _playedTiles.concat(_grids[2].shovel(2,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[5].shovel(5,shovelLine));
					_playedTiles = _playedTiles.concat(_grids[8].shovel(8,shovelLine));
					_players[_playerTurn].giveRessources(_grids[2].getMatter()+_grids[5].getMatter()+_grids[8].getMatter(), _grids[2].getPower()+_grids[5].getPower()+_grids[8].getPower()); //update transfered ressources
			}
			
			if (_playedTiles.length > 0) {
				_players[_playerTurn].usePower();
				
				//update vars for next turn
				prepareNextTurn(tile);
				
				_state = DIGGING;
				dispatchEvent(new Event(GameCore.UPDATE));
			}else {
				trace("nothing to shovel");
			}
		}
	}
	
	public function tnt(grid:Int, tile:Int):Void {
		if (grid != _playGrid) { //if click on the playable grid
 			return;
		}
		
		var tileType:Int = _grids[_playGrid].getData(tile);
		if (tileType > 0 && tileType!=_playerTurn+1) { //if tile is opponent
			_grids[_playGrid].explode(tile, _playerTurn);
			_players[_playerTurn].usePower();
			
			//update vars for next turn
			_playedTiles = Vector.ofArray([_playGrid, tile]);
			prepareNextTurn(tile);
			
			_state = EXPLOSION;
			dispatchEvent(new Event(GameCore.UPDATE));
		}
	}
	
	//GETTERS && SETTERS
	
	public function getPlayer(index:Int):Player { return(_players[index - 1]); }
	public function getState():GameState { return(_state); }
	public function getPlayerTurn():Int { return(_playerTurn); }
	public function getPlayGrid():Int { return(_playGrid); }
	public function getLastPlay():Int { return(_lastPlay); }
	public function getPlayedTiles():Vector<Int> { return(_playedTiles); }
	public function getFullGrid():Bool { return(_fullGrid); }
	public function getWinner(grid:Int):Int { return(_grids[grid].getWin()); }
	public function getData(grid:Int, tile:Int):Int { return(_grids[grid].getData(tile)); }
	
	public function getPlayerType(p1:Bool):Int {
		if (p1 == true) { return(_players[0].getType()); }
		return(_players[1].getType());
	}
	
}