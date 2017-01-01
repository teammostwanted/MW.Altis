private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone6","_zone7","_zone8","_zone9","_zone10","_dis1","_dis2","_dis3","_dis4","_dis5","_dis6","_dis7","_dis8","_dis9","_dis10"];

_zone1 = getMarkerPos "marker_safezone_kavala"; // Kavala Safe
_zone2 = getMarkerPos "marker_safe_rebnorte";  // Rebelde Norte Safe
_zone3 = getMarkerPos "marker_safe_rebcentro";  // Rebelde Centro Safe
_zone4 = getMarkerPos "marker_safe_rebsul";  // Rebelde Sul Safe
_zone5 = getMarkerPos "marker_safe_pyrgos";  // Pyrgos Safe
_zone6 = getMarkerPos "marker_safe_poliaer";  // Policia Aerea Safe
_zone7 = getMarkerPos "marker_safe_athira";  // Athira Safe
_zone8 = getMarkerPos "marker_safe_polisofi";  // Policia Sofia Safe
_zone9 = getMarkerPos "marker_safe_sofia";  // Sofia Safe
_zone10 = getMarkerPos "marker_safe_poliathira";  // Policia Athira Safe
_dis1 = 1000;  // Kavala safe distancia
_dis2 = 80;  // Rebelde Norte safe distancia
_dis3 = 80;  // Rebelde Centro distancia
_dis4 = 80;  // Rebelde Sul safe distancia
_dis5 = 300;   // Pyrgos safe distancia
_dis6 = 35;  // Policia Aerea safe distancia
_dis7 = 300;  // Athira safe distancia
_dis8 = 30;  // Kavala safe distancia
_dis9 = 200;  // Kavala safe distancia
_dis10 = 50;  // Kavala safe distancia

_inArea = false;



switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8)|| (_zone9 distance player < _dis9)) && (!_inArea)) then
				{
					//_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					//hint "Acabaste de entrar numa zona segura!";
					hint parseText "<t color='#00ff00'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Entras-te numa zona segura!";
					player allowDamage false;
				};

				if (((_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9)) && (_inArea)) then
				{
					//player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText "<t color='#ff0000'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Sais-te de uma zona segura!";
					player allowDamage true;
				};

			};
		};

	};

	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8)|| (_zone9 distance player < _dis9)) && (!_inArea)) then
				{
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText "<t color='#00ff00'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Entras-te numa zona segura!";
					player allowDamage false;
				};

				if (((_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9)) && (_inArea)) then
				{
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText "<t color='#ff0000'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Sais-te de uma zona segura!";
					player allowDamage true;
				};

			};
		};

	};

	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8)|| (_zone9 distance player < _dis9)) && (!_inArea)) then
				{
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText "<t color='#00ff00'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Entras-te numa zona segura!";
					player allowDamage false;
				};

				if (((_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) &&(_zone9 distance player > _dis9)) && (_inArea)) then
				{
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText "<t color='#ff0000'><t size='2'>Zona Segura</t></t><br/><t color='#FFD700'><t size='1.0'>Aviso</t></t><br/>Sais-te de uma zona segura!";
					player allowDamage true;
				};

			};
		};

	};

	case east:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8)|| (_zone9 distance player < _dis9)) && (!_inArea)) then
				{
					//_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint "Acabaste de entrar numa zona segura!";
					player allowDamage false;
				};

				if (((_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9)) && (_inArea)) then
				{
					//player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint "Acabaste de sair de uma zona segura!";
					player allowDamage true;
				};

			};
		};

	};
	sleep 3;
};
