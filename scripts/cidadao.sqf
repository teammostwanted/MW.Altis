/*
AUTHOR: IceN/Iceberggamer
FILE: cidadao.sqf

*/


private ["_playerMenuAction", "_veh", "_playerMenuID"]



_playerMenuAction = [format ["<img image='textures\icons\cidadao.paa' color='%1'/> <t color='%1'>[</t>Cartão Cidadão<t color='%1'>]</t>", "#FF8000"], [profileName,_proficao] remoteExecCall ["life_fnc_sender",player distance < 2], [], -10, false]; //, false, "", ""];

waitUntil {!isNull player};

while {true} do
{
	_playerMenuID = player addAction _playerMenuAction;

	waitUntil {sleep 0.1; _veh = vehicle player; _veh != player};

	player removeAction _playerMenuID;
	_playerMenuID = _veh addAction _playerMenuAction;

	waitUntil {sleep 0.1; vehicle player == player};

	_veh removeAction _playerMenuID;
};