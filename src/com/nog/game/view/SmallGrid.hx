package com.nog.game.view;

import com.nog.game.utils.BezierArc;
import com.nog.game.view.Tile;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */

class SmallGrid extends Sprite
{
	
	var _background:Shape;
	var _shovleLight:Shape;
	var _overGrid:Shape;

	var _tiles:Vector<Tile>;
	var _tilesContainer:Sprite;
	
	var _activate:Bool;
	
	static var _gridWidth:Float;
	
	public function new():Void {
		super();
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_background = new Shape();
		addChild(_background);
		_background.graphics.lineStyle(1, 0xEFEFEF);
		_background.graphics.beginFill(0x555577);
		_background.graphics.drawRoundRect(0, 0 , _gridWidth, _gridWidth, 5, 5);
		_background.graphics.endFill();
		
		_tiles = new Vector<Tile>();
		_tilesContainer = new Sprite();
		addChild(_tilesContainer);
		var tileSize:Float = Tile.getTileWidth();
		var tile:Tile;
		for (i in 0...9) {
			tile = new Tile();
			_tilesContainer.addChild(tile);
			tile.x = (i % 3) * tileSize;
			tile.y = Std.int(i / 3) * tileSize;
			_tiles.push(tile);
		}
		
		_overGrid = new Shape();
		addChild(_overGrid);
		_overGrid.graphics.lineStyle(1, 0xEFEFEF);
		_overGrid.graphics.drawRoundRect(0, 0, _gridWidth, _gridWidth, 5, 5);
		for (i in 1...3) {
			_overGrid.graphics.moveTo(0, i * tileSize);
			_overGrid.graphics.lineTo(_gridWidth, i * tileSize);
			_overGrid.graphics.moveTo(i * tileSize,0);
			_overGrid.graphics.lineTo(i * tileSize, _gridWidth);
		}
		
		_shovleLight = new Shape();
		_shovleLight.graphics.beginFill(0xFFFF00, 0.2);
		_shovleLight.graphics.drawRect(0, 0, tileSize * 3, tileSize);
		_shovleLight.graphics.endFill();
		//addChild(_shovleLight);
		_shovleLight.rotation = 90;
		_shovleLight.x = Tile.getTileWidth();
		
		activate(false);
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	//PUBLIC FUNCTIONS
	
	public function activate(activate:Bool):Void{
		_activate = activate;
		if (_activate == true) {
			this.buttonMode = true;
			this.alpha = 1;
		}else {
			this.buttonMode = false;
			this.alpha = 0.6;
		}
	}
	
	public function changeTile(tile:Int, data:Int):Void{
		_tiles[tile].change(data);
	}
	
	public function winChange(winner:Int):Void{
		if (winner < 3) {
			removeChild(_overGrid);
			removeChild(_tilesContainer);
			if(winner==1) {
				_background.graphics.lineStyle(4, 0xFF0000);
				_background.graphics.drawCircle(_gridWidth * .5, _gridWidth * .5, _gridWidth * .4);
			}else {
				_background.graphics.lineStyle(4, 0x0000FF);
				_background.graphics.drawCircle(_gridWidth * .5, _gridWidth * .5, _gridWidth * .4);
			}
		}else {
		//clear Grid
			//for (i in 0..._tiles.length) {
				//_tiles[i].change(0);
			//}
		//draw Grid (null for both)
		
		//Tie Grid (good for both)
			removeChild(_overGrid);
			removeChild(_tilesContainer);
			var arc:Vector<Float>;
			_background.graphics.lineStyle(4, 0xFF0000);
			arc = BezierArc.createArcQuadCurve(-1.57, 1.57, _gridWidth * .4,_gridWidth * .5,_gridWidth * .5);
			_background.graphics.moveTo(arc[0], arc[1]);
			while (arc.length > 0) {
				_background.graphics.cubicCurveTo(arc[2], arc[3], arc[4], arc[5], arc[6], arc[7]);
				arc.splice(0, 8);
			}
			_background.graphics.lineStyle(4, 0x0000FF);
			arc = BezierArc.createArcQuadCurve(1.57, 4.71, _gridWidth * .4,_gridWidth * .5,_gridWidth * .5);
			_background.graphics.moveTo(arc[0], arc[1]);
			while (arc.length > 0) {
				_background.graphics.cubicCurveTo(arc[2], arc[3], arc[4], arc[5], arc[6], arc[7]);
				arc.splice(0, 8);
			}
		}
	}
	
	public function shovelLightOff():Void{
		if (_shovleLight.parent != null) {
			removeChild(_shovleLight);
		}
	}
	
	public function shovelLight(shovelLine:Int):Void {
		addChildAt(_shovleLight, 1);
		_shovleLight.rotation = 0;
		_shovleLight.x = 0;
		_shovleLight.y = 0;
		switch(shovelLine) {
			case 0, 3, 6:
				_shovleLight.y = 0;
			case 1, 4, 7:
				_shovleLight.y = Tile.getTileWidth();
			case 2, 5, 8:
				_shovleLight.y = 2 * Tile.getTileWidth();
			case 9, 12, 15:
				_shovleLight.rotation = 90;
				_shovleLight.x = Tile.getTileWidth();
			case 10, 13, 16:
				_shovleLight.rotation = 90;
				_shovleLight.x = 2 * Tile.getTileWidth();
			case 11, 14, 17:
				_shovleLight.rotation = 90;
				_shovleLight.x = 3 * Tile.getTileWidth();
		}
	}
	
	//GETTERS && SETTERS
	
	public function getTileNum(tile:Tile):Int { return(_tilesContainer.getChildIndex(tile)); }
	
	static public function setGridWidth(gridWidth:Float) { _gridWidth = gridWidth; }
	
	
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}