package com.nog.game.view.player;

import com.nog.game.model.Player;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import com.nog.game.vo.Infos;
import com.nog.game.view.player.PlayerFace.FaceType;

/**
 * ...
 * @author Colapsydo
 */

class PlayerGameView extends Sprite
{
	var _playerData:Player;
	
	var _face:PlayerFace;
	var _matter:PlayerMatter;
	var _power:PlayerPowers;
	var _info:PlayerInfo;
	
	static var _width:Float;
	
	static public inline var POWERON:String = "poweron";
	static public inline var POWEROFF:String = "poweroff";
	
	public function new(player:Player):Void {
		super();
		
		_playerData = player;
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		this.graphics.lineStyle(2, 0xEFEFEF);
		this.graphics.beginFill(0x555577);
		this.graphics.drawRoundRect(0, 0, _width - 2, stage.stageHeight - 2, 12, 12);
		this.graphics.endFill();
		
		_face = new PlayerFace(_playerData.getType());
		addChild(_face);
		_face.x = _width * .5;
		_face.y = 40;
		
		_matter = new PlayerMatter();
		addChild(_matter);
		_matter.x = 10;
		_matter.y = 100;
		
		_power = new PlayerPowers();
		addChild(_power);
		_power.x = _width * .5;
		_power.y = 150;
		
		if (_playerData.getCPU() == false) {
			_info = new PlayerInfo(_width-10);
			addChild(_info);
			_info.x = 5;
			_info.y = 200;
		}
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	private function powerPlayHandler(e:Event):Void {
		_power.removeEventListener(PlayerPowers.POWER, powerPlayHandler);
		_power.addEventListener(PlayerPowers.POWER, powerCancelHandler);
		_info.showPower(_playerData.getPower(), _playerData.getType());
		dispatchEvent(new Event(PlayerGameView.POWERON));
	}
	
	private function powerCancelHandler(e:Event):Void {
		_power.removeEventListener(PlayerPowers.POWER, powerCancelHandler);
		_power.addEventListener(PlayerPowers.POWER, powerPlayHandler);
		_info.fadeOff();
		dispatchEvent(new Event(PlayerGameView.POWEROFF));
	}
	
	//PUBLIC FUNCTIONS
	
	public function thinking():Void{
		this.alpha = 1;
		_face.changeMood(FaceType.THINKING);
		
		if (_playerData.getCPU() == false) {
			_power.addEventListener(PlayerPowers.POWER, powerPlayHandler);
			_power.activate(true);
		}
	}
	
	public function waiting():Void{
		this.alpha = 0.4;
		_face.changeMood(FaceType.NEUTRAL);
		
		if (_playerData.getCPU() == false) {
			_power.removeEventListener(PlayerPowers.POWER, powerPlayHandler);
			_power.activate(false);
			_info.fadeOff();
		}
	}
	
	public function chooseGrid():Void {
		_face.changeMood(FaceType.THINKING);
		if (_playerData.getCPU() == false) {
			_power.removeEventListener(PlayerPowers.POWER, powerPlayHandler);
			_power.activate(false);
			_info.showHelp(Infos.CHOOSE_GRID);
		}
	}
	
	public function addRessources():Void {
		_matter.addMatter(_playerData.getTransMatter());
		_power.addPower(_playerData.getTransPower());
	}
	
	public function payConstruct():Void{
		_matter.addMatter(-1);
	}
	
	public function checkPower() {
		if (_playerData.getTransPower() < 0) {
			if (_playerData.getCPU() == false) {
				_info.fadeOff();
			}
			_power.removePower();
		}
	}

	//GETTERS && SETTERS
	
	static public function setWidth(width:Float):Void { _width = width; }	
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}