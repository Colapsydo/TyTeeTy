package com.nog.game.view.player;

import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Vector;
import com.nog.game.utils.BezierArc;
import openfl.events.MouseEvent;

/**
 * ...
 * @author Colapsydo
 */

class PlayerPowers extends Sprite
{
	var _power:Int;
	var _powerCircle:Shape;
	
	var _startAngle:Float;
	var _actualAngle:Float;
	var _targetAngle:Float;
	
	static inline var _twoThirdPi:Float = 2.09439510;
	
	static public inline var POWER:String = "power";
	
	public function new():Void {
		super();
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		this.graphics.lineStyle(2, 0x00FF00);
		this.graphics.beginFill(0x008800);
		this.graphics.drawCircle(0, 0, 30);
		
		_powerCircle = new Shape();
		addChild(_powerCircle);
		
		//test
		//addPower(2);
	}
	
	//HANDLERS
	
	private function drawPowerHandler(e:Event):Void {
		if (_actualAngle >= _targetAngle-.03) {
			_actualAngle = _targetAngle;
			removeEventListener(Event.ENTER_FRAME, drawPowerHandler);
		}
		draw();
		_actualAngle += (_targetAngle-_actualAngle) * .07;
	}
	
	private function resetPowerHandler(e:Event):Void {
		_powerCircle.scaleX = _powerCircle.scaleY -= 0.1;
		if (_powerCircle.scaleX <= 0) {
			_powerCircle.graphics.clear();
			_powerCircle.scaleX = _powerCircle.scaleY = 1;
			removeEventListener(Event.ENTER_FRAME, resetPowerHandler);
		}
	}
	
	private function clickHandler(e:MouseEvent):Void {
		dispatchEvent(new Event(PlayerPowers.POWER));
		//activate animation
	}
	
	//PRIVATE FUNCTIONS
	
	function draw():Void {
		_powerCircle.graphics.clear();
		_powerCircle.graphics.lineStyle(2, 0x00FF00);
		
		var powerToDraw = _power - 1;
		var arc:Vector<Float>;
		
		while (powerToDraw > 0) {
			_powerCircle.graphics.beginFill(0x22ab22);
			arc = BezierArc.createArcQuadCurve(-1.57 + (powerToDraw-1) * _twoThirdPi, -1.57 + powerToDraw * _twoThirdPi, 26);
			_powerCircle.graphics.moveTo(0, 0);
			_powerCircle.graphics.lineTo(arc[0], arc[1]);
			while (arc.length > 0) {
				_powerCircle.graphics.cubicCurveTo(arc[2], arc[3], arc[4], arc[5], arc[6], arc[7]);
				arc.splice(0, 8);
			}
			_powerCircle.graphics.lineTo(0, 0);
			powerToDraw--;
		}
		
		_powerCircle.graphics.beginFill(0x22ab22);
		 arc = BezierArc.createArcQuadCurve(_startAngle, _actualAngle, 26);
		_powerCircle.graphics.moveTo(0, 0);
		_powerCircle.graphics.lineTo(arc[0], arc[1]);
		while (arc.length > 0) {
			_powerCircle.graphics.cubicCurveTo(arc[2], arc[3], arc[4], arc[5], arc[6], arc[7]);
			arc.splice(0, 8);
		}
		_powerCircle.graphics.lineTo(0, 0);
		_powerCircle.graphics.endFill();
	}
	
	//PUBLIC FUNCTIONS
	
	public function addPower(power:Int):Void{
		if (power > 0){
			_power += power;
			if (_power > 3) {
				_power = 3;
			}else {
				if (_power != 0) {
					_startAngle = _actualAngle = -1.57 + (_power - 1) * _twoThirdPi;
					_targetAngle = -1.57 + _power * _twoThirdPi;
					addEventListener(Event.ENTER_FRAME, drawPowerHandler);
				}
			}
		}
	}
	
	public function removePower() {
		_power = 0;
		addEventListener(Event.ENTER_FRAME, resetPowerHandler);
	}
	
	public function activate(value:Bool) {
		if (value == true && _power>0) {
			this.buttonMode = true;
			this.addEventListener(MouseEvent.CLICK, clickHandler);
		}else {
			this.buttonMode = false;
			this.removeEventListener(MouseEvent.CLICK, clickHandler);
		}
	}
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}