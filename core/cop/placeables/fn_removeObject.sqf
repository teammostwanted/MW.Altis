private["_obj"];
_obj = nearestObjects[getPos player,["RoadCone_L_F","RoadBarrier_F","TapeSign_F","ArrowDesk_L_F","ArrowDesk_R_F"],2] select 0;
if(isNil "_obj") exitWith {};
if(_obj getVariable ["item",""] != "objectDeployed") exitWith {};
_type = typeof _obj;

_name = switch (_type) do
{
	case "RoadCone_L_F": {"roadcone"};
	case "RoadBarrier_F": {"roadbarrier"};
	case "TapeSign_F": {"tapesign"};
	case "ArrowDesk_L_F": {"arrowleft"};
	case "ArrowDesk_R_F": {"arrowright"};
	default {""};
};
if(_name == "") exitWith {};

if(([true,_name,1] call life_fnc_handleInv)) then
{
	titleText["Pegar.","PLAIN"];
	deleteVehicle _obj;
	[10] call life_fnc_addXP;
};