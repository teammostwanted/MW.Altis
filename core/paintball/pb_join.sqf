if (joinmode==0) then {
    _PUID = getPlayerUID player;
    hint "Um pedido foi enviado para o servidor , por favor espera!";
    [[_PUID],"TON_fnc_paintball",false,false] spawn life_fnc_MP;
    joinmode = 1;
} else {
    hint "Tu já entras-te no lobby. Por favor tenta mais tarde!";
};
