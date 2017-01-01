#include "..\..\script_macros.hpp"
/*
    File: fn_adminGodMode.sqf
    Author: Tobias 'Xetoxyc' Sittenauer

    Description: Enables God mode for Admin
*/

if (FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if (life_god) then {
    life_god = false;
    titleText [localize "STR_ANOTF_godModeOff","PLAIN"]; titleFadeOut 2;
    player allowDamage true;
    [0,format [localize "STR_NOTF_adminHasGodOff",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];//Colocar STR_NOTF_adminHasGodOff no strings.xml
} else {
    life_god = true;
    titleText [localize "STR_ANOTF_godModeOn","PLAIN"]; titleFadeOut 2;
    player allowDamage false;
    [0,format [localize "STR_NOTF_adminHasGodOn",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];//Colocar STR_NOTF_adminHasGodOff no strings.xml
};
