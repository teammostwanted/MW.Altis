/*
    File: fn_inemRequest.sqf
    Author: IceN & Tonic
*/
params [
    ["_posicao","Unknown Player Position",[""]],
    //["_caller",objNull,[objNull]],
    ["_callerName","Unknown Player",[""]]
];
_posicao = _this select 0;
private ["_count","_markador"];//xd
_count = 20;
_markador = _callerName;
//_medicosOnline = independent countSide playableUnits;
//if (isNull _caller) exitWith {}; //Bad data

//["MedicalRequestEmerg",[format[localize "STR_Inem_Request",_callerName,_posicao]]] call BIS_fnc_showNotification;







["MedicalRequestEmerg",[format[localize "STR_Inem_Request",_callerName, _posicao]]] call BIS_fnc_showNotification;
createMarkerLocal ["InemAjuda", _posicao];
_markador setMarkerColorLocal "ColorRed";
_markador setMarkerTextLocal "!EMERGÊNCIA! " + _callerName;
_markador setMarkerTypeLocal "loc_Hospital";

//sleep 50;//Mudar o tempo para 500 ««««««««--------------



while (_count <= 20) do {
    _count = _count-1;
};

deleteMarkerLocal _markador;

