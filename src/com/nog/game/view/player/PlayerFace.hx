package com.nog.game.view.player;

import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Colapsydo
 */
enum FaceType {
	THINKING;
	HAPPY;
	NEUTRAL;
	ANGRY;
	VICTORY;
	DEFEAT;
}

class PlayerFace extends Sprite
{
	var _type:Int;
	var _state:FaceType;
	
	public function new(type:Int):Void {
		super();
		
		_type = type;
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_state = NEUTRAL;
		draw();
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	private function draw():Void {
		var color:UInt = _type == 0?0xFF0000:0x0000FF;
		this.graphics.clear();
		switch(_state) {
			case THINKING:
				this.graphics.lineStyle(2, color);
				this.graphics.drawCircle(0, 0, 30);
				this.graphics.moveTo(0, 10);
				this.graphics.lineTo(0, -10);
				this.graphics.moveTo(10,0);
				this.graphics.lineTo(-10,0);
			case NEUTRAL:
				this.graphics.lineStyle(2, color);
				this.graphics.drawCircle(0, 0, 30);
			case HAPPY:
			case ANGRY:
			case VICTORY:
			case DEFEAT:
		}
	}
	
	
	//PUBLIC FUNCTIONS
	
	public function changeMood(mood:FaceType):Void{
		_state = mood;
		draw();
	}
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}