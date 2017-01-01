/*
	File: fn_copEnter.sqf
	Author: I dunno, I do not care!
	
	Description:
	Allows Cops to enter locked Vehicles
*/
if(playerSide == civilian) exitWith {};
private ["_position","_veh","_restrained"];
_restrained = player getVariable["restrained",false];
if (_restrained) exitWith {hint "You can't do that while you are restrained!"};
_position = _this select 3;

switch (_position) do
{
	case "driver":
	{
		cursorTarget lock false;
		player action ["getInDriver", cursorTarget];
		cursorTarget lock true;
	};
	case "passenger":
	{
		cursorTarget lock false;
		player action ["getInCargo", cursorTarget];
		cursorTarget lock true;
	};
	case "commander":
	{
		cursorTarget lock false;
		player action ["getInTurret", cursorTarget, [0]];
		cursorTarget lock true;
	};
	case "exit":
	{
		_veh = vehicle player;
		_veh lock false;
		player action ["getOut", _veh];
		_veh lock true;
	};
};