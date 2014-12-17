package com.nog.game.view;

import com.nog.game.model.GameCore;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */

class Grid extends Sprite
{
	var _model:GameCore;
	
	//SmallGrid made of Tile //since SmallGrid should turn it's interesting to have it separetly
	var _gridBackground:Shape;
	
	var _smallGrids:Vector<SmallGrid>;
	var _smallGridsContainer:Sprite;
	
	var _shovelX:Int;
	var _shovelY:Int;
	var _shovelTile:Int;
	var _shovelLine:Int;
	
	static public inline var PLAY:String = "play";
	static public inline var DUG:String = "dug";
	
	public function new(model:GameCore):Void {
		super();
		_model = model;
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_gridBackground = new Shape();
		addChild(_gridBackground);
		var gridWidth:Float = stage.stageHeight - 2;
		var gridDim:Float = gridWidth /3;
		_gridBackground.graphics.lineStyle(2, 0xEFEFEF);
		_gridBackground.graphics.drawRoundRect(0, 0, gridWidth, gridWidth, 12, 12);
		for (i in 1...3) {
			_gridBackground.graphics.moveTo(0, i * gridDim);
			_gridBackground.graphics.lineTo(gridWidth, i * gridDim);
			_gridBackground.graphics.moveTo(i * gridDim,0);
			_gridBackground.graphics.lineTo(i * gridDim, gridWidth);
		}
		
		SmallGrid.setGridWidth(gridDim - 10);
		Tile.setTileWidth((gridDim - 10) / 3);

		_smallGrids = new Vector<SmallGrid>();
		_smallGridsContainer = new Sprite();
		addChild(_smallGridsContainer);
		var smallGrid:SmallGrid;
		for (i in 0...9) {
			smallGrid = new SmallGrid();
			_smallGridsContainer.addChild(smallGrid);
			smallGrid.x = (i % 3) * gridDim + 5;
			smallGrid.y = Std.int(i / 3) * gridDim + 5;
			_smallGrids.push(smallGrid);
		}
		_smallGrids.fixed;
		
		_smallGridsContainer.addEventListener(MouseEvent.CLICK, clickHandler);
	}
	
	//HANDLERS
	
	private function clickHandler(e:Event):Void {
		if (Std.is(e.target, Tile) == true) {
			var tile:Tile = e.target;
			var grid:SmallGrid = e.target.parent.parent;
			_model.play(_smallGridsContainer.getChildIndex(grid), grid.getTileNum(tile));
		}
		//trace("Grid " + Std.string(_gridNum));
		//trace("Tile " + Std.string(_tileNum));
		//dispatchEvent(new Event(Grid.PLAY));
		//_model.play(_gridNum, _tileNum);
	}
	
	private function chooseClickHandler(e:MouseEvent):Void {
		if (Std.is(e.target, Tile) == true) {
			var grid:SmallGrid = e.target.parent.parent;
			_model.choose(_smallGridsContainer.getChildIndex(grid));
		}
	}
	
	private function shovelHandler(e:MouseEvent):Void {
		if (Std.is(e.target, Tile) == true) {
			var grid:SmallGrid = e.target.parent.parent;
			var gridIndex:Int = _smallGridsContainer.getChildIndex(grid);
			if (gridIndex == _model.getPlayGrid()) {
				_smallGridsContainer.removeEventListener(MouseEvent.MOUSE_DOWN, shovelHandler);
				_smallGridsContainer.addEventListener(MouseEvent.MOUSE_MOVE, shovelMoveHandler);
				stage.addEventListener(MouseEvent.MOUSE_UP, shovelUpHandler);
				
				_shovelTile = grid.getTileNum(e.target);
				_shovelX = ((gridIndex%3) * 3) + _shovelTile % 3;
				_shovelY = (Std.int(gridIndex/3) * 3) + Std.int(_shovelTile / 3);
			}
		}
	}
	
	private function shovelMoveHandler(e:MouseEvent):Void {
		if (Std.is(e.target, Tile) == true) {
			var grid:SmallGrid = e.target.parent.parent;
			var gridIndex:Int = _smallGridsContainer.getChildIndex(grid);
			var tileIndex:Int = grid.getTileNum(e.target);
			
			var shovelNewX:Int = ((gridIndex%3) * 3) + tileIndex % 3;
			var shovelNewY:Int = (Std.int(gridIndex / 3) * 3) + Std.int(tileIndex / 3);
			
			_shovelLine = -1;
			
			if (_shovelX == shovelNewX) {
				if (_shovelY != shovelNewY) { //column
					_shovelLine = 9 + _shovelX;
				}
			}else {
				if (_shovelY == shovelNewY) { //row
					_shovelLine = _shovelY;
				}
			}
			
			for (s in _smallGrids) {
				s.shovelLightOff();
			}
			
			switch(_shovelLine) {
				case 0, 1, 2:
					_smallGrids[0].shovelLight(_shovelLine);
					_smallGrids[1].shovelLight(_shovelLine);
					_smallGrids[2].shovelLight(_shovelLine);
				case 3, 4, 5:
					_smallGrids[3].shovelLight(_shovelLine);
					_smallGrids[4].shovelLight(_shovelLine);
					_smallGrids[5].shovelLight(_shovelLine);
				case 6, 7, 8:
					_smallGrids[6].shovelLight(_shovelLine);
					_smallGrids[7].shovelLight(_shovelLine);
					_smallGrids[8].shovelLight(_shovelLine);
				case 9, 10, 11:
					_smallGrids[0].shovelLight(_shovelLine);
					_smallGrids[3].shovelLight(_shovelLine);
					_smallGrids[6].shovelLight(_shovelLine);
				case 12, 13, 14:
					_smallGrids[1].shovelLight(_shovelLine);
					_smallGrids[4].shovelLight(_shovelLine);
					_smallGrids[7].shovelLight(_shovelLine);
				case 15, 16, 17:
					_smallGrids[2].shovelLight(_shovelLine);
					_smallGrids[5].shovelLight(_shovelLine);
					_smallGrids[8].shovelLight(_shovelLine);
			}			
		}
	}
	
