#include "..\..\script_macros.hpp"
/*
    File: fn_adminSkipTime.sqf
    Author: ColinM9991

    Description:
    Figure it out.
*/
private["_value","_action"];
if (FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
_value = parseNumber(ctrlText 9942);
if (_value < 0) exitWith {};
if (_value > 24) exitWith {hint localize "STR_ANOTF_Fail01"};

_action = [
    format [localize "STR_ANOTF_TimeWarn",[_value] call life_fnc_numberText],
    localize "STR_Admin_TempoMuda",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
    skipTime _value;
    hint format [localize "STR_ANOTF_SuccessTime",[_value] call life_fnc_numberText];
    closeDialog 0;
} else {
    hint localize "STR_NOTF_ActionCancel";
    closeDialog 0;
};
