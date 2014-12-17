package com.nog.game;

import com.nog.game.model.GameCore;
import com.nog.game.view.GameBoard;
import com.nog.game.view.Grid;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Colapsydo
 */

class Game extends Sprite
{
	var _gameCore:GameCore;
	var _gameBoard:GameBoard;
	//var _controller:
	
	public function new():Void {
		super();
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		this.graphics.beginFill(0x232323);
		this.graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
		this.graphics.endFill();
		
		_gameCore = new GameCore(2);
		//_controller
		_gameBoard = new GameBoard(_gameCore);
		
		addChild(_gameBoard);
		
		_gameCore.addEventListener(GameCore.UPDATE, _gameBoard.update);
		_gameCore.addEventListener(GameCore.ENDED, newGame);
	}
	
	private function newGame(e:Event):Void {
		_gameCore.removeEventListener(GameCore.UPDATE, _gameBoard.update);
		_gameCore.removeEventListener(GameCore.ENDED, newGame);
		removeChild(_gameBoard);
		_gameCore = null;
		_gameBoard = null;
		
		_gameCore = new GameCore(2);
		//_controller
		_gameBoard = new GameBoard(_gameCore);
		
		addChild(_gameBoard);
		
		_gameCore.addEventListener(GameCore.UPDATE, _gameBoard.update);
		_gameCore.addEventListener(GameCore.ENDED, newGame);
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	//PUBLIC FUNCTIONS
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}