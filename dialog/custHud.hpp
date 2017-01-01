class custHUD
    {
        idd = 1000000;
        movingEnable =  0;
        enableSimulation = 1;
        enableDisplay = 1;
        duration =  99999;
        fadein =  0.1;
        fadeout =  0.1;
        name = "custHUD";
		onLoad = "with uiNameSpace do { custHUD = _this select 0 }";
        class controls 
            {
                class bg: Life_RscText
                {
                    idc = 1000;
                    x = 0.340156 * safezoneW + safezoneX;
                    y = 0.929 * safezoneH + safezoneY;
                    w = 0.314531 * safezoneW;
                    h = 0.055 * safezoneH;
                    colorBackground[] = {0,0,0,0.3};
                };
                class healthico: Life_RscPicture
                {
                    idc = 1200;
                    text = "icons\vida.paa";
                    x = 0.345312 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.020625 * safezoneW;
                    h = 0.033 * safezoneH;
                };
                class foodico: Life_RscPicture
                {
                    idc = 1201;
                    text = "icons\comida.paa";
                    x = 0.448438 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.020625 * safezoneW;
                    h = 0.033 * safezoneH;
                };
                class thirstico: Life_RscPicture
                {
                    idc = 1202;
                    text = "icons\bebida.paa";
                    x = 0.551562 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.020625 * safezoneW;
                    h = 0.033 * safezoneH;
                };
                class healthtext: Life_RscStructuredText
                {
                    idc = 1100;
                    text = "";
                    x = 0.371094 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.0721875 * safezoneW;
                    h = 0.033 * safezoneH;
                    colorText[] = {1,1,1,1};
                        class Attributes
                        {
                        color = "#FFFFFF";
                        align = "LEFT";
                        valign = "bottom";
                        underline = false;
                    }; 
                };
                class foodtext: Life_RscStructuredText
                {
                    idc = 1101;
                    text = "";
                    x = 0.474219 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.0721875 * safezoneW;
                    h = 0.033 * safezoneH;
                        class Attributes
                        {
                        color = "#FFFFFF";
                        align = "LEFT";
                        valign = "bottom";
                        underline = false;
                    }; 
                };
                class thirsttext: Life_RscStructuredText
                {
                    idc = 1102;
                    text = "";
                    x = 0.577344 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.0721875 * safezoneW;
                    h = 0.033 * safezoneH;
                        class Attributes
                        {
                        color = "#FFFFFF";
                        align = "LEFT";
                        valign = "bottom";
                        underline = false;
                    }; 
                };
                class banktitle: Life_RscStructuredText
                {
                    idc = 1001;
                    text = "Banco"; //--- ToDo: Localize;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.819 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.011 * safezoneH;
                    colorBackground[] = {1,0.2,0,1};
                };
                class cashtitle: Life_RscStructuredText
                {
                    idc = 1002;
                    text = "Dinheiro"; //--- ToDo: Localize;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.874 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.011 * safezoneH;
                    colorBackground[] = {1,0.2,0,1};
                };
                class bankbg: Life_RscText
                {
                    idc = 1004;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.83 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.044 * safezoneH;
                    colorBackground[] = {0,0,0,0.3};
                };
                class cashbg: Life_RscText
                {
                    idc = 1005;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.885 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.044 * safezoneH;
                    colorBackground[] = {0,0,0,0.3};
                };
                class bankcount: Life_RscStructuredText
                {
                    idc = 1103;
                    text = "";
                    x = 0.897031 * safezoneW + safezoneX;
                    y = 0.841 * safezoneH + safezoneY;
                    w = 0.0825 * safezoneW;
                    h = 0.022 * safezoneH;
                    colorBackground[] = {-1,-1,-1,0};
                };
                class cashcount: Life_RscStructuredText
                {
                    idc = 1104;
                    text = "";
                    x = 0.897031 * safezoneW + safezoneX;
                    y = 0.896 * safezoneH + safezoneY;
                    w = 0.0825 * safezoneW;
                    h = 0.022 * safezoneH;
                    colorBackground[] = {-1,-1,-1,0};
                };
                class playersbg: Life_RscText
                {
                    idc = 1003;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.94 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.044 * safezoneH;
                    colorBackground[] = {0,0,0,0.3};
                };
                class playercount: Life_RscStructuredText
                {
                    idc = 1105;
                    text = "";
                    x = 0.897031 * safezoneW + safezoneX;
                    y = 0.951 * safezoneH + safezoneY;
                    w = 0.0825 * safezoneW;
                    h = 0.022 * safezoneH;
                    colorBackground[] = {-1,-1,-1,0};
                };
                class Playerstitle: Life_RscStructuredText
                {
                    idc = 1006;
                    text = "Jogadores"; //--- ToDo: Localize;
                    x = 0.891875 * safezoneW + safezoneX;
                    y = 0.929 * safezoneH + safezoneY;
                    w = 0.0928125 * safezoneW;
                    h = 0.011 * safezoneH;
                    colorBackground[] = {1,0.2,0,1};
                    //sizeEx = 0.9 * GUI_GRID_H;
                };
                class watermark: Life_RscPicture
                {
                    idc = 1203;
                    text = "icons\marcaAgua.paa";
                    x = 0.0101562 * safezoneW + safezoneX;
                    y = 0.885 * safezoneH + safezoneY;
                    w = 0.0721875 * safezoneW;
                    h = 0.099 * safezoneH;
                };

            };
};