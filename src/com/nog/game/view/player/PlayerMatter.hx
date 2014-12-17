package com.nog.game.view.player;

import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Colapsydo
 */

class PlayerMatter extends Sprite
{
	var _matter:Int;
	
	public function new():Void {
		super();
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		draw();
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	function draw():Void{
		this.graphics.clear();
		this.graphics.lineStyle(2, 0xFFFF00);
		this.graphics.beginFill(0xFF8822);
		this.graphics.drawRect(0, 0, 5 * _matter, 10);
		this.graphics.endFill();
	}
	
	//PUBLIC FUNCTIONS
	
	public function addMatter(matter:Int):Void{
		_matter += matter;
		draw();
	}
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}