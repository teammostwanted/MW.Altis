/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
        //Amarrar
         life_actions = [player addAction["<t color='#cc0000'>Amarrar mãos</t>",life_fnc_restrainAction,cursorTarget,9999999,false,false,"",'
        !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && speed cursorTarget < 5 ']];
     //Sequestro SURRENDER
         life_actions = [player addAction["<t color='#cc0000'>Amarrar mãos</t>",life_fnc_restrainAction,cursorTarget,9999999,false,false,"",'
        !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon" && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && speed cursorTarget < 5']];
        life_actions = life_actions + [player addAction["Dar Murro",life_fnc_punchBallsAction,"",0,false,false,"",'        
        !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"]']];
        //Passport 
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Mostrar CC</t>",life_fnc_civPasseport,"",1,false,true,"",' !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget']];
    };
    case independent:
    {
      //Medic Enter
      //Driver Seat    
      life_actions = life_actions + [player addAction[localize "Entrar em Motorista",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];    

      //Passenger Seat
      life_actions = life_actions + [player addAction[localize "Entrar em Passageiro",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];    

      //Gunner Seat    
      life_actions = life_actions + [player addAction[localize "Entrar em Atirador",life_fnc_copEnter,"gunner",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];    

      //Exit   
      life_actions = life_actions + [player addAction[localize "Sair do Carro",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player)']];

      life_actions = life_actions + [player addAction["<t color='#00FF00'>Mostrar CC</t>",life_fnc_civPasseport,"",1,false,true,"",' !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget']];
    };
    case west:
    {
      life_actions = life_actions + [player addAction["Pegar",life_fnc_removeObject,"",0,false,false,"",'typeof cursorTarget in ["RoadCone_F","RoadCone_L_F","SignAd_Sponsor_F","Land_BarGate_F","Land_Crash_barrier_F","PlasticBarrier_03_orange_F","PlasticBarrier_02_yellow_F","Land_PortableLight_single_F","Land_PortableLight_double_F","RoadBarrier_small_F","plp_upm_WoodBarrierLongPolice"]']];
      life_actions = life_actions + [player addAction["Dar Murro",life_fnc_punchBallsAction,"",0,false,false,"",'        
      !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"]']];
      life_actions = life_actions + [player addAction["<t color='#00FF00'>Mostrar CC</t>",life_fnc_civPasseport,"",1,false,true,"",' !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget']];
    };
};