	private function shovelUpHandler(e:MouseEvent):Void {
		stage.removeEventListener(MouseEvent.MOUSE_UP, shovelUpHandler);
		_smallGridsContainer.removeEventListener(MouseEvent.MOUSE_MOVE, shovelMoveHandler);
		_smallGridsContainer.addEventListener(MouseEvent.MOUSE_DOWN, shovelHandler);
		
		for (s in _smallGrids) {
			s.shovelLightOff();
		}
		
		_model.shovel(_shovelLine,_shovelTile);
	}
	
	private function tntHandler(e:MouseEvent):Void {
		if (Std.is(e.target, Tile) == true) {
			var tile:Tile = e.target;
			var grid:SmallGrid = e.target.parent.parent;
			_model.tnt(_smallGridsContainer.getChildIndex(grid), grid.getTileNum(tile));
		}
	}
	
	//PRIVATE FUNCTIONS
	
	function removeListener():Void {
		_smallGridsContainer.removeEventListener(MouseEvent.MOUSE_DOWN, shovelHandler);
		_smallGridsContainer.removeEventListener(MouseEvent.MOUSE_MOVE, shovelMoveHandler);
		_smallGridsContainer.removeEventListener(MouseEvent.CLICK, tntHandler);
		_smallGridsContainer.removeEventListener(MouseEvent.CLICK, chooseClickHandler);
		stage.removeEventListener(MouseEvent.MOUSE_UP, shovelUpHandler);
	}
	
	//PUBLIC FUNCTIONS
	
	public function resetListener():Void{
		removeListener();
	}
	
	public function play():Void{		
		var playedTiles = _model.getPlayedTiles();
		
		while (playedTiles.length > 0) {
			//changing tile
			_smallGrids[playedTiles[0]].changeTile(playedTiles[1], _model.getData(playedTiles[0], playedTiles[1]));
			playedTiles.splice(0, 2);
			//listening to the end of the animation
		}
		
		_model.checkGrid();
	}
	
	public function dig():Void{
		var playedTiles = _model.getPlayedTiles();
		
		while (playedTiles.length > 0) {
			//changing tile
			_smallGrids[playedTiles[0]].changeTile(playedTiles[1], _model.getData(playedTiles[0], playedTiles[1]));
			playedTiles.splice(0, 2);
			//listening to the end of the animation
		}
		
		// Not like play coz need to wait for ressources travelling
		// Need to see if it's real
		
		dispatchEvent(new Event(Grid.DUG));
	}
	
	public function choose(cpu:Bool):Void{
		for (i in 0..._smallGrids.length) {
			_smallGrids[i].activate(_model.getData(9, i) < 1); //activate if grid not done
		}
		if (cpu == false) {
			_smallGridsContainer.addEventListener(MouseEvent.CLICK, chooseClickHandler);
		}
	}
	
	public function selected(cpu:Bool):Void{
		for (i in 0..._smallGrids.length) {
			_smallGrids[i].activate(i == _model.getPlayGrid());
		}
		if (cpu == false) {
			_smallGridsContainer.addEventListener(MouseEvent.CLICK, clickHandler);
		}
	}
	
	public function winGrid():Void{
		var grid:Int = Std.int(_model.getLastPlay() / 9);
		//changingGrid
		_smallGrids[grid].winChange(_model.getWinner(grid));
		//listening to the end of the animation
		_model.checkBoard();
	}
	
	public function powerOn(player:Int, power:Int):Void{
		removeListener();
		switch(power) {
			case 1:
				_smallGridsContainer.addEventListener(MouseEvent.MOUSE_DOWN, shovelHandler);
			case 2:
				_smallGridsContainer.addEventListener(MouseEvent.CLICK, tntHandler);
		}
	}
	
	public function powerOff():Void{
		removeListener();
		_smallGridsContainer.addEventListener(MouseEvent.CLICK, clickHandler);
	}
	
	//GETTERS && SETTERS
	
	//public function getGridNum():Int { return(_gridNum); }
	//public function getTileNum():Int { return(_tileNum); }		
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}