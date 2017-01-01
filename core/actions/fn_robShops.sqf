/*
file: fn_robShops.sqf
Author: MrKraken
Description:
Executes the rob shob action!
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "Não podes assaltar bombas de gasolina!" };
if(_robber distance _shop > 5) exitWith { hint "Precisas de estar num raio de 5m da registadora para assaltar!" };

if !(_kassa) then { _kassa = 10000; };
if (_rip) exitWith { hint "O assalto já está a descorrer!" };
if (vehicle player != _robber) exitWith { hint "Tens de sair do veiculo!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, não metes medo a ninguem! Sai já daqui ou chamo a polícia!" };
if (_kassa == 0) exitWith { hint "Esta registadora não tem dinheiro!" };

_rip = true;
_kassa = 120000 + round(random 60000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 50) then {[1,format["ALARME! - A Bomba de gasolina: %1 está a ser assaltada!", _shop]] remoteExec ["life_fnc_broadcast",west]; };

_cops = (west countSide playableUnits);
if(_cops < 1) exitWith{[_vault,-1] remoteExec ["disableSerialization;",2]; hint "Não estão policias online para assaltar a bomba de gasolina!";};
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Assalto a decorrer, fica num raio de (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_rip) then
{
while{true} do
{
sleep 3;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Assalto a decorrer, fica num raio de (10m) (%1%2)...",round(_cP * 100),"%"];
_Pos = position player; // by ehno: get player pos
                                _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
                                "Marker200" setMarkerColor "ColorRed";
                                "Marker200" setMarkerText "!!!ATENÇÃO!!! -> Assalto <- !!!ATENÇÃO!!!";
                                "Marker200" setMarkerType "mil_warning";
if(_cP >= 1) exitWith {};
if(_robber distance _shop > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shop > 10.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "Tens de estar a 10m da registadora para assaltar! - Agora a registadora está bloqueada."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];

titleText[format["Roubas-te %1 €, agora foge antes que os polícias te apanham!",[_kassa] call life_fnc_numberText],"PLAIN"];
deleteMarker "Marker200"; // by ehno delete maker
life_cash = life_cash + _kassa;

_rip = false;
life_use_atm = false;
sleep (30 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_action = _shop addAction["Assaltar bomba de gasolina",life_fnc_robstore];
_shop switchMove "";