/*  
	Montrer son passeport   
@Author : Heimdall @AltisAurore.fr  
*/  

private["_target","_message","_file"];  

_target = cursorTarget;  
_file = "icons\civ.paa";

switch (playerSide) do { 
	case west : 
	{
		_file = "icons\cop.paa";
	}; 
	case civilian : 
	{
		_file = "icons\civ.paa";
	}; 
	case independent : 
	{
		_file = "icons\med.paa";
	};
	default {
		_file = "icons\civ.paa";
	}; 
};

if( isNull _target) then {_target = player;};  

if( !(_target isKindOf "Man") ) then {_target = player;};  

if( !(alive _target) ) then {_target = player;};  

_message = format["<img size='10' color='#FFFFFF' image='%1'/><br/><br/><t size='2.5'>%2</t><br/><t size='1'>Civil de Altis</t>", _file,name player];  

[player, _message] remoteExec ["life_fnc_passeportCiv",_target];