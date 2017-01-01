/*
	File: fn_welcomeNotification.sqf

	Description:
	Called upon first spawn selection and welcomes our player.
*/
_onScreenTime = 4.1;

_role1 = "Olá, como estás?";
_role1names = ["Bem vindo ao", "Bad As & MostWanted Altis Life Portugal"];
_role2 = "Entra no nosso Discord:";
_role2names = ["https://discord.gg/yP5tQxm"];
_role3 = "Admins Principais";
_role3names = ["Gongas Azores","Urber","melro","IceN","Riki"];
_role4 = "Servidor Altis Life em Portugues.";
_role4names = ["por MostWanted & Bad Ass"];
_role5 = "Admins";
_role5names = ["MostWanted & Bad Ass' "];
_role6 = "Developers";
_role6names = ["Gongas Azores","melro","IceN","Uber"];
_role7 = "Reports";
_role7names = ["Todos os Reports em video e prints"];
_role8 = "Diverte-te no servidor";
_role8names = ["Não te esqueças de ler as regras!"];
_role9 = "Um grande obrigado a";
_role9names = ["todos voces, pois sem voces não era possivel!<br/>Obrigado!"];

{
	sleep 2;
	_memberFunction = _x select 0;
	_memberNames = _x select 1;
	_finalText = format ["<t size='0.50' color='#cc9900' align='right'>%1<br /></t>", _memberFunction];
	_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
	{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
	_finalText = _finalText + "</t>";
	_onScreenTime + (((count _memberNames) - 1) * 0.5);
	[
		_finalText,
		[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
		[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
		_onScreenTime,
		0.5
	] spawn BIS_fnc_dynamicText;
	sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
	[_role1, _role1names],
	[_role2, _role2names],
	[_role3, _role3names],
	[_role4, _role4names],
	[_role5, _role5names],
	[_role6, _role6names],
	[_role7, _role7names],
	[_role8, _role8names],
	[_role9, _role9names]
];
