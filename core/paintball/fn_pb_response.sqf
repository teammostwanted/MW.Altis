private["_respondmode","_message"];

_respondmode = [_this,0,0,[0]] call BIS_fnc_param;

if (_respondmode==1) then {
    _message = [_this,1,"",[""]] call BIS_fnc_param;
    hint format ["%1",_message];
};

if (_respondmode==2) then {
    hint "Bem vindo à arena paintball! O proximo jogo começa daqui a 5 minutos!";
    meinePos = getPos player;
    [] call life_fnc_saveGear;
    meingear = life_gear;
    life_gear set [16,[]];
    RemoveAllWeapons player;
    {player removeMagazine _x;} foreach (magazines player);
    removeUniform player;
    removeVest player;
    removeBackpack player;
    removeGoggles player;
    removeHeadGear player;
    player forceAddUniform "U_I_Protagonist_VR";
    player addWeaponGlobal "hgun_Pistol_heavy_02_Yorris_F";
    player addMagazines ["6Rnd_45ACP_Cylinder" , 25];
    {
        player unassignItem _x;
        player removeItem _x;
    } foreach (assignedItems player);
    player allowDamage false;
    _wohin = round(random (count pb_positionen));
    if (_wohin==count pb_positionen) then {_wohin=_wohin-1;};
    _position = pb_positionen select _wohin;
    player setPos _position;
    player addEventHandler ["Hit", {
        _wohin = round(random (count pb_positionen));
        if (_wohin==count pb_positionen) then {_wohin=_wohin-1;};
        _position = pb_positionen select _wohin;
        player setPos _position;
    }];
};

if (_respondmode==3) then {
    life_gear = meingear;
    [] spawn life_fnc_Loadgear;
    player setPos meinePos;
    player allowDamage true;
    player removeAllEventHandlers "Hit";
    hint "O jogo terminou. Obrigado por jogares na paintball";
};
