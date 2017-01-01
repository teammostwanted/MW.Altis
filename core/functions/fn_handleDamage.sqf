#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (_unit getVariable["Revive",false]) exitWith {};
        _curWep = currentWeapon _source;
        if (_projectile in ["B_9x21_Ball","B_556x45_dual"] && _curWep in ["hgun_P07_snds_F","arifle_SDAR_F"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                private["_distance"];
                _distance = if (_projectile == "B_556x45_dual") then {100} else {35};
                _damage = false;
                if (_unit distance _source < _distance) then {
                    if (!life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = false;
            };
        };
    };
};
//VDM Report And ADD
if ((isPlayer _source) && (vehicle _source != _source)) then {
if(_part == "body" && (player getVariable["limit",true]) && (side _source == civilian)) then {
player setVariable ["limit",false];
[_source] spawn {
_driver = _this select 0;
[0,format["%1 just ran over %2!", name _driver, name player]] remoteExec ["life_fnc_broadcast",0];
sleep(10);
player setVariable ["limit",true];
    };
};              
_damage = getDammage player;
};

[] spawn life_fnc_hudUpdate;
_damage;
