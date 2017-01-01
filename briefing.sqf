waitUntil {!isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["changelog","Informações do Servidor"];
player createDiarySubject ["credits","Credits"];
player createDiarySubject ["serverrules","Regras"];
player createDiarySubject ["informacoes","Informações"];
//player createDiarySubject ["civrules","Civilian Rules"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>

<font color = '#671110'>-Patch: V.x.x.x<br/> 
		</font color>xxxxxxxxxxxxxx<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["credits",
        [
            "Informações do Servidor",
                "
 <font color = '#962da9'>Aqui sao informados as novidades vindas dos Deuses de Altis</font color><br/><br/>


 <font color = '#2d7ea9'>Patch:</font color> <font color = '#671110'>V.1.0.0</font color><br/> 
		</font color>Novos carros<br/> 
		</font color>Policia poder retirar licenças de condutor aos civis<br/>
		</font color>Novas Casas<br/>
		</font color>1 Base do servidor<br/>
		</font color>Recomeço de uma nova Vida<br/><br/>

                "
        ]
    ];

    player createDiaryRecord ["credits",
        [
            "ArmaLife",
                "
ArmaLife is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.(ENG)<br/><br/>
                "
        ]
    ];

     player createDiaryRecord ["serverrules",
        [
            "Regras Gerais",    
                "
            
<font color = '#FF0000'>As seguintes Regras são para ser seguidas sem questionar:</font color><br/><br/>

<font color = '#671110'>----------------------------------------------------------------------------------------<br/>                   
1º- </font color>Ofensas religiosas, étnicas ou de orientação política, social ou sexual punível com Kick ou Ban!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
2º- </font color>Utilização de scripts/hacks será punido por Ban Permanente!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
3º- </font color>VDM (Atropelamento) em zonas seguras resultará com Kick ou Ban!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
4º- </font color>É extremamente Proibido matar, roubar/tentar roubar em zonas seguras!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
5º- </font color>Proibido o uso de veículos para provocar acidentes propositados de forma a explodir outros veículos.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
6º- </font color>Tirar proveito de bugs/erros do servidor para beneficio próprio punível com Ban!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
7º- </font color>Se algum jogador te oferecer vantagens estranhas como dinheiro, veículos etc... Avisa os admins.. Ficar calado, tirando proveito da situação resultará em BAN PERMANENTE!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
8º- </font color>Somente serão realizadas indemnizações com provas concretas por parte do jogador!<br/><br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>

<font color = '#FF0000'> O não seguir destas mesmas pode levar a um castigo que pode ser ou kick ou Ban (Perm ou Temp)</font color><br/><br/>


                           "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Regras de Civis",
                "
                
<font color = '#FF0000'>Estas são as normas para um bom RP e para uma boa estadia no servidor. PFF respeitar!</font color><br/><br/>

<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
1º- </font color>Respeita o RolePlay;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
2º- </font color>PROIBIDO MATAR OU ROUBAR se o jogador estiver a aceder a garagem ou outros NPC'S. Esta regra aplica-se a qualquer parte do mapa;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
3º- </font color>PROIBIDO MATAR OU ROUBAR nas cidades seguras ou infringir a lei. O mesmo se aplica aos rebeldes;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
4º- </font color>Proibido explodir helicópteros pousados ou veículos parados;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
5º- </font color>O civil deve respeitar a polícia. A polícia está ali para ajudá-lo;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
6º- </font color>Multas devem ser pagas, faz parte do jogo;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
7º- </font color>O civil não pode fazer falsas denúncias à polícia;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
8º- </font color>Proibido matar sem motivos ou por motivos estúpidos;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
9º- </font color>Proibido provocar o próprio atropelamento deitando-se ou atirando-se em direcção aos veículos;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
10º- </font color>Se num confronto, um civil do grupo retornar ao local depois de morto, a polícia tem o direito de perseguir o grupo infractor até que eles sejam todos presos, mesmo já estando fora da lista de procurados;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
11º- </font color>Se fores apanhado a conduzir sem a devida licença ou armado sem a licença para armas de fogo legalizadas, o policia tem direito de te prender;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
12º- </font color>EXTREMAMENTE Proibido matar médicos;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
12º- </font color>Proibido dar respawn se houver médicos online. Caso faças isso, deves pagar uma quantia de 50,000€ para o médico que se estava a dirigir para o local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
14º- </font color>Caso a regra acima neo seja respeitada, os Policias de serviço podem prender o Civil que fez isso, obrigando tambem o Civil a pagar a divida ao médicos.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
15º- </font color>Extremamente Proibido levantar um veiculo com um helicóptero com o intuito de o largar para causar danos ou mortes;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
16º- </font color>Os Civis devem manter a distância de segurança quando esta acontecer um tiroteio entre policia e rebeldes. Se morrerem, não serão reembolsados. Caso não respeitem esse perímetro de segurança, serão presos;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
17º- </font color>É permitido abater nos processadores e traficantes sem qualquer tipo de aviso, pois é uma área de trafico;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
18º- </font color>Extremamente proibido Matar, Roubar, Sequestrar etc... sem qualquer tipo de interaçao com o jogador. Deves usar o chat de voz, mensagem de telemóvel ou chat;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
19º- </font color>Quando morto, ao dar respawn inicias uma nova vida e terás que espera 10min para voltares ao local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
20º- </font color>Vinganças sem qualquer tipo de interação são extremamente proibidas.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
21º- </font color>Ao recusares seres identificado/revistado  pela policia a mesma tem o direito de te prender;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
22º- </font color>Ao iniciares sequestro deves chamar um policia(desarmado) para negociações;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
23º- </font color>Cometer suicídio ou desconectar quando estiveres sendo abordado pela policia ou rebelde, poderás ser punido;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
24º- </font color>Se algum jogador te oferecer vantagens estranhas como dinheiro, veículos etc... Avisa os admins.. Ficar calado, tirando proveito da situação resultará em BAN PERMANENTE.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
25º- </font color>PROIBIDO disparar em zonas Seguras!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>


<font color = '#FF0000'> O não seguir destas mesmas pode levar a um castigo que pode ser ou kick ou Ban (Perm ou Temp)</font color><br/><br/>

                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Regras Rebelde",
                "

<font color = '#FF0000'>Estas regras destinam se apenas aqueles que obtiverem Licensa Rebelde. Inclui Regras de Civil como podem esperar</font color><br/><br/>

<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
1º- </font color>Respeita o RolePlay;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
2º- </font color>PROIBIDO MATAR OU ROUBAR se o jogador estiver a aceder a  NPC'S/ATM;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
3º- </font color>PROIBIDO MATAR OU ROUBAR nas cidades seguras ou infringir a lei;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
4º- </font color>Proibido explodir helicópteros pousados ou veículos parados;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
5º- </font color>Se fores apanhado a utilizar arma ou veículo rebelde, serás preso e a arma retirada.;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
6º- </font color>Se todos os rebeldes morrerem no ataque deve-se passar a informação a polícia para que possa ser passada a mensagem no servidor;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
7º- </font color>Não saias a matar quem vires pela frente sem motivo algum;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
8º- </font color>Não é proibida a saída de veículos rebeldes, mas é ilegal e podes ser preso por isso;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
9º- </font color>Extremamente Proibido matar médicos;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
10º- </font color>Extremamente Proibido levantar um veiculo com um helicóptero com o intuito de o largar para causar danos ou mortes;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
11º- </font color>Quando declaram guerra numa cidade, terá que ser dado 5 minutos a policia para se preparar para o confronto;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
12º- </font color>É permitido abater nos processadores e traficantes sem qualquer tipo de aviso, pois é uma área de tráfico;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
12º- </font color>Extremamente proibido Matar, Roubar, Sequestrar etc... sem qualquer tipo de interaçao com o jogador. Deves usar o chat de voz, mensagem de telemóvel ou chat;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
14º- </font color>Quando morto, ao dar respawn inicias uma nova vida e terás que espera 10min para voltares ao local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
15º- </font color>Ao iniciares sequestro deves chamar um policia(desarmado) para negociações;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
16º- </font color>Proibido dar respawn se houver médicos online. Caso faças isso, deves pagar uma quantia de 50,000€ para o médico que se estava a dirigir para o local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
17º- </font color>Caso a regra acima neo seja respeitada, os Policias de serviço podem prender o Civil que fez isso, obrigando tambem o Civil a pagar a divida ao médicos.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
18º- </font color>Cometer suicídio ou desconectar quando estiveres a ser abordado pela policia ou rebelde, será punido.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           
19º- </font color>PROIBIDO disparar em zonas Seguras!<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>           


<font color = '#FF0000'> O não seguir destas mesmas pode levar a um castigo que pode ser ou kick ou Ban (Perm ou Temp)</font color><br/><br/>

                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Regras de Medico",
                "
                
<font color = '#FF0000'>Estas regras são apenas para os Medicos de serviço. Inclui Regras de Civil como podem esperar</font color><br/><br/>

<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
1º- </font color>Respeite o Roleplay;</br></br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
2º- </font color>Um médico tambem tem como funçao de mecanico;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
3º- </font color>Quando um medico é chamado para um acidente tem de informar a policia e, depois rebocar o carro para uma esquadra mais proxima;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
4º- </font color>Proibido dar ou vender itens a players da loja de médico;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
5º- </font color>Durante um tiroteio, o medico nao pode intervir, tem de aguardar até o tiroteio acabar;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
6º- </font color>Caso sejas proibido de reviver pelos policias e rebeldes ao mesmo tempo, abandona essa zona para protecção própria;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
7º- </font color>Proibido dar informaçoes a policia ou rebeldes, sobre posiçoes de cada um, etc;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
8º- </font color>Não abusar o poder de medico, para seu benificio ou de outro jogador;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
9º- </font color>Após reviver um jogador, tem de o tranportar até ao hospital;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
10º- </font color>Proibido ajudar jogadores a 'farmar' jogando como médico; </br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
11º- </font color>Proibido andar armado;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
12º- </font color>O médico é um jogador neutro. O mesmo deve ajudar tanto rebeldes como policias e civis;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
13º- </font color>Quando um medico for para uma ocurrencia e o player der respawn, ele tem de pagar 2.750€ como indemnização ao medico;</br>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
14º- </font color>Obrigatorio, o uso no nosso discord enquanto jogas a medico ( www.discord.gg/yP5tQxm ).<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   


<font color = '#FF0000'> O não seguir destas mesmas pode levar a um castigo que pode ser ou kick ou Ban (Perm ou Temp)</font color><br/><br/>

                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Regras de Policia",
                "
                
<font color = '#FF0000'>Estas regras são apenas para os Policia de serviço. Inclui Regras de Civil como podem esperar</font color><br/><br/>

<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
1º- </font color>Respeite o Roleplay;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
2º- </font color>É extremamente proibido explodir helicopteros e veiculos, só quando a pessoa não pare ao 3º aviso;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
3º- </font color>O uso da força letal é apenas se o suspeito tentar fugir com helicoptero ou veiculo, ou se abrir fogo contra a policia;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
4º- </font color>Um bom policia respeita a ordem hierárquica;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
5º- </font color>Priorize o tazer antes do uso da força letal;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
6º- </font color>É proibido, um policia, entrar em zonas rebeldes, campos de drogas e ou esconderijos, exceto quando está em perseguição ou para espulsar os civis desse local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
7º- </font color>Se um policia morrer em um combate ele não pode voltar ao confronto, tem de aguardar 15min;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
8º- </font color>É proibido, um policia, ficar parado em um unico lugar. Recomenda-se que se espalhem pelo servidor para manter a ordem do mesmo;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
9º- </font color>Quando um policia pede reforços, todos devem ir ao local;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
10º- </font color>Proibido esperar em traficantes e processadores ou em qualquer local ilegal, a não ser que tenha avistado um veiculo saindo do processador, aí o policia vai dirigir-se para o traficante e aguardar até que a viatura chegue;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
11º- </font color>Em caso de assalto ao Banco de Altis, o grupo de policias tem o direito de retornar á ação a cada 10min;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
12º- </font color>É permitido abater nos processadores e traficantes sem qualquer tipo de aviso pois é considerada zona de ZLT (Zona Livre de Tiro);<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
13º- </font color>O uso das granadas de gás e flashbangs devem ser usadas em circunstâncias de desvantagens numéricas ou assalto ao banco;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
14º- </font color>Quando morres para algum jogador, renaces em uma nova vida. Vinganças sem qualquer interação são EXTREMAMENTE PROIBIDAS;<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
15º- </font color>Obrigatorio, o uso no nosso discord enquanto jogas a Policia ( www.discord.gg/yP5tQxm );<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>   
16º- </font color>Proibido, um policia, abandonar a sua atual ação para ir a outra (Tirando o caso da regra 9).<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>
17º- </font color>Os policias podem dar reviver qualquer civil, mas apenas se nao se encontrar nenhum médico de serviço, qualquer policia que seja apanhado a nao quebrar esta regra será punido.<br/>
<font color = '#671110'>----------------------------------------------------------------------------------------<br/>

<font color = '#FF0000'> O não seguir destas mesmas pode levar a um castigo que pode ser ou kick ou Ban (Perm ou Temp)</font color><br/><br/>

                "
        ]
    ];

    player createDiaryRecord ["informacoes",
        [
            "Website/Doações/Recruta",
                "
                
<font color = '#FF0000'>Se quiseres saber mais informações do servidor como doações, como entrares para a policia ou para medico, e entre outras informações visita o nosso Site</font color><br/><br/>


<font color = '#418a14'>www.mostwantedesports.hol.es</font color> (Informações para recruta, doações e etc)<br/><br/>
 
 
 <font color = '#FF0000'> Para ser mais facil escreve como mensagem para um amigo na steam, e depois copia para um browser para entrares no discord</font color><br/><br/>
               "
        ]
    ];

    player createDiaryRecord ["informacoes",
        [
            "Discord",
                "
                
<font color = '#FF0000'>Para caso precises de comunicar algo aos Admins / No caso de seres Doador o teu Gang pode ter uma sala no nosso discord</font color><br/><br/>


 <font color = '#418a14'>www.discord.gg/yP5tQxm</font color> <br/><br/>
 
<font color = '#418a14'> Para ser mais facil escreve como mensagem para um amigo na steam, e depois copia para um browser para entrares no discord</font color><br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["informacoes",
        [
            "Veiculos Ilegais",
                "
<font color = '#FF0000'>Veiculos ilegiais:</font color> <br/><br/>
 - <font color = '#2d7ea9'>Ifrit</font color><br/>
 - <font color = '#2d7ea9'>Qualquer carro com texturas de rebeldes</font color><br/><br/>

                "
        ]
    ];
    player createDiaryRecord ["informacoes",
        [
            "Armas/Pistolas Ilegais",
                "
<font color = '#FF0000'>Armas Ilegais:</font color> <br/><br/>
- <font color = '#2d7ea9'>Todas as armas/pistolas que podes encontrar na loja de rebelde</font color><br/><br/>

                "
        ]
    ];
    player createDiaryRecord ["informacoes",
        [
            "Itens Ilegais",
                "
<font color = '#FF0000'>Itens ilegais:</font color><br/><br/>
1. <font color = '#2d7ea9'>Tartarugas</font color><br/>
2. <font color = '#2d7ea9'>Cocaina</font color><br/>
3. <font color = '#2d7ea9'>Heorina</font color><br/>
4. <font color = '#2d7ea9'>Canabis</font color><br/>
5. <font color = '#2d7ea9'>Marijuana</font color><br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["informacoes",
        [
            "Preços de farms",
                "
<font color = '#FF0000'>Preços de farms(legais):</font color><br/><br/>
 <font color = '#2d7ea9'>Vidro [1050€]</font color><br/>
 <font color = '#2d7ea9'>Ferro refinado [1000€]</font color><br/>
 <font color = '#2d7ea9'>Sal refinado [1500€]</font color><br/>
 <font color = '#2d7ea9'>Diamante [3000€]</font color><br/>
 <font color = '#2d7ea9'>Cimento [1850€]</font color><br/><br/>
 <font color = '#2d7ea9'>Oleo Refinado [2500€]</font color><br/><br/>
 <font color = '#2d7ea9'>Maça [70€]</font color><br/><br/>
 <font color = '#2d7ea9'>Pêssego [65€]</font color><br/><br/>
 <font color = '#2d7ea9'>Cobre [1000€]</font color><br/><br/>
<font color = '#FF0000'>Preços de farms(ilegais):</font color><br/><br/>
 <font color = '#2d7ea9'>Heroina processada [5250€]</font color><br/><br/>
 <font color = '#2d7ea9'>Marijuana [5143€]</font color><br/><br/>
 <font color = '#2d7ea9'>Cocaina [5500€]</font color><br/><br/>
 <font color = '#2d7ea9'>Tartarugas [9500€]</font color><br/><br/>
                "
        ]
    ];    
    player createDiaryRecord ["informacoes",
        [
            "Preços de licenças",
                "
<font color = '#FF0000'>Preço de licenças de farms(legais):</font color><br/><br/>
 <font color = '#2d7ea9'>[12000€]</font color><br/>
<font color = '#FF0000'>Preço de licenças de farms(ilegais):</font color><br/><br/>
 <font color = '#2d7ea9'>[120000€]</font color><br/>
<font color = '#FF0000'>Preço de treino de rebelde(ilegal):</font color><br/><br/>
 <font color = '#2d7ea9'>[1500000€]</font color><br/>
<font color = '#FF0000'>Preço de licenças de veiculos:</font color><br/><br/>
 <font color = '#2d7ea9'>Carta de condução de carro [15000€]</font color><br/><br/>
 <font color = '#2d7ea9'>Carta de condução de barco [35000]</font color><br/><br/>
 <font color = '#2d7ea9'>Carta de condução de piloto(Avião&Heli) [200000€]</font color><br/><br/>
 <font color = '#2d7ea9'>Carta de condução de pesados [30000€]</font color><br/><br/>
 <font color = '#2d7ea9'>Porte de arma [55000€]</font color><br/><br/>
 <font color = '#2d7ea9'>Licença de mergulhador [35000€]</font color><br/><br/>
 <font color = '#2d7ea9'>Licença de casa [750000€]</font color><br/><br/>
                "
        ]
    ];  


// Controls Section

    player createDiaryRecord ["controls",
        [
            "Controlos de Policia e de Medicos",
                "
<font color = '#e7de00'>F:</font color> Sirene do Veiculo.<br/>
<font color = '#e7de00'>L:</font color> Radar (Apenas para policias e tem de ser usado com a pistola P07 Suppressed).<br/>
<font color = '#e7de00'>C:</font color> Deter (Apenas para policia).<br/><br/>
<font color = '#e7de00'>Shift Direito + L:</font color> Luzes.<br/>
<font color = '#e7de00'>Shift Esquerdo + R:</font color> Deter (Apenas para policia).<br/><br/>

                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Controlos de civil",
                "
<font color = '#e7de00'>Shift Esquerdo + G:</font color> Deitar ao chao um jogador (Arma/pistola necessária. Usadado para roubar pessoas).<br/>
<font color = '#e7de00'>Spacebar:</font color> Place storage container.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Controlos Gerias",
                "
<font color = '#e7de00'>Y:</font color> Abrir o menu do jogador.<br/>
<font color = '#e7de00'>U:</font color> Bloquear e desbloquear veiculo.<br/>
<font color = '#e7de00'>T:</font color> Abrir inventario virtual do veiculos.<br/>
<font color = '#e7de00'>Shift Esquerdo + B:</font color> Surrender (Mãos na cabeça).<br/>
<font color = '#e7de00'>(Tecla)Windows Esquerdo:</font color> Tecla de interação com quase tudo. Poderás mudar a tecla por exempo para H pressionado ESC->Configure->Controls->Custom->Use Action 10.<br/>
<font color = '#e7de00'>Shift Esquerdo + H:</font color> Colocar arma nas costas.<br/>
<font color = '#e7de00'>Ctrl Esquerdo + H:</font color> (Contrário do Shift Esquerdo + H).<br/>
<font color = '#e7de00'>Shift + Spacebar:</font color> Saltar.<br/>
<font color = '#e7de00'>Shift Esquerdo + O:</font color> Baixar volume.<br/><br/>
                "
        ]
    ];
