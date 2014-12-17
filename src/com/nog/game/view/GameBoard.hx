package com.nog.game.view;

import com.nog.game.model.GameCore;
import com.nog.game.view.player.PlayerGameView;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Colapsydo
 */

class GameBoard extends Sprite
{
	var _model:GameCore;
	
	var _grid:Grid;
	var _player1:PlayerGameView;
	var _player2:PlayerGameView;
	
	public function new(model:GameCore):Void {
		super();
		_model = model;
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(e:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, init);
		addEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		_grid = new Grid(_model);
		addChild(_grid);
		_grid.x = (stage.stageWidth - _grid.width) * .5;
		_grid.y = 1;
		
		PlayerGameView.setWidth((stage.stageWidth - _grid.width) * 0.5);
		
		_player1 = new PlayerGameView(_model.getPlayer(1));
		addChild(_player1);
		_player1.x = _player1.y = 1;
		
		_player2 = new PlayerGameView(_model.getPlayer(2));
		addChild(_player2);
		_player2.x = _grid.x + _grid.width;
		_player2.y = 1;
		
		update();
	}
	
	//HANDLERS
	
	//PRIVATE FUNCTIONS
	
	private function dugHandler(e:Event):Void {
		_grid.removeEventListener(Grid.DUG, dugHandler);
		if (_model.getPlayerTurn() == 1) {
			_player1.addRessources();
		}else {
			_player2.addRessources();
		}
		_model.checkGrid();
	}
	
	private function powerOnHandler(e:Event):Void {
		if (_model.getPlayerTurn() == 0) {
			removeEventListener(PlayerGameView.POWERON, powerOnHandler, true);
			addEventListener(PlayerGameView.POWEROFF, powerOffHandler, true);
			_grid.powerOn(1, _model.getPlayer(1).getPower());
		}else {
			removeEventListener(PlayerGameView.POWERON, powerOnHandler, true);
			addEventListener(PlayerGameView.POWEROFF, powerOffHandler, true);
			_grid.powerOn(2, _model.getPlayer(2).getPower());
		}
	}
	
	private function powerOffHandler(e:Event):Void {
		addEventListener(PlayerGameView.POWERON, powerOnHandler, true);
		removeEventListener(PlayerGameView.POWEROFF, powerOffHandler, true);
		_grid.powerOff();
	}
	
	//PUBLIC FUNCTIONS
	
	public function update(?e:Event):Void {
		removeEventListener(PlayerGameView.POWERON, powerOnHandler, true);
		removeEventListener(PlayerGameView.POWEROFF, powerOffHandler, true);
		_grid.resetListener();
		
		switch(_model.getState()) {
			case THINKING_P1:
				addEventListener(PlayerGameView.POWERON, powerOnHandler,true);
				_player1.thinking();
				_player2.waiting();
				_grid.selected(_model.isPlayerCpu(true));
			case THINKING_P2:
				addEventListener(PlayerGameView.POWERON, powerOnHandler,true);
				_player1.waiting();
				_player2.thinking();
				_grid.selected(_model.isPlayerCpu(false));
			case CHOOSING_GRID:
				var cpu:Bool;
				if (_model.getPlayerTurn() == 1) {
					_player1.chooseGrid();
					cpu = _model.isPlayerCpu(true);
				}else {
					_player2.chooseGrid();
					cpu = _model.isPlayerCpu(false);
				}
				_grid.choose(cpu);
			case DIGGING:
				if (_model.getPlayerTurn() == 1) {
					_player1.checkPower();
				}else {
					_player2.checkPower();
				}				
				_grid.addEventListener(Grid.DUG, dugHandler);
				_grid.dig();
			case EXPLOSION:
				if (_model.getPlayerTurn() == 1) {
					_player1.checkPower();
				}else {
					_player2.checkPower();
				}	
				_grid.play();
			case PLAYING_MOVE:
				if (_model.getPlayerTurn() == 1) {
					_player1.checkPower();
					_player1.payConstruct();
				}else {
					_player2.checkPower();
					_player2.payConstruct();
				}
				_grid.play();
			case WINNING_GRID:
				_grid.winGrid();
			case WINNING_GAME:
			
		}
	}
	
	//GETTERS && SETTERS
	
	//DISPOSE

	private function dispose(e:Event):Void {
		removeEventListener(Event.REMOVED_FROM_STAGE, dispose);
		
		while (numChildren > 0) {removeChildAt(0);}
		
	}
}