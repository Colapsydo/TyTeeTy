package com.nog.game.view.player;

import com.nog.game.vo.Infos;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 */

class PlayerInfo extends Sprite
{
	var _width:Float;
	var _text:TextField;
	
	public function new(width:Float):Void {
		super();
		
		_width = width;
		
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_text = new TextField();
		_text.selectable = false;
		_text.wordWrap = true;
		_text.defaultTextFormat = new TextFormat("arial", 15, 0xFFFFFF, false, false, false, null, null, TextFormatAlign.CENTER);
		_text.width = _width;
		addChild(_text);
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	//PUBLIC FUNCTIONS
	
	public function showPower(power:Int, type:Int) {
		var info:Vector<String>;
		if (power < 3) {
			info = Infos.getPower(power);
		}else {
			//info = Infos.getPower(power + type);
			info = Infos.getPower(3);
		}
		
		_text.htmlText = "<font color='#ff0000'>" + info[0] +"</font>\n" + info[1];
		_text.height = _text.textHeight + 4;
	}
	
	public function showHelp(help:String):Void{
		var info:Vector<String> = Infos.getHelp(help);	
		_text.htmlText = "<font color='#ff0000'>" + info[0] +"</font>\n" + info[1];
		_text.height = _text.textHeight + 4;
	}
	
	public function fadeOff() {
		_text.htmlText = "";
	}
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}