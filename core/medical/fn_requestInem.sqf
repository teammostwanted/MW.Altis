#include "..\..\script_macros.hpp"
/*
    File: fn_requestInem.sqf
    Author: IceN & Tonic


*/

/*

O params não precisa do _posicao(ainda nao testado)


*/


params [
    ["_posicao","Unknown Player Position",[""]],
    //["_caller",objNull,[objNull]],
    ["_callerName","Unknown Player",[""]]
];



private ["_medicsOnline","_posP"];
_medicsOnline = independent countSide playableUnits; //Check if medics (indep) are in the room.
_posP = getPosATL player;

//life_corpse setVariable ["Revive",false,true]; //Set the corpse to a revivable state.

if (_medicsOnline > 0) then {
    //There is medics let's send them the request.
    //[life_corpse,profileName] remoteExecCall ["life_fnc_inemRequest",independent];
    //hint "Linha 25";
    //if (isNull _caller) exitWith {}; //Bad data
    //if (_caller == "") exitWith {};
    //hint "Linha 27";
    [_posP,profileName] remoteExecCall ["life_fnc_inemRequest", independent];
    closeDialog 0;
    //hint "Linha 29";
}



//Create a thread to monitor duration since last request (prevent spammage).
/*[] spawn  {
    ((findDisplay 3000) displayCtrl 3029) ctrlEnable false;
    sleep (2 * 10);
    ((findDisplay 3000) displayCtrl 3029) ctrlEnable true;
};*/
