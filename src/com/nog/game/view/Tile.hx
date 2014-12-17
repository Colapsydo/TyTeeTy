package com.nog.game.view;

import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Colapsydo
 */

class Tile extends Sprite
{
	var _state:Int;
	
	static var _tileWidth:Float;
	
	public function new():Void {
		super();
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_state = -1;
		draw();
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	function draw():Void{
		this.graphics.clear();
		switch(_state) {
			case -1:
				this.graphics.beginFill(0xEFBC00, 0.2);
				this.graphics.drawRect(0, 0, _tileWidth, _tileWidth);
			case 0:
				this.graphics.beginFill(0xEFEFEF, 0.2);
				this.graphics.drawRect(0, 0, _tileWidth, _tileWidth);
			case 1:
				this.graphics.beginFill(0xEFEFEF, 0.1);
				this.graphics.drawRect(0, 0, _tileWidth, _tileWidth);
				this.graphics.endFill();
				this.graphics.lineStyle(2, 0xFF0000);
				this.graphics.drawCircle(_tileWidth * .5, _tileWidth * .5, _tileWidth * .4);
			case 2:
				this.graphics.beginFill(0xEFEFEF, 0.1);
				this.graphics.drawRect(0, 0, _tileWidth, _tileWidth);
				this.graphics.endFill();
				this.graphics.lineStyle(2, 0x0000FF);
				this.graphics.drawCircle(_tileWidth*.5, _tileWidth*.5,_tileWidth*.4);
		}
	}
	
	
	//PUBLIC FUNCTIONS
	
	public function change(data:Int):Void{
		//HERE CHECK THE NATURE OF THE CHANGE TO DETERMINE THE ANIMATION
		_state = data;
		draw();
	}
	
	//GETTERS && SETTERS
	
	static public function getTileWidth():Float { return(_tileWidth); }
	static public function setTileWidth(tileWidth:Float):Void { _tileWidth = tileWidth; }
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}