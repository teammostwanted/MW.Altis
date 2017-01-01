/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\safezone.sqf";
[] execVM "scripts\welcome.sqf";
[] execVM "scripts\IntLight.sqf";
[] execVM "scripts\Tempo.sqf";
//[] execVM "scripts\cidadao.sqf";//teste

StartProgress = true;
