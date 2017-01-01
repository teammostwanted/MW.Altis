class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },//mota 4
            { "C_Hatchback_01_F", { "", "", -1 } },//hatchback
            { "C_Hatchback_01_sport_F", { "", "", -1 } },// hatchback sport
            { "C_SUV_01_F", { "", "", -1 } },//suv
            { "ivory_rs4_taxi", { "", "", -1 } },// rs4 taxi
            { "ivory_190e_taxi", { "", "", -1 } },//190 taxi
            { "ivory_rs4", { "", "", -1 } },// audi rs4
            { "Mrshounka_rs4_civ", { "", "", -1 } },// audi rs4
            { "shounka_rs6", { "", "", -1 } },// audi rs5 acant
            { "ivory_c", { "", "", -1 } }, // bentley
            { "zorak_bmw_m5", { "", "", -1 } },//bmw m5
            { "Mrshounka_bmwm1_civ", { "", "", -1 } },//bmw 1 serie
            { "Jonzie_30CSL", { "", "", -1 } },// bmw 3.0 csl
            { "ivory_e36", { "", "", -1 } },// bmw m3 e36
            { "ivory_m3", { "", "", -1 } },// bmw m3 e92
            { "Mrshounka_bmwm6_civ", { "", "", -1 } },// bmw m6
            { "Urbanized_CTSV_red", { "", "", -1 } },//caddillac ctsv
            { "Jonzie_Escalade", { "", "", -1 } },// cadillac escalade
            { "shounka_avalanche", { "", "", -1 } },//chevrolet avalanche
            { "shounka_monsteur", { "", "", -1 } },//chevrolet  monsteur
            { "ivory_suburban", { "", "", -1 } },// chevrolert suburban
            { "Mrshounka_a3_ds3_civ", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_bleufonce", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_rouge", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_jaune", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_rose", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_grise", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_violet", { "", "", -1 } },// citroen ds3
            { "Mrshounka_a3_ds3_civ_civ_orange", { "", "", -1 } },// citroen ds3
            { "shounka_nemo", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_noir", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_bleufonce", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_rouge", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_jaune", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_rose", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_grise", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_violet", { "", "", -1 } },// citroen nemo
            { "shounka_nemo_orange", { "", "", -1 } },// citroen nemo
            { "Jonzie_Datsun_510", { "", "", -1 } },// datsun bluebird
            { "Jonzie_Datsun_Z432", { "", "", -1 } },// datsun fairlady
            { "Mrshounka_a3_dodge15_civ", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_noir", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_bleufonce", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_rouge", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_jaune", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_rose", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_grise", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_violet", { "", "", -1 } },// dodge charger
            { "Mrshounka_a3_dodge15_civ_orange", { "", "", -1 } },// dodge charger
            { "Jonzie_Viper", { "", "", -1 } },//dodg viper
            { "Mrshounka_ducati_p", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_noir", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_bf", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_r", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_j", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_rose", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_g", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_v", { "", "", -1 } },// ducati
            { "Mrshounka_ducati_p_o", { "", "", -1 } },// ducati
            { "zorak_ford_focus_rs", { "", "", -1 } },//ford focus rs
            { "Jonzie_Raptor", { "", "", -1 } }, // ford f150
            { "Jonzie_XB", { "", "", -1 } },//ford falcon
            { "Mrshounka_mustang_civ", { "", "", -1 } }, //ford mustang
            { "Mrshounka_mustang_mat", { "", "", -1 } }, //ford mustang
            { "Mrshounka_mustang_noir", { "", "", -1 } }, //ford mustang
            { "Mrshounka_mustang_mat_n", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_bleufonce", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_mat_b", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_rouge", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_jaune", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_rose", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_grise", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_violet", { "", "", -1 } },//ford mustang
            { "Mrshounka_mustang_orange", { "", "", -1 } },//ford mustang
            { "Mrshounka_raptor_civ", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_noir", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_bleufonce", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_rouge", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_jaune", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_rose", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_grise", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_violet", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor_orange", { "", "", -1 } },//ford raptor
            { "Mrshounka_raptor2_civ", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_noir", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_bleufonce", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_rouge", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_jaune", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_rose", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_grise", { "", "", -1 } },//ford raptor2
            { "Mrshounka_raptor2_violet", { "", "", -1 } },//ford raptor2
            { "Jonzie_Transit", { "", "", -1 } },//Ford transit
            { "Mrshounka_Vandura_civ", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_noir", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_rouge", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_jaune", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_rose", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_grise", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_violet", { "", "", -1 } },//gmc vandura
            { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },//gmc vandura
            { "Mrshounka_golfvi_civ", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_noir", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_bleufonce", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_rouge", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_jaune", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_rose", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_grise", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_violet", { "", "", -1 } },//golf v1
            { "Mrshounka_golfvi_orange", { "", "", -1 } },//golf v1
            { "Jonzie_VE", { "", "", -1 } }, //holden commod
            { "MG_Honda_Civic_TypeR_04_Black", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Blue", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Red", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Silver", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Yellow", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Green", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_White", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Pink", { "", "", -1 } },//Honda civic
            { "MG_Honda_Civic_TypeR_04_Purple", { "", "", -1 } },//Honda civic
            { "shounka_h2", { "", "", -1 } },//hummer h2
            { "shounka_h2_noir", { "", "", -1 } },//hummer h2
            { "shounka_h2_bleufonce", { "", "", -1 } },//hummer h2
            { "shounka_h2_rouge", { "", "", -1 } },//hummer h2
            { "shounka_h2_jaune", { "", "", -1 } },//hummer h2
            { "shounka_h2_rose", { "", "", -1 } },//hummer h2
            { "shounka_h2_grise", { "", "", -1 } },//hummer h2
            { "shounka_h2_violet", { "", "", -1 } },//hummer h2
            { "shounka_h2_orange", { "", "", -1 } },//hummer h2
            { "Mrshounka_cherokee_noir", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_mat", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_bleu_mat", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_blanc", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_blanc_mat", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_violet", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_violet_mat", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_rouge", { "", "", -1 } },// jepp chaerokee
            { "Mrshounka_cherokee_noir_rouge_mat", { "", "", -1 } },// jepp chaerokee
            { "Jonzie_Ceed", { "", "", -1 } },//kia cee'd
            { "Mrshounka_evox_civ", { "", "", -1 } },//lancer evolutions
            { "Mrshounka_evox_bleufonce", { "", "", -1 } },//lancer evolutions
            { "Mrshounka_evox_grise", { "", "", -1 } },//lancer evolutions
            { "Mrshounka_evox_jaune", { "", "", -1 } },//lancer evolutions
            { "Mrshounka_evox_noir", { "", "", -1 } },//lancer evolutions
            { "ivory_lfa", { "", "", -1 } },//lexus lfa
            { "ivory_isf", { "", "", -1 } },// lexus isf
            { "ivory_elise", { "", "", -1 } },// lofus elise
            { "Urbanized_GranTurismo_black", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_white", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_blue", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_purple", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_orange", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_darkred", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_hotpink", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_yellow", { "", "", -1 } },//GranTurismo
            { "Urbanized_GranTurismo_Lime", { "", "", -1 } },//GranTurismo
            { "Jonzie_Quattroporte", { "", "", -1 } },//maserati Quattroporte
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },//m8 4wd
            { "I_C_Offroad_02_unarmed_F", { "", "", -1 } },//m8 4wd v2
            { "ivory_mp4", { "", "", -1 } },//mclaren mp4
            { "ivory_190e", { "", "", -1 } },//mercedes 190
            { "Mrshounka_c63_2015_civ", { "", "", -1 } }, //mercedes c63
            { "Mrshounka_c63_2015_mat", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_noir", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_mat_n", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_bleufonce", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_mat_b", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_rouge", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_jaune", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_rose", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_grise", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_violet", { "", "", -1 } },//mercedes c63
            { "Mrshounka_c63_2015_orange", { "", "", -1 } },//mercedes c63
            { "shounka_clk", { "", "", -1 } },//mercedes clk
            { "shounka_clk_noir", { "", "", -1 } },//mercedes clk
            { "shounka_clk_bleufonce", { "", "", -1 } },//mercedes clk
            { "shounka_clk_rouge", { "", "", -1 } },//mercedes clk
            { "shounka_clk_jaune", { "", "", -1 } },//mercedes clk
            { "shounka_clk_rose", { "", "", -1 } },//mercedes clk
            { "shounka_clk_grise", { "", "", -1 } },//mercedes clk
            { "shounka_clk_violet", { "", "", -1 } },//mercedes clk
            { "shounka_clk_orange", { "", "", -1 } },//mercedes clk
            { "Urbanized_G65_red", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_black", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_white", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_blue", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_purple", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_pink", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_orange", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_yellow", { "", "", -1 } },//mercedes g65
            { "Urbanized_G65_Lime", { "", "", -1 } },//mercedes g65
            { "Jonzie_Mini_Cooper", { "", "", -1 } },// mini cooper
            { "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },// mini cooper rally
            { "Jonzie_Galant", { "", "", -1 } },// mitsubichi galant
            { "ivory_evox", { "", "", -1 } },// mitsubichi lancer evilition x
            { "Mrshounka_a3_gtr_civ", { "", "", -1 } },// nissan gtr 2012
            { "Mrshounka_a3_gtr_civ_noir", { "", "", -1 } },// nissan gtr 2012
            { "Mrshounka_a3_gtr_civ_bleu", { "", "", -1 } },// nissan gtr 2012
            { "ivory_r34", { "", "", -1 } },// nissan skyline
            { "Mrshounka_207_civ", { "", "", -1 } }, // peugeot 207 rc
            { "Mrshounka_207_noir", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_bleufonce", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_rouge", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_jaune", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_rose", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_grise", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_violet", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_207_orange", { "", "", -1 } },// peugeot 207 rc
            { "Mrshounka_a3_308_civ", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_noir", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_bleufonce", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_rouge", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_jaune", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_rose", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_grise", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_violet", { "", "", -1 } },// peugeot 308
            { "Mrshounka_a3_308_civ_orange", { "", "", -1 } },// peugeot 308
            { "shounka_porsche911", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_noir", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_bleufonce", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_rouge", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_jaune", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_rose", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_grise", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_violet", { "", "", -1 } },//porsche 911
            { "shounka_porsche911_orange", { "", "", -1 } },//porsche 911
            { "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_noir", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_bleufonce", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_rouge", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_jaune", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_rose", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_grise", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_violet", { "", "", -1 } },//renault meganne
            { "Mrshounka_megane_rs_2015_orange", { "", "", -1 } },//renault meganne
            { "Mrshounka_twingo_p", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_noir", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_bf", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_r", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_j", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_rose", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_g", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_v", { "", "", -1 } },//renault twingo
            { "Mrshounka_twingo_p_o", { "", "", -1 } },//renault twingo
            { "ivory_gt500", { "", "", -1 } },// shelby gt500
            { "Mrshounka_a3_smart_civ", { "", "", -1 } },//smart
            { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },//smart
            { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },//smart
            { "Mrshounka_subaru08_civ", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_noir", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_bleufonce", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_rouge", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_jaune", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_rose", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_grise", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_violet", { "", "", -1 } },// subaru impreza
            { "Mrshounka_subaru08_orange", { "", "", -1 } },// subaru impreza
            { "ivory_wrx", { "", "", -1 } }, // subaru impreza wrx
            { "Jonzie_STI", { "", "", -1 } },// subaru wrx
            { "Jonzie_Corolla", { "", "", -1 } },//toyota sprinter
            { "ivory_supra", { "", "", -1 } },//toyota supra
            { "ivory_supra_topsecret", { "", "", -1 } },//toyota supra top
            { "ivory_gti", { "", "", -1 } },//volkswagen
            { "Mrshounka_Volkswagen_Touareg_civ", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_noir", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_rouge", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_jaune", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_rose", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_grise", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_violet", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_Volkswagen_Touareg_orange", { "", "", -1 } },//volkswagen touareg
            { "Mrshounka_yamaha_p", { "", "", -1 } }, //yamaha r6
            { "Mrshounka_yamaha_p_noir", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_bf", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_r", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_j", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_rose", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_g", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_v", { "", "", -1 } },//yamaha r6
            { "Mrshounka_yamaha_p_o", { "", "", -1 } } //yamaha r6
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } },
            { "MG_Redbull_F1", { "", "", -1 } },
            { "MG_Ferrari_F1", { "", "", -1 } },
            { "MG_Ariel_Atom", { "", "", -1 } },
            { "MG_Ariel_Atom_No2", { "", "", -1 } },
            { "MG_Ariel_Atom_No3", { "", "", -1 } },
            { "MG_Ariel_Atom_No4", { "", "", -1 } },
            { "MG_Ariel_Atom_No5", { "", "", -1 } },
            { "MG_Ariel_Atom_No6", { "", "", -1 } },
            { "MG_Ariel_Atom_No8", { "", "", -1 } },
            { "MG_Ariel_Atom_No9", { "", "", -1 } },
            { "MG_Ariel_Atom_No10", { "", "", -1 } },
            { "MG_Ariel_Atom_No11", { "", "", -1 } },
            { "MG_Ariel_Atom_No12", { "", "", -1 } },
            { "MG_Ariel_Atom_No14", { "", "", -1 } },
            { "MG_Ariel_Atom_No16", { "", "", -1 } },
            { "MG_Ariel_Atom_No20", { "", "", -1 } },
            { "MG_Ariel_Atom_No21", { "", "", -1 } },
            { "MG_Ariel_Atom_No22", { "", "", -1 } },
            { "MG_Ariel_Atom_No26", { "", "", -1 } },
            { "MG_Ariel_Atom_No30", { "", "", -1 } },
            { "MG_Ariel_Atom_No38", { "", "", -1 } },
            { "MG_Ariel_Atom_No69", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } }, //C_Van_01_box_F -1
            { "C_Van_01_fuel_F", { "", "", -1 } }, // caminhao de combustivel
            { "shounka_a3_spr_civ", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_noir", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_bleufonce", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_rouge", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_jaune", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_rose", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_grise", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_violet", { "", "", -1 } },// mercedes
            { "shounka_a3_spr_civ_orange", { "", "", -1 } },// mercedes
            { "I_Truck_02_transport_F", { "", "", -1 } }, //Transportador Zamak (descoberto)
            { "I_Truck_02_covered_F", { "", "", -1 } }, //Transportador Zamak (coberto)
            { "B_Truck_01_transport_F", { "", "", -1 } },//Transportador hemtt
            { "O_Truck_03_transport_F", { "", "", -1 } },//Transportador tenpast (descoberto)
            { "O_Truck_03_covered_F", { "", "", -1 } },//Transportador Tempest (Coberto)
            { "B_Truck_01_box_F", { "", "", -1 } },//Báu de HEMTT
            { "O_Truck_03_device_F", { "", "", -1 } },//Tempast divice (dispositivo)
            { "I_Truck_02_fuel_F", { "", "", -1 } },//zamak de combustivel
            { "B_Truck_01_fuel_F", { "", "", -1 } },// HEMMT de combustivel
            { "Jonzie_Western", { "", "", -1 } },//Qestern star 4900
            { "jonzie_box_truck", { "", "", -1 } },//Man TGX Box Truck
            { "Jonzie_Curtain_Roadtrain", { "", "", -1 } },
            { "Jonzie_Curtain", { "", "", -1 } }

        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "I_C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Transport_04_bench_F", { "", "", -1 } },
            { "O_Heli_Transport_04_box_F", { "", "", -1 } },
            { "O_Heli_Transport_04_covered_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "B_T_VTOL_01_infantry_F", { "", "", -1 } },
            { "B_T_VTOL_01_vehicle_F", { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", {"", "", -1} },
            { "C_Plane_Civil_01_F", {"", "", -1} }
            //{ "GR_AW101_1", { "", "", -1 } },
            //{ "GR_Bell412_3", { "", "", -1 } },
            //{ "GR_Bell412_2", { "", "", -1 } },
          //  { "GR_UH1H_6", { "", "", -1 } },
          //  { "GR_UH1N_1", { "", "", -1 } },
            //{ "GR_UH1N_2", { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "I_C_Boat_Transport_02_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } }
        };
     };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            //{ "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F", { "", "", -1 } },
            { "MG_Honda_Civic_TypeR_04_Whitecamo", { "", "", -1 } },
            { "MG_Honda_Civic_TypeR_04_Greencamo", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "Jonzie_Tow_Truck", { "", "", -1 } },
            { "MG_AA_Tow_Truck_Black", { "", "", -1 } },
            { "icen_jipebombeiro", { "", "", -1 } },
            { "C_Offroad_01_repair_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", { "", "", -1 } },
            { "FPT_MAN_base_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "GR_Bell412_1", { "", "", -1 } }
            //{ "GR_UH1H_4", { "", "", -1 } },
            //{ "", { "", "", -1 } },
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "icen_bugatti_policiaptone", { "life_coplevel", "SCALAR", 6 } },
            { "icen_rs4_policiaptone", { "life_coplevel", "SCALAR", 4 } },
            { "icen_mp4_policiaptone", { "life_coplevel", "SCALAR", 4 } },
            { "icen_evox_policiaptone", { "life_coplevel", "SCALAR", 2 } },
            { "icen_evox_policiaptwo", { "life_coplevel", "SCALAR", 2 } },
            { "zorak_bmw_m5_police", { "life_coplevel", "SCALAR", 2 } },
            { "shounka_a3_brinks_noir", { "life_coplevel", "SCALAR", 7 } },
            { "zorak_bugatti_chiron_police", { "life_coplevel", "SCALAR", 2 } },
            { "Urbanized_CTSV_UC1", { "life_coplevel", "SCALAR", 5 } },
            { "cg_ducati_pol_reg", { "life_coplevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_black", { "life_coplevel", "SCALAR", 6 } },
            { "zorak_ford_focus_rs_police", { "life_coplevel", "SCALAR", 2 } },
            { "Mrshounka_veneno_c", { "life_coplevel", "SCALAR", 6 } },
            { "ivory_isf_marked", { "life_coplevel", "SCALAR", 2 } },
            { "ivory_isf_unmarked", { "life_coplevel", "SCALAR", 2 } },
            { "Urbanized_G65_UC1", { "life_coplevel", "SCALAR", 5 } },
            { "B_T_LSV_01_unarmed_F", { "life_coplevel", "SCALAR", 2 } },
            { "ivory_wrx_marked", { "life_coplevel", "SCALAR", 1 } },
            { "ivory_wrx_unmarked", { "life_coplevel", "SCALAR", 1 } },
            { "ivory_wrx_slicktop", { "life_coplevel", "SCALAR", 1 } },
            { "C_Offroad_01_F", { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "GIGN_heli", { "life_coplevel", "SCALAR", 5 } },
            { "O_Heli_Light_02_unarmed_F", { "life_coplevel", "SCALAR", 2 } }
            //{ "GR_UH1D_1", { "life_coplevel", "SCALAR", 2 } },
            //{ "GR_UH1H_3", { "life_coplevel", "SCALAR", 2 } },
            //{ "", { "", "", -1 } },
            //{ "", { "", "", -1 } },
            //{ "", { "", "", -1 } },
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class civ_reboques {
        side = "civ";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } }
        };
    };
    //VIP TIER 1
    class vip1_cars {
        side = "civ";
        vehicles[] = {
            //Exemplo: { " aqui é o id do veiculo ", "", 2000, { "life_donorlevel", "SCALAR", 1 } }, 1 = VIP TIER 1
            { "B_Quadbike_01_F", "", 21675, { "life_donorlevel", "SCALAR", 1 } },
            { "C_Hatchback_01_F", "", 31875, { "life_donorlevel", "SCALAR", 1 } },
            { "C_SUV_01_F", "", 17638, { "life_donorlevel", "SCALAR", 1 } },
            { "C_Hatchback_01_sport_F", "", 26988, { "life_donorlevel", "SCALAR", 1 } },
            { "C_Van_01_transport_F", "", 34000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_rs4_taxi", "", 255000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_190e_taxi", "", 233750, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_agera_p", "", 1020000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Audi_R8_11_Black", "", 2146250, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_rs4", "", 255213, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_rs4_civ", "", 297500, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_rs6", "", 102425, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_c", "", 131750, { "life_donorlevel", "SCALAR", 1 } },
            { "zorak_bmw_m5", "", 132600, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_bmwm1_civ", "", 151725, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_30CSL", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_e36", "", 127925, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_m3", "", 59500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_bmwm6_civ", "", 151725, { "life_donorlevel", "SCALAR", 1 } },
            { "zorak_bugatti_chiron", "", 6411975, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_veyron", "", 2550000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_CTSV_red", "", 116875, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Escalade", "", 85468, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_avalanche", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_monsteur", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_suburban", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_noir", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_bleufonce", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_rouge", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_jaune", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_rose", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_grise", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_violet", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_orange", "", 85043, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_noir", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_bleufonce", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_rouge", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_jaune", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_rose", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_grise", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_violet", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo_orange", "", 89675, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Datsun_510", "", 88400, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Datsun_Z432", "", 87550, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_noir", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_bleufonce", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_rouge", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_jaune", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_rose", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_grise", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_violet", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_dodge15_civ_orange", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Viper", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_noir", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_bf", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_r", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_j", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_rose", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_g", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_v", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_ducati_p_o", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_black", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_white", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_blue", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_pink", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_orange", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_darkred", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_458Ferrari_yellow", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_noir", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_bleufonce", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_rouge", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_jaune", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_rose", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_grise", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_violet", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_f430_spider_orange", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_red", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_black", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_white", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_blue", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_purple", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_pink", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_orange", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_darkred", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_hotpink", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_yellow", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_Lime", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_Black_S", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_Blue_S", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_LaFerrari_Lime_S", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "zorak_ford_focus_rs", "", 84575, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Raptor", "", 63750, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_XB", "", 79050, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_civ", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_mat", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_noir", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_mat_n", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_bleufonce", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_mat_b", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_rouge", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_jaune", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_rose", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_grise", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_violet", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_mustang_orange", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_civ", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_noir", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_bleufonce", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_rouge", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_jaune", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_rose", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_grise", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_violet", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor_orange", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_civ", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_noir", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_bleufonce", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_rouge", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_jaune", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_rose", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_grise", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_raptor2_violet", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Transit", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_noir", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_bleufonce", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_rouge", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_jaune", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_rose", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_grise", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_violet", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Vandura_civ_orange", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_civ", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_noir", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_bleufonce", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_rouge", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_jaune", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_rose", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_golfvi_grise", "", 978000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Black", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Blue", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Red", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Silver", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Yellow", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Green", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_White", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Pink", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Purple", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Whitecamo", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "MG_Honda_Civic_TypeR_04_Greencamo", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_noir", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_bleufonce", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_rouge", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_jaune", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_rose", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_grise", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_violet", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_h2_orange", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_mat", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_bleu", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_bleu_mat", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_blanc", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_blanc_mat", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_violet", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_violet_mat", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_rouge", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_cherokee_noir_rouge_mat", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Ceed", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_noir", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_bleufonce", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_rouge", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_jaune", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_rose", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_grise", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_violet", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "mrshounka_huracan_c_orange", "", 2975000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_veneno_c", "", 4250000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_veneno_c_noir", "", 4250000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_veneno_c_bleu", "", 4250000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_veneno_c_jaune", "", 4250000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_evox_civ", "", 161500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_evox_bleufonce", "", 161500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_evox_grise", "", 161500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_evox_jaune", "", 161500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_evox_noir", "", 161500, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_lfa", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_isf", "", 157250, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_elise", "", 157250, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_black", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_white", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_blue", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_purple", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_orange", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_darkred", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_hotpink", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_yellow", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_GranTurismo_Lime", "", 93500, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Quattroporte", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            //{ "C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            //{ "I_C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_f1", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_mp4", "", 425000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_190e", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_civ", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_mat", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_noir", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_mat_n", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_bleufonce", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_mat_b", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_rouge", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_jaune", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_rose", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_grise", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_violet", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_c63_2015_orange", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_noir", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_bleufonce", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_rouge", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_jaune", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_rose", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_grise", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_violet", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_clk_orange", "", 89250, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_red", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_black", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_white", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_blue", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_purple", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_pink", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_orange", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_yellow", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Urbanized_G65_Lime", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Mini_Cooper", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Mini_Cooper_R_spec", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Galant", "", 59500, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_evox", "", 81222, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_gtr_civ", "", 131750, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_gtr_civ_noir", "", 131750, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_gtr_civ_bleu", "", 131750, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_r34", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_noir", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_bleufonce", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_rouge", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_jaune", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_rose", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_grise", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_violet", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_pagani_c_orange", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_civ", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_noir", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_bleufonce", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_rouge", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_jaune", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_rose", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_grise", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_violet", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_207_orange", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_noir", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_bleufonce", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_rouge", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_jaune", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_rose", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_grise", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_violet", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_civ_orange", "", 85850, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_noir", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_bleufonce", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_rouge", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_jaune", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_rose", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_grise", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_violet", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_porsche911_orange", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_civ", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_noir", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_bleufonce", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_rouge", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_jaune", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_rose", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_grise", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_violet", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_megane_rs_2015_orange", "", 106675, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_noir", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_bf", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_r", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_j", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_rose", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_g", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_v", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_twingo_p_o", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_gt500", "", 80750, { "life_donorlevel", "SCALAR", 1 } },
            //{ "Mrshounka_a3_smart_civ", "", 76500, { "life_donorlevel", "SCALAR", 1 } },
            //{ "Mrshounka_a3_smart_civ_noir", "", 76500, { "life_donorlevel", "SCALAR", 1 } },
            //{ "Mrshounka_a3_smart_civ_bleu", "", 76500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_civ", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_noir", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_bleufonce", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_rouge", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_jaune", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_rose", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_grise", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_violet", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_orange", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_wrx", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_STI", "", 102000, { "life_donorlevel", "SCALAR", 1 } },
            { "Jonzie_Corolla", "", 76500, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_supra", "", 76500, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_supra_topsecret", "", 80750, { "life_donorlevel", "SCALAR", 1 } },
            { "ivory_gti", "", 85425, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_civ", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_noir", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_bleufonce", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_rouge", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_jaune", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_rose", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_grise", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_violet", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_Volkswagen_Touareg_orange", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_noir", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_bf", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_r", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_j", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_rose", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_g", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_v", "", 127500, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_yamaha_p_o", "", 127500, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class vip1_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Heli_Light_01_F", "", 158100, { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Light_02_unarmed_F",  "", 178500, { "life_donorlevel", "SCALAR", 1 } },
            { "I_Heli_Transport_02_F",  "", 425000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Heli_Transport_03_unarmed_F", "", 6800000, { "life_donorlevel", "SCALAR", 1 } },
            { "I_C_Heli_Light_01_civil_F", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Transport_04_bench_F",  "", 340000, { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Transport_04_box_F", "", 595000, { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Transport_04_covered_F", "", 382500, { "life_donorlevel", "SCALAR", 1 } },
            { "I_Heli_light_03_unarmed_F", "", 637500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_T_VTOL_01_infantry_F", "", 17000000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_T_VTOL_01_vehicle_F", "", 17000000, { "life_donorlevel", "SCALAR", 1 } }
            //{ "GR_AW101_1", "", 425000, { "life_donorlevel", "SCALAR", 1 } },
            //{ "GR_Bell412_3", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
          //{ "GR_Bell412_2", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
          //  { "GR_UH1H_6", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
          //  { "GR_UH1N_1", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
          //  { "GR_UH1N_2", "", 212500, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class vip1_truck {
        side = "civ";
        vehicles[] = {
              { "C_Van_01_box_F", "", 85000, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_noir", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_bleufonce", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_rouge", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_jaune", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_rose", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_grise", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_violet", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "shounka_a3_spr_civ_orange", "", 234196, { "life_donorlevel", "SCALAR", 1 } },
              { "I_Truck_02_transport_F", "", 106250, { "life_donorlevel", "SCALAR", 1 } },
              { "I_Truck_02_covered_F", "", 153000, { "life_donorlevel", "SCALAR", 1 } },
              { "B_Truck_01_transport_F", "", 680000, { "life_donorlevel", "SCALAR", 1 } },
              { "O_Truck_03_transport_F", "", 850000, { "life_donorlevel", "SCALAR", 1 } },
              { "O_Truck_03_covered_F", "", 1402500, { "life_donorlevel", "SCALAR", 1 } },
              { "B_Truck_01_box_F", "", 3400000, { "life_donorlevel", "SCALAR", 1 } },
              { "O_Truck_03_device_F", "", 3867925, { "life_donorlevel", "SCALAR", 1 } },
              { "C_Van_01_fuel_F", "", 119000, { "life_donorlevel", "SCALAR", 1 } },
              { "I_Truck_02_fuel_F", "", 204000, { "life_donorlevel", "SCALAR", 1 } },
              { "B_Truck_01_fuel_F", "", 637500, { "life_donorlevel", "SCALAR", 1 } },
              //{ "shouka_a3_renaultmagnum_f", "", 128172, { "life_donorlevel", "SCALAR", 1 } },
              { "Jonzie_Western", "", 1700000, { "life_donorlevel", "SCALAR", 1 } },
              { "jonzie_box_truck", "", 2337925, { "life_donorlevel", "SCALAR", 1 } },
              { "Jonzie_Curtain_Roadtrain", "", 4250000, { "life_donorlevel", "SCALAR", 1 } },
              { "Jonzie_Curtain", "", 4675000, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class vip1_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", "", 21675, { "life_donorlevel", "SCALAR", 1 } },
            { "C_Boat_Civil_01_F", "", 25500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_SDV_01_F", "", 170000, { "life_donorlevel", "SCALAR", 1 } },
            { "I_C_Boat_Transport_02_F", "", 212500, { "life_donorlevel", "SCALAR", 1 } },
            { "C_Scooter_Transport_01_F", "", 17000, { "life_donorlevel", "SCALAR", 1 } }
        };
     };
    //VIP TIER 2
    class vip2_cars {
        side = "civ";
        vehicles[] = {
            //Exemplo: { " aqui é o id do veiculo ", "", 2000, { "life_donorlevel", "SCALAR", 2 } }, 2 = VIP TIER 2
            { "B_Quadbike_01_F", "", 19125, { "life_donorlevel", "SCALAR", 2 } },
            { "C_Hatchback_01_F", "", 28125, { "life_donorlevel", "SCALAR", 2 } },
            { "C_SUV_01_F", "", 15563, { "life_donorlevel", "SCALAR", 2 } },
            { "C_Hatchback_01_sport_F", "", 23813, { "life_donorlevel", "SCALAR", 2 } },
            { "C_Van_01_transport_F", "", 30000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_rs4_taxi", "", 225000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_190e_taxi", "", 206250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_agera_p", "", 900000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Audi_R8_11_Black", "", 1893750, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_rs4", "", 225188, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_rs4_civ", "", 262500, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_rs6", "", 90375, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_c", "", 116250, { "life_donorlevel", "SCALAR", 2 } },
            { "zorak_bmw_m5", "", 117000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_bmwm1_civ", "", 133875, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_30CSL", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_e36", "", 112875, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_m3", "", 52500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_bmwm6_civ", "", 133875, { "life_donorlevel", "SCALAR", 2 } },
            { "zorak_bugatti_chiron", "", 5657625, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_veyron", "", 2250000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_CTSV_red", "", 103125, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Escalade", "", 75413, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_avalanche", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_monsteur", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_suburban", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_noir", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_bleufonce", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_rouge", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_jaune", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_rose", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_grise", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_violet", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_ds3_civ_civ_orange", "", 75038, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_noir", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_bleufonce", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_rouge", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_jaune", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_rose", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_grise", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_violet", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_nemo_orange", "", 79125, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Datsun_510", "", 78000, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Datsun_Z432", "", 77250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_noir", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_bleufonce", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_rouge", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_jaune", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_rose", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_grise", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_violet", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_dodge15_civ_orange", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Viper", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_noir", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_bf", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_r", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_j", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_rose", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_g", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_v", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_ducati_p_o", "", 89250, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_black", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_white", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_blue", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_pink", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_orange", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_darkred", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_458Ferrari_yellow", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_noir", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_bleufonce", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_rouge", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_jaune", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_rose", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_grise", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_violet", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_f430_spider_orange", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_red", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_black", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_white", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_blue", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_purple", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_pink", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_orange", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_darkred", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_hotpink", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_yellow", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_Lime", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_Black_S", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_Blue_S", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_LaFerrari_Lime_S", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "zorak_ford_focus_rs", "", 75625, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Raptor", "", 56250, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_XB", "", 69750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_civ", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_mat", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_noir", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_mat_n", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_bleufonce", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_mat_b", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_rouge", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_jaune", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_rose", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_grise", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_violet", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_mustang_orange", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_civ", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_noir", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_bleufonce", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_rouge", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_jaune", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_rose", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_grise", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_violet", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor_orange", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_civ", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_noir", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_bleufonce", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_rouge", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_jaune", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_rose", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_grise", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_raptor2_violet", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Transit", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_noir", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_bleufonce", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_rouge", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_jaune", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_rose", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_grise", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_violet", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Vandura_civ_orange", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_civ", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_noir", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_bleufonce", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_rouge", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_jaune", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_rose", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_golfvi_grise", "", 81000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Black", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Blue", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Red", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Silver", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Yellow", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Green", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_White", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Pink", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Purple", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Whitecamo", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "MG_Honda_Civic_TypeR_04_Greencamo", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_noir", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_bleufonce", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_rouge", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_jaune", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_rose", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_grise", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_violet", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_h2_orange", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_mat", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_bleu", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_bleu_mat", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_blanc", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_blanc_mat", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_violet", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_violet_mat", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_rouge", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_cherokee_noir_rouge_mat", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Ceed", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_noir", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_bleufonce", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_rouge", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_jaune", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_rose", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_grise", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_violet", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "mrshounka_huracan_c_orange", "", 2625000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_veneno_c", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_veneno_c_noir", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_veneno_c_bleu", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_veneno_c_jaune", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_evox_civ", "", 142500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_evox_bleufonce", "", 142500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_evox_grise", "", 142500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_evox_jaune", "", 142500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_evox_noir", "", 142500, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_lfa", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_isf", "", 138750, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_elise", "", 138750, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_black", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_white", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_blue", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_purple", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_orange", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_darkred", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_hotpink", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_yellow", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_GranTurismo_Lime", "", 82500, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Quattroporte", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            //{ "C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 2 } },
            //{ "I_C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_f1", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_mp4", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_190e", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_civ", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_mat", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_noir", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_mat_n", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_bleufonce", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_mat_b", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_rouge", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_jaune", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_rose", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_grise", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_violet", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_c63_2015_orange", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_noir", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_bleufonce", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_rouge", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_jaune", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_rose", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_grise", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_violet", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_clk_orange", "", 78750, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_red", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_black", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_white", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_blue", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_purple", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_pink", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_orange", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_yellow", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Urbanized_G65_Lime", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Mini_Cooper", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Mini_Cooper_R_spec", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Galant", "", 52500, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_evox", "", 71666, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_gtr_civ", "", 116250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_gtr_civ_noir", "", 116250, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_gtr_civ_bleu", "", 116250, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_r34", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_noir", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_bleufonce", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_rouge", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_jaune", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_rose", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_grise", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_violet", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_pagani_c_orange", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_civ", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_noir", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_bleufonce", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_rouge", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_jaune", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_rose", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_grise", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_violet", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_207_orange", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_noir", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_bleufonce", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_rouge", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_jaune", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_rose", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_grise", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_violet", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_a3_308_civ_orange", "", 75750, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_noir", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_bleufonce", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_rouge", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_jaune", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_rose", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_grise", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_violet", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "shounka_porsche911_orange", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_civ", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_noir", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_bleufonce", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_rouge", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_jaune", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_rose", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_grise", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_violet", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_megane_rs_2015_orange", "", 94125, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_noir", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_bf", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_r", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_j", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_rose", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_g", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_v", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_twingo_p_o", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_gt500", "", 71250, { "life_donorlevel", "SCALAR", 2 } },
            //{ "Mrshounka_a3_smart_civ", "", 67500, { "life_donorlevel", "SCALAR", 2 } },
            //{ "Mrshounka_a3_smart_civ_noir", "", 67500, { "life_donorlevel", "SCALAR", 2 } },
            //{ "Mrshounka_a3_smart_civ_bleu", "", 67500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_civ", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_noir", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_bleufonce", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_rouge", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_jaune", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_rose", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_grise", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_violet", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_subaru08_orange", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_wrx", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_STI", "", 90000, { "life_donorlevel", "SCALAR", 2 } },
            { "Jonzie_Corolla", "", 67500, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_supra", "", 67500, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_supra_topsecret", "", 71250, { "life_donorlevel", "SCALAR", 2 } },
            { "ivory_gti", "", 75375, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_civ", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_noir", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_bleufonce", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_rouge", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_jaune", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_rose", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_grise", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_violet", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_Volkswagen_Touareg_orange", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_noir", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_bf", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_r", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_j", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_rose", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_g", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_v", "", 112500, { "life_donorlevel", "SCALAR", 2 } },
            { "Mrshounka_yamaha_p_o", "", 112500, { "life_donorlevel", "SCALAR", 2 } }
        };
    };

    class vip2_air {
        side = "civ";
        vehicles[] = {
          { "C_Heli_Light_01_civil_F", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
          { "B_Heli_Light_01_F", "", 139500, { "life_donorlevel", "SCALAR", 2 } },
          { "O_Heli_Light_02_unarmed_F",  "", 157500, { "life_donorlevel", "SCALAR", 2 } },
          { "I_Heli_Transport_02_F",  "", 375000, { "life_donorlevel", "SCALAR", 2 } },
          { "B_Heli_Transport_03_unarmed_F", "", 6000000, { "life_donorlevel", "SCALAR", 2 } },
          { "I_C_Heli_Light_01_civil_F", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
          { "O_Heli_Transport_04_bench_F",  "", 300000, { "life_donorlevel", "SCALAR", 2 } },
          { "O_Heli_Transport_04_box_F", "", 595000, { "life_donorlevel", "SCALAR", 2 } },
          { "O_Heli_Transport_04_covered_F", "", 337500, { "life_donorlevel", "SCALAR", 2 } },
          { "I_Heli_light_03_unarmed_F", "", 562500, { "life_donorlevel", "SCALAR", 2 } },
          { "B_T_VTOL_01_infantry_F", "", 15000000, { "life_donorlevel", "SCALAR", 2 } },
          { "B_T_VTOL_01_vehicle_F", "", 15000000, { "life_donorlevel", "SCALAR", 2 } }
          //{ "GR_AW101_1", "", 375000, { "life_donorlevel", "SCALAR", 2 } },
        //  { "GR_Bell412_3", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
        //  { "GR_Bell412_2", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
        //  { "GR_UH1H_6", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
      //    { "GR_UH1N_1", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
      //    { "GR_UH1N_2", "", 187500, { "life_donorlevel", "SCALAR", 2 } }
        };
    };

    class vip2_truck {
        side = "civ";
        vehicles[] = {
             { "C_Van_01_box_F", "", 75000, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_noir", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_bleufonce", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_rouge", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_jaune", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_rose", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_grise", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_violet", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "shounka_a3_spr_civ_orange", "", 206644, { "life_donorlevel", "SCALAR", 2 } },
             { "I_Truck_02_transport_F", "", 93750, { "life_donorlevel", "SCALAR", 2 } },
             { "I_Truck_02_covered_F", "", 135000, { "life_donorlevel", "SCALAR", 2 } },
             { "B_Truck_01_transport_F", "", 600000, { "life_donorlevel", "SCALAR", 2 } },
             { "O_Truck_03_transport_F", "", 750000, { "life_donorlevel", "SCALAR", 2 } },
             { "O_Truck_03_covered_F", "", 237500, { "life_donorlevel", "SCALAR", 2 } },
             { "B_Truck_01_box_F", "", 3000000, { "life_donorlevel", "SCALAR", 2 } },
             { "O_Truck_03_device_F", "", 3412875, { "life_donorlevel", "SCALAR", 2 } },
             { "C_Van_01_fuel_F", "", 105000, { "life_donorlevel", "SCALAR", 2 } },
             { "I_Truck_02_fuel_F", "", 180000, { "life_donorlevel", "SCALAR", 2 } },
             { "B_Truck_01_fuel_F", "", 562500, { "life_donorlevel", "SCALAR", 2 } },
             //{ "shouka_a3_renaultmagnum_f", "", 113093, { "life_donorlevel", "SCALAR", 2 } },
             { "Jonzie_Western", "", 1500000, { "life_donorlevel", "SCALAR", 2 } },
             { "jonzie_box_truck", "", 2062875, { "life_donorlevel", "SCALAR", 2 } },
             { "Jonzie_Curtain_Roadtrain", "", 3750000, { "life_donorlevel", "SCALAR", 2 } },
             { "Jonzie_Curtain", "", 4125000, { "life_donorlevel", "SCALAR", 2 } }
        };
    };

    class vip2_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", "", 19125, { "life_donorlevel", "SCALAR", 2 } },
            { "C_Boat_Civil_01_F", "", 19125, { "life_donorlevel", "SCALAR", 2 } },
            { "B_SDV_01_F", "", 150000, { "life_donorlevel", "SCALAR", 2 } },
            { "I_C_Boat_Transport_02_F", "", 187500, { "life_donorlevel", "SCALAR", 2 } },
            { "C_Scooter_Transport_01_F", "", 15000, { "life_donorlevel", "SCALAR", 2 } }
        };
     };
    //VIP TIER 3
    class vip3_cars {
        side = "civ";
        vehicles[] = {
            //Exemplo: { " aqui é o id do veiculo ", "", 2000, { "life_donorlevel", "SCALAR", 3 } }, 3 = VIP TIER 3
            { "B_Quadbike_01_F", "", 12750, { "life_donorlevel", "SCALAR", 3 } },
            { "C_Hatchback_01_F", "", 1875, { "life_donorlevel", "SCALAR", 3 } },
            { "C_SUV_01_F", "", 10375, { "life_donorlevel", "SCALAR", 3 } },
            { "C_Hatchback_01_sport_F", "", 15875, { "life_donorlevel", "SCALAR", 3 } },
            { "C_Van_01_transport_F", "", 20000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_rs4_taxi", "", 150000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_190e_taxi", "", 137500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_agera_p", "", 600000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Audi_R8_11_Black", "", 1262500, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_rs4", "", 150125, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_rs4_civ", "", 175000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_rs6", "", 60250, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_c", "", 77500, { "life_donorlevel", "SCALAR", 3 } },
            { "zorak_bmw_m5", "", 78000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_bmwm1_civ", "", 89250, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_30CSL", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_e36", "", 75250, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_m3", "", 35000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_bmwm6_civ", "", 89250, { "life_donorlevel", "SCALAR", 3 } },
            { "zorak_bugatti_chiron", "", 3771750, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_veyron", "", 15000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_CTSV_red", "", 68750, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Escalade", "", 50275, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_avalanche", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_monsteur", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_suburban", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_noir", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_bleufonce", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_civ_rouge", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_civ_jaune", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_civ_rose", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_civ_grise", "", 50025, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_ds3_civ_civ_violet", "", 50025, { "life_donorlevel", "SCALAR", 1 } },
            { "Mrshounka_a3_ds3_civ_civ_orange", "", 50025, { "life_donorlevel", "SCALAR", 1 } },
            { "shounka_nemo", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_noir", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_bleufonce", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_rouge", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_jaune", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_rose", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_grise", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_violet", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_nemo_orange", "", 52750, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Datsun_510", "", 52000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Datsun_Z432", "", 51500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_noir", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_bleufonce", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_rouge", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_jaune", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_rose", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_grise", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_violet", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_dodge15_civ_orange", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Viper", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_noir", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_bf", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_r", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_j", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_rose", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_g", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_v", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_ducati_p_o", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_black", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_white", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_blue", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_pink", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_orange", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_darkred", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_458Ferrari_yellow", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_noir", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_bleufonce", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_rouge", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_jaune", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_rose", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_grise", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_violet", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_f430_spider_orange", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_red", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_black", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_white", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_blue", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_purple", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_pink", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_orange", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_darkred", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_hotpink", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_yellow", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_Lime", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_Black_S", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_Blue_S", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_LaFerrari_Lime_S", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "zorak_ford_focus_rs", "", 49750, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Raptor", "", 37500, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_XB", "", 46500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_civ", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_mat", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_noir", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_mat_n", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_bleufonce", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_mat_b", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_rouge", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_jaune", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_rose", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_grise", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_violet", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_mustang_orange", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_civ", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_noir", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_bleufonce", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_rouge", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_jaune", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_rose", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_grise", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_violet", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor_orange", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_civ", "", 50250, { "life_donorlevel", "SCALAR",  3 } },
            { "Mrshounka_raptor2_noir", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_bleufonce", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_rouge", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_jaune", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_rose", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_grise", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_raptor2_violet", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Transit", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_noir", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_bleufonce", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_rouge", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_jaune", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_rose", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_grise", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_violet", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Vandura_civ_orange", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_civ", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_noir", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_bleufonce", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_rouge", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_jaune", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_rose", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_golfvi_grise", "", 54000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Black", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Blue", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Red", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Silver", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Yellow", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Green", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_White", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Pink", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Purple", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Whitecamo", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "MG_Honda_Civic_TypeR_04_Greencamo", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_noir", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_bleufonce", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_rouge", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_jaune", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_rose", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_grise", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_violet", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_h2_orange", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_mat", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_bleu", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_bleu_mat", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_blanc", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_blanc_mat", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_violet", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_violet_mat", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_rouge", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_cherokee_noir_rouge_mat", "", 525000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Ceed", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_noir", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_bleufonce", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_rouge", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_jaune", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_rose", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_grise", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_violet", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "mrshounka_huracan_c_orange", "", 1750000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_veneno_c", "", 2500000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_veneno_c_noir", "", 2500000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_veneno_c_bleu", "", 2500000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_veneno_c_jaune", "", 2500000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_evox_civ", "", 95000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_evox_bleufonce", "", 95000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_evox_grise", "", 95000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_evox_jaune", "", 95000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_evox_noir", "", 95000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_lfa", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_isf", "", 92500, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_elise", "", 92500, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_black", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_white", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_blue", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_purple", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_orange", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_darkred", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_hotpink", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_yellow", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_GranTurismo_Lime", "", 55000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Quattroporte", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            //{ "C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 3 } },
            //{ "I_C_Offroad_02_unarmed_F", "", 2000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_f1", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_mp4", "", 250000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_190e", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_civ", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_mat", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_noir", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_mat_n", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_bleufonce", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_mat_b", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_rouge", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_jaune", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_rose", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_grise", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_violet", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_c63_2015_orange", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_noir", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_bleufonce", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_rouge", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_jaune", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_rose", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_grise", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_violet", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_clk_orange", "", 52500, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_red", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_black", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_white", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_blue", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_purple", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_pink", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_orange", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_yellow", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Urbanized_G65_Lime", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Mini_Cooper", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Mini_Cooper_R_spec", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Galant", "", 35000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_evox", "", 47778, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_gtr_civ", "", 77500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_gtr_civ_noir", "", 77500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_gtr_civ_bleu", "", 77500, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_r34", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_noir", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_bleufonce", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_rouge", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_jaune", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_rose", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_grise", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_violet", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_pagani_c_orange", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_civ", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_noir", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_bleufonce", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_rouge", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_jaune", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_rose", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_grise", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_violet", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_207_orange", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_noir", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_bleufonce", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_rouge", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_jaune", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_rose", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_grise", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_violet", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_a3_308_civ_orange", "", 50500, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_noir", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_bleufonce", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_rouge", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_jaune", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_rose", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_grise", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_violet", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "shounka_porsche911_orange", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_civ", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_noir", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_bleufonce", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_rouge", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_jaune", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_rose", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_grise", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_violet", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_megane_rs_2015_orange", "", 62750, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_noir", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_bf", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_r", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_j", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_rose", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_g", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_v", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_twingo_p_o", "", 50000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_gt500", "", 47500, { "life_donorlevel", "SCALAR", 3 } },
            //{ "Mrshounka_a3_smart_civ", "", 45000, { "life_donorlevel", "SCALAR", 3 } },
            //{ "Mrshounka_a3_smart_civ_noir", "", 45000, { "life_donorlevel", "SCALAR", 3 } },
            //{ "Mrshounka_a3_smart_civ_bleu", "", 45000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_civ", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_noir", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_bleufonce", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_rouge", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_jaune", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_rose", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_grise", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_violet", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_subaru08_orange", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_wrx", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_STI", "", 60000, { "life_donorlevel", "SCALAR", 3 } },
            { "Jonzie_Corolla", "", 45000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_supra", "", 45000, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_supra_topsecret", "", 47500, { "life_donorlevel", "SCALAR", 3 } },
            { "ivory_gti", "", 50250, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_civ", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_noir", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_bleufonce", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_rouge", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_jaune", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_rose", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_grise", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_violet", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_Volkswagen_Touareg_orange", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_noir", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_bf", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_r", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_j", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_rose", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_g", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_v", "", 75000, { "life_donorlevel", "SCALAR", 3 } },
            { "Mrshounka_yamaha_p_o", "", 75000, { "life_donorlevel", "SCALAR", 3 } }
        };
    };

    class vip3_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
            { "B_Heli_Light_01_F", "", 93000, { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F",  "", 105000, { "life_donorlevel", "SCALAR", 3 } },
            { "I_Heli_Transport_02_F",  "", 250000, { "life_donorlevel", "SCALAR", 3 } },
            { "B_Heli_Transport_03_unarmed_F", "", 4000000, { "life_donorlevel", "SCALAR", 3 } },
            { "I_C_Heli_Light_01_civil_F", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Transport_04_bench_F",  "", 200000, { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Transport_04_box_F", "", 350000, { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Transport_04_covered_F", "", 225000, { "life_donorlevel", "SCALAR", 3 } },
            { "I_Heli_light_03_unarmed_F", "", 375000, { "life_donorlevel", "SCALAR", 3 } },
            { "B_T_VTOL_01_infantry_F", "", 10000000, { "life_donorlevel", "SCALAR", 3 } },
            { "B_T_VTOL_01_vehicle_F", "", 10000000, { "life_donorlevel", "SCALAR", 3 } }
          //  { "GR_AW101_1", "", 250000, { "life_donorlevel", "SCALAR", 3 } },
          //  { "GR_Bell412_3", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
          //  { "GR_Bell412_2", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
          //  { "GR_UH1H_6", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
          //  { "GR_UH1N_1", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
          //  { "GR_UH1N_2", "", 125000, { "life_donorlevel", "SCALAR", 3 } }
        };
    };

    class vip3_truck {
        side = "civ";
        vehicles[] = {
             { "C_Van_01_box_F", "", 5000, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_noir", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_bleufonce", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_rouge", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_jaune", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_rose", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_grise", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_violet", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "shounka_a3_spr_civ_orange", "", 137763, { "life_donorlevel", "SCALAR", 3 } },
             { "I_Truck_02_transport_F", "", 62500, { "life_donorlevel", "SCALAR", 3 } },
             { "I_Truck_02_covered_F", "", 90000, { "life_donorlevel", "SCALAR", 3 } },
             { "B_Truck_01_transport_F", "", 400000, { "life_donorlevel", "SCALAR", 3 } },
             { "O_Truck_03_transport_F", "", 500000, { "life_donorlevel", "SCALAR", 3 } },
             { "O_Truck_03_covered_F", "", 825000, { "life_donorlevel", "SCALAR", 3 } },
             { "B_Truck_01_box_F", "", 2000000, { "life_donorlevel", "SCALAR", 3 } },
             { "O_Truck_03_device_F", "", 2275250, { "life_donorlevel", "SCALAR", 3 } },
             { "C_Van_01_fuel_F", "", 70000, { "life_donorlevel", "SCALAR", 3 } },
             { "I_Truck_02_fuel_F", "", 120000, { "life_donorlevel", "SCALAR", 3 } },
             { "B_Truck_01_fuel_F", "", 375000, { "life_donorlevel", "SCALAR", 3 } },
             //{ "shouka_a3_renaultmagnum_f", "", 75395, { "life_donorlevel", "SCALAR", 3 } },
             { "Jonzie_Western", "", 1000000, { "life_donorlevel", "SCALAR", 3 } },
             { "jonzie_box_truck", "", 1375250, { "life_donorlevel", "SCALAR", 3 } },
             { "Jonzie_Curtain_Roadtrain", "", 2500000, { "life_donorlevel", "SCALAR", 3 } },
             { "Jonzie_Curtain", "", 2750000, { "life_donorlevel", "SCALAR", 3 } }
        };
    };

    class vip3_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", "", 12750, { "life_donorlevel", "SCALAR", 3 } },
            { "C_Boat_Civil_01_F", "", 15000, { "life_donorlevel", "SCALAR", 3 } },
            { "B_SDV_01_F", "", 100000, { "life_donorlevel", "SCALAR", 3 } },
            { "I_C_Boat_Transport_02_F", "", 125000, { "life_donorlevel", "SCALAR", 3 } },
            { "C_Scooter_Transport_01_F", "", 10000, { "life_donorlevel", "SCALAR", 3 } }
        };
     };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 450;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Swat", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 60;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 30;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };
    //Camiao renault
    class shouka_a3_renaultmagnum_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150790;
        textures[] = { };
    };

    class jonzie_box_truck {
        vItemSpace = 3500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2750500;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 850;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 4550500;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 65000;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 550;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 8500;
        textures[] = { };
    };

    class Jonzie_Western {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 65;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 60;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 17000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Medico", "med", {
                "textures\medico\medico_offroad.paa"
            } },
            { "Bombeiro", "med", {
                "textures\medico\BOMBEIROoffroad.paa"
            } },
            { "Swat", "cop", {
                "textures\policia\swat_offroad.paa"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 5;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class FPT_MAN_base_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };
    //Evox1IceN
    class icen_evox_policiaptone {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 156000;
        textures[] = {};
    };
    //Evox2IceN
    class icen_evox_policiaptwo {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 156000;
        textures[] = {};
    };
    //BuggatiIceN
    class icen_bugatti_policiaptone {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3000000;
        textures[] = {};
    };
    //Rs4IceN
    class icen_rs4_policiaptone {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 254000;
        textures[] = {};
    };
    //mp4IceN
    class icen_mp4_policiaptone {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 568000;
        textures[] = {};
    };
    //JipeBombeiroIceN
    class icen_jipebombeiro {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };
    //Buggati
    class ivory_veyron {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3000000;
        textures[] = {
            { "Policia", "cop", {
                "textures\policia\ivory_veyronmw.paa"
            } }
        };
    };
    //Audi rs4 cop
    class ivory_rs4_marked {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {
            { "Brigada de Transito", "cop", {
                "textures\policia\ivory_rs4_mw.paa"
            } }
        };
    };
    //Audi rs4 taxi
    class ivory_rs4_taxi {
        vItemSpace = 50;
        licenses[] = { {"taxista"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
    // audi rs4
    class ivory_rs4 {
        vItemSpace = 50;
        licenses[] = { {"taxista"}, {""}, {""}, {""} };
        price = 300250;
        textures[] = {};
    };
    //mercedes taxi
    class ivory_190e_taxi {
        vItemSpace = 50;
        licenses[] = { {"taxista"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {};
    };
    // ivory mp4
    class ivory_mp4 {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class ivory_evox_marked {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    //Camião de Reboque
    class Jonzie_Tow_Truck {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 31750;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Policia", "cop", {
                "textures\policia\lapd_hatchback.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 285      ;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 230;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Policia", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 700;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1650000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 67;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 37500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 83;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20750;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Policia", "cop", {
                "textures\policia\lapd_suv.paa"
            } },
            { "Protecao Civil", "med", {
                "textures\medico\proteciv_suv.paa"
            } },
            { "Medico", "med", {
                "textures\medico\medic_suv.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 145;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {
            { "Swat", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    //medico urban jipe
    class ivory_suburban_ems {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {
            { "Bombeiro", "med", {
                "textures\medico\ivory_suburban_mw.paa"
            } }
        };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 186000;
        textures[] = {
            { "Policia", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Medico", "med", {
                "textures\medico\hummingbirdmedic.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 210000;
        textures[] = {
            { "Policia", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Medico", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 60;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 190;
        vFuelSpace = 500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 200;
        vFuelSpace = 35000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 400;
        vFuelSpace = 45000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class Mrshounka_agera_p {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Black {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2525000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 178500;
        textures[] = {};
    };

    class Jonzie_30CSL {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class ivory_e36 {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150500;
        textures[] = {};
    };

    class ivory_m3 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_civ {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 178500;
        textures[] = {};
    };

    class zorak_bugatti_chiron {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7543500;
        textures[] = {};
    };

    class Urbanized_CTSV_red {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 137500;
        textures[] = {};
    };

    class Jonzie_Escalade {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100550;
        textures[] = {};
    };

    class Mrshounka_rs4_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class shounka_rs6 {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120200;
        textures[] = {};
    };

    class ivory_c {
           vItemSpace = 60;
           licenses[] = { {"driver"}, {""}, {""}, {""} };
           price = 155000;
           textures[] = {};
         };

    class zorak_bmw_m5 {
           vItemSpace = 60;
           licenses[] = { {""}, {""}, {""}, {""} };
           price = 156000;
           textures[] = {};
         };

    class shounka_avalanche {
           vItemSpace = 85;
           licenses[] = { {"driver"}, {""}, {""}, {""} };
           price = 101000;
           textures[] = {};
         };

    class shounka_monsteur {
           vItemSpace = -85;
           licenses[] = { {""}, {""}, {""}, {""} };
           price = 200000;
           textures[] = {};
         };

    class ivory_suburban {
        vItemSpace = 85;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_bleufonce {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_civ_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_civ_rose {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_civ_grise {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };
    class Mrshounka_a3_ds3_civ_civ_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };
    class Mrshounka_a3_ds3_civ_civ_jaune {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class Mrshounka_a3_ds3_civ_civ_orange {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100050;
        textures[] = {};
    };

    class shounka_nemo {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_noir {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_bleufonce {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_rouge {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_jaune {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_rose {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_grise {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_violet {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class shounka_nemo_orange {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105500;
        textures[] = {};
    };

    class Jonzie_Datsun_510 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 104000;
        textures[] = {};
    };

    class Jonzie_Datsun_Z432 {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 103000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_bleufonce {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_rouge {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_jaune {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_rose {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_grise {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_violet {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_orange {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Jonzie_Viper {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_ducati_p {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_bf {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_r {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_j {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_g {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_v {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_o {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_white {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_blue {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_pink {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_darkred {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_yellow {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_noir {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_bleufonce {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_rouge {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_jaune {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_rose {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_grise {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_violet {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class shounka_f430_spider_orange {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_red {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_black {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_white {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_blue {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_purple {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_pink {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_orange {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_darkred {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_hotpink {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_yellow {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Lime {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Black_S {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Blue_S {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Lime_S {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class zorak_ford_focus_rs {
          vItemSpace = 50;
          licenses[] = { {"driver"}, {""}, {""}, {""} };
          price = 995000;
          textures[] = {};
    };

    class Jonzie_Raptor {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95500;
        textures[] = {};
    };

    class Jonzie_XB {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 93000;
        textures[] = {};
    };

    class Mrshounka_mustang_civ {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_mat {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_noir {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_mat_n {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_bleufonce {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_mat_b {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_rouge {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_jaune {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_rose {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_grise {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_violet {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_mustang_orange {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_raptor_civ {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_noir {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_bleufonce {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_rouge {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_jaune {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_rose {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_grise {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_violet {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor_orange {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_raptor2_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_noir {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_rouge {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_jaune {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_rose {
        vItemSpace = 75;
        licenses[] = { {"100000"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_grise {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_raptor2_violet {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Jonzie_Transit {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_noir {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_bleufonce {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_rouge {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_jaune {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_rose {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_grise {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_violet {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_orange {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class Mrshounka_golfvi_civ {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_noir {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_bleufonce {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_rouge {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_jaune {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_rose {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_grise {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_violet {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Mrshounka_golfvi_orange {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 108000;
        textures[] = {};
    };

    class Jonzie_VE {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {};
    };

    class Jonzie_Highway {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Blue {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Red {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Silver {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Yellow {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Green {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_White {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Pink {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Purple {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Whitecamo {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Greencamo {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_h2 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_noir {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_bleufonce {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_rouge {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_jaune {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_rose {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_grise {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_violet {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class shounka_h2_orange {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_mat {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_bleu {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_bleu_mat {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_blanc {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_blanc_mat {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_violet_mat {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Mrshounka_cherokee_noir_rouge_mat {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Jonzie_Ceed {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class mrshounka_huracan_c {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_bleufonce {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_jaune {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_rose {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_grise {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class mrshounka_huracan_c_orange {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {};
    };

    class Mrshounka_veneno_c {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_noir {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_bleu {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_jaune {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };

    class Mrshounka_evox_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class Mrshounka_evox_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class Mrshounka_evox_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class Mrshounka_evox_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class Mrshounka_evox_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {};
    };

    class ivory_lfa {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };

    class ivory_isf {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 185000;
        textures[] = {};
    };

    class ivory_elise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 185000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_white {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_blue {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_purple {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_darkred {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_hotpink {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_yellow {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Lime {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class Jonzie_Quattroporte {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    class I_C_Offroad_02_unarmed_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    class ivory_f1 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class ivory_190e {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_mat {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_mat_n {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_mat_b {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class shounka_clk {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class shounka_clk_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };

    class Urbanized_G65_red {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_white {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_blue {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_purple {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_pink {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_yellow {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class Urbanized_G65_Lime {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class shounka_a3_spr_civ {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_noir {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_bleufonce {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_rouge {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_jaune {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_rose {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_grise {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_violet {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class shounka_a3_spr_civ_orange {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275525;
        textures[] = {};
    };

    class Jonzie_Mini_Cooper {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Jonzie_Galant {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

    class ivory_evox {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95555;
        textures[] = {};
    };

    class Mrshounka_a3_gtr_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = {};
    };

    class Mrshounka_a3_gtr_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = {};
    };

    class Mrshounka_a3_gtr_civ_bleu {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = {};
    };

    class ivory_r34 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_pagani_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };

    class Mrshounka_207_civ {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_bleufonce {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_jaune {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_rose {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
       textures[] = {};
    };

    class Mrshounka_207_grise {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_207_orange {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_noir {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_bleufonce {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_rouge {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_jaune {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_rose {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_grise {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_violet {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class Mrshounka_a3_308_civ_orange {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 101000;
        textures[] = {};
    };

    class shounka_porsche911 {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_noir {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_bleufonce {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_rouge {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_jaune {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_rose {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_grise {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_violet {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class shounka_porsche911_orange {
        vItemSpace = 70;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_noir {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_rouge {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_jaune {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_rose {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_grise {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_violet {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_megane_rs_2015_orange {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125500;
        textures[] = {};
    };

    class Mrshounka_twingo_p {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_bf {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_r {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_j {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_g {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_v {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_o {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class ivory_gt500 {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    class Mrshounka_a3_smart_civ {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000;
        textures[] = {};
    };

    class Mrshounka_a3_smart_civ_noir {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000;
        textures[] = {};
    };

    class Mrshounka_a3_smart_civ_bleu {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000;
        textures[] = {};
    };

    class Mrshounka_subaru08_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Mrshounka_subaru08_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class ivory_wrx {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Jonzie_STI {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class Jonzie_Corolla {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {};
    };

    class ivory_supra {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {};
    };

    class ivory_supra_topsecret {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    class ivory_gti {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100500;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_civ {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_bleufonce {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_jaune {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_rose {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_grise {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_orange {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_noir {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_bf {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_r {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_j {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_rose {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_g {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_v {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_o {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class MG_Redbull_F1 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class MG_Ferrari_F1 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class MG_Ariel_Atom {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No2 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No3 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No4 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No5 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No6 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No8 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No9 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No10 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No11 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No12 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class driver_No14 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No16 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No20 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No21 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No22 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No26 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No30 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No38 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class MG_Ariel_Atom_No69 {
        vItemSpace = -1;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Jonzie_Curtain_Roadtrain {
        vItemSpace = 6000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };

    class Jonzie_Curtain {
        vItemSpace = 7500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5500000;
        textures[] = {};
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 500;
        licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 1000;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 8000000;
        textures[] = {};
    };

    class O_Heli_Transport_04_bench_F {
        vItemSpace = 200;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class O_Heli_Transport_04_box_F {
        vItemSpace = 700;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class O_Heli_Transport_04_covered_F {
        vItemSpace = 300;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {};
    };

    class I_C_Boat_Transport_02_F {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 270000;
        textures[] = {};
    };

    class C_Offroad_01_repair_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class C_Heli_Light_01_civil_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class I_C_Heli_Light_01_civil_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 120;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class MG_AA_Tow_Truck_Black {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class B_T_LSV_01_unarmed_F {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class zorak_bmw_m5_police {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class shounka_a3_brinks_noir {
        vItemSpace = 10000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3;
        textures[] = {};
    };

    class zorak_bugatti_chiron_police {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_CTSV_UC1 {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };

    class ivory_suburban_marked {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class ivory_suburban_unmarked {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class ivory_suburban_slicktop {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class cg_ducati_pol_reg {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class zorak_ford_focus_rs_police {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Mrshounka_evox_rose {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Mrshounka_evox_rouge {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Mrshounka_evox_violet {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_isf_marked {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_isf_unmarked {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_isf_slicktop {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class Urbanized_G65_UC1 {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class Urbanized_G65_UC2 {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class Urbanized_G65_UC3 {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class shounka_a3_gendsprinter {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_evox_unmarked {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_evox_slicktop {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_wrx_marked {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_wrx_unmarked {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class ivory_wrx_slicktop {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class GIGN_heli {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };
    class GR_AW101_1 {
        vItemSpace = 500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class GR_Bell412_3 {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_Bell412_2 {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1H_6 {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1N_1 {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1N_2 {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_Bell412_1 {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1H_4 {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1D_1 {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class GR_UH1H_3 {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
    class  B_T_VTOL_01_infantry_F {
        vItemSpace = 20000;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {};
    };
    class  B_T_VTOL_01_vehicle_F {
        vItemSpace = 20000;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {};
    };
    class  C_Plane_Civil_01_F {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
    class  C_Plane_Civil_01_racing_F {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
};
