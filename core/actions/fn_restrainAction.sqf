#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Retrains the target.
*/
private["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (side player isEqualTo civilian || side player isEqualTo west) then {
	if(life_inv_zipties < 1) exitWith { hintSilent "Não tens zipties!"; };
	life_inv_zipties = life_inv_zipties - 1;
	hintSilent "Tu atas-te as mãos do individuo!";
};
if (!isPlayer _unit) exitWith {};
//Broadcast!

_unit setVariable["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];