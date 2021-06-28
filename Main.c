//Autor: Paulo Leão
//Versão: 0.0.2

#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    // Declaraando jogadores com a finalidade de utilizar a ferramenta while.
    int player = 0;
    int playerB = 0;

    // Declarando os atributos do Player um como forma de dar entrada ao anexo I.
    int vida = 0;
    int mana = 0;
    int forca = 0;
    int magia = 0;
    int armadura = 0;
    int resistencia = 0;
    int agilidade = 0;

    // Declarando os atributos do Player dois como forma de dar entrada ao anexo I.
    int vidaB = 0;
    int manaB = 0;
    int forcaB = 0;
    int magiaB = 0;
    int armaduraB = 0;
    int resistenciaB = 0;
    int agilidadeB = 0;

    // Declaração de classe com a finalidade de usar a ferramenta switch.
    int classeA = 0;
    int classeB = 0;

    // Declarando as magias (player um) de forma a cumprir o anexo II.
    int pocao = 0;
    int fogo = 0;
    int bio = 0;
    int cura = 0;
    int gelo = 0;
    int toxico = 0;
    int tempestade = 0;

    // Declarando as magias (player dois) de forma a cumprir o anexo II.
    int pocaoB = 0;
    int fogoB = 0;
    int bioB = 0;
    int curaB = 0;
    int geloB = 0;
    int toxicoB = 0;
    int tempestadeB = 0;

    // Declaração de armas com a finalidade de cumprir o anexo III.
    int arma = 0;
    int armaB = 0;

    // Outras declarações.
    int turno = 1;
    int acao = 0;
    int acaoB = 0;
    int dano = 0;
    int danoB = 0;
    int magiaE = 0;

    printf("*****************************************************************************");
    printf("\n**********************/Bem vindo ao meu RPG teste/**************************\n");
    printf("*****************************************************************************\n");
    printf("Esse jogo e um RPG em turnos aonde player batalhara com player. \nTive um problema com o locale, entao as palavras nao tem caracteres especiais.\n");
    printf("\nTurno do player 1:\n\n");
    printf("Defina sua classe:\n\n");
    printf("\t1 - Guerreiro:\n");
    printf("\t2 - Ladrao:\n");
    printf("\t3 - Mago:\n");
    printf("\t4 - Paladino:\n");
    printf("\t5 - Animal:\n");
    printf("\t6 - Troll:\n");
    printf("\t7 - Dragao:\n");
    printf("\t8 - Zumbi:\n");
    scanf("%d", &classeA);

    switch (classeA)
    {
    case 1:
        printf("\nGuerreiro foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 4000|\n\t|Mana = 30|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 20|\n");

        player = 1;

        vida = 4000;
        mana = 30;
        forca = 100;
        magia = 20;
        armadura = 80;
        resistencia = 20;
        agilidade = 20;

        tempestade = 240;

        arma = 4;

        printf("\nComo guerreiro voce tem a hablidade tempestade. \nPode tentar utilizar as outras habilidades mas elas nao surtirao efeito.\nO dano de tempestade e de 240.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Porrete = 180 - 380|\n\t|Espada Barroca = 300 - 500|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 2:
        printf("\nLadrao foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2800|\n\t|Mana = 50|\n\t|Forca = 50|\n\t|Magia = 30|\n\t|Armadura = 40|\n\t|Resistencia = 50|\n\t|Agilidade = 80|\n");

        player = 2;

        vida = 2800;
        mana = 50;
        forca = 50;
        magia = 30;
        armadura = 40;
        resistencia = 50;
        agilidade = 80;

        tempestade = 260;
        toxico = 364;

        arma = 5;

        printf("Como ladrao voce tem as habilidades tempestade = 260 e intoxicacao = 364\nVoce pode tentar usar as outras habilidades mas elas nao surtiram efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Porrete = 180 - 380|\n\t|Esfera de Ataque = 200 - 400|\n\t|Besta = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 3:
        printf("\nMago foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2500|\n\t|Mana = 100|\n\t|Forca = 40|\n\t|Magia = 100|\n\t|Armadura = 30|\n\t|Resistencia = 80|\n\t|Agilidade = 40|\n");

        player = 3;

        vida = 2500;
        mana = 100;
        forca = 40;
        magia = 100;
        armadura = 30;
        resistencia = 80;
        agilidade = 40;

        pocao = 400;
        bio = 720;
        cura = 800;
        gelo = 640;
        toxico = 560;
        tempestade = 400;

        arma = 5;

        printf("\nComo mago ganhou as seguintes habilidades: ");
        printf("\n\t|pocao = 400|\n\t|bio = 720|\n\t|cura = 800|\n\t|flama gelada = 640|\n\t|intoxicacao = 560|\n\t|tempestade = 400|\nPode tentar usar o halito de fogo, mas ele não surtira efeito.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Tridente Sagrado = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 4:
        printf("\nPaladino foi selecionado e seus atributos sao:\n");
        printf("\n\t|vida = 3200|\n\t|mana = 80|\n\t|Forca = 60|\n\t|Magia = 50|\n\t|Armadura = 60|\n\t|Resistencia = 60|\n\t|Agilidade = 60|\n");

        player = 4;

        vida = 3200;
        mana = 80;
        forca = 60;
        magia = 50;
        armadura = 60;
        resistencia = 60;
        agilidade = 60;

        pocao = 300;
        gelo = 480;
        tempestade = 300;

        arma = 2;

        printf("As habilidades do paladino são:\n\tPocao de vida = 300\n\tFlama Gelada = 480\n\ttempestade = 300\n");
        printf("\nVoce pode tentar usar as outras magias mas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Besta = 220 - 420|\n\t|Tridente Sagrado = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 5:
        printf("\nAnimal foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 3200|\n\t|Mana = 30|\n\t|Forca = 80|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 50|\n");

        player = 5;

        vida = 3200;
        mana = 30;
        forca = 80;
        magia = 20;
        armadura = 80;
        resistencia = 20;
        agilidade = 50;

        bio = 432;

        arma = 1;

        printf("Animal tem a magia Bio com dano de 432. \nPode tentar usar outras magias mas elas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Garra Letal = 100 - 300|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 6:
        printf("\nTroll foi selecionado e seus atributos sao:\n");
        printf("\n\t|vida = 2800|\n\t|Mana = 20|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 20|\n");

        player = 6;

        vida = 2800;
        mana = 20;
        forca = 100;
        magia = 20;
        armadura = 80;
        resistencia = 20;
        agilidade = 20;

        toxico = 336;

        arma = 5;

        printf("troll tem a magia intoxicacao = 336\nTroll pode tentar usar outras magia mas não surtirao efeito.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Porrete = 180 - 380|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 7:
        printf("\nDragao foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 3000|\n\t|Mana = 40|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 50|\n\t|Resistencia = 50|\n\t|Agilidade = 30|\n");

        player = 7;

        vida = 3000;
        mana = 40;
        forca = 100;
        magia = 20;
        armadura = 50;
        resistencia = 50;
        agilidade = 30;

        fogo = 480;

        arma = 1;

        printf("Dragao tem a magia Alito de fogo = 480\nEle pode tentar usar outras magias mas não surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Garra Letal = 100 - 300|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 8:
        printf("\nZumbi foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2500|\n\t|Mana = 20|\n\t|Forca = 40|\n\t|Magia = 20|\n\t|Armadura = 40|\n\t|Resistencia = 80|\n\t|Agilidade = 50|\n");

        player = 8;

        vida = 2500;
        mana = 20;
        forca = 40;
        magia = 20;
        armadura = 40;
        resistencia = 80;
        agilidade = 50;

        toxico = 336;

        arma = 5;

        printf("Zumbi tem a magia intoxicacao = 336\nEle pode tentar usar outras magias mas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Garra Letal = 100 - 300|\n\t|Porrete = 180 - 380|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    }
    printf("\nTurno do player 2:\n\n");
    printf("Defina sua classe:\n\n");
    printf("\t1 - Guerreiro:\n");
    printf("\t2 - Ladrao:\n");
    printf("\t3 - Mago:\n");
    printf("\t4 - Paladino:\n");
    printf("\t5 - Animal:\n");
    printf("\t6 - Troll:\n");
    printf("\t7 - Dragao:\n");
    printf("\t8 - Zumbi:\n");
    scanf("%d", &classeB);

    switch (classeB)
    {
    case 1:
        printf("\nGuerreiro foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 4000|\n\t|Mana = 30|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 20|\n");

        playerB = 1;

        vidaB = 4000;
        manaB = 30;
        forcaB = 100;
        magiaB = 20;
        armaduraB = 80;
        resistenciaB = 20;
        agilidadeB = 20;

        tempestadeB = 240;

        arma = 4;

        printf("\nComo guerreiro voce tem a hablidade tempestade. \nPode tentar utilizar as outras habilidades mas elas nao surtirao efeito.\nO dano de tempestade e de 240.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Porrete = 180 - 380|\n\t|Espada Barroca = 300 - 500|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 2:
        printf("\nLadrao foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2800|\n\t|Mana = 50|\n\t|Forca = 50|\n\t|Magia = 30|\n\t|Armadura = 40|\n\t|Resistencia = 50|\n\t|Agilidade = 80|\n");

        playerB = 2;

        vidaB = 2800;
        manaB = 50;
        forcaB = 50;
        magiaB = 30;
        armaduraB = 40;
        resistenciaB = 50;
        agilidadeB = 80;

        tempestadeB = 260;
        toxicoB = 364;

        armaB = 5;

        printf("Como ladrao voce tem as habilidades tempestade = 260 e intoxicacao = 364\nVoce pode tentar usar as outras habilidades mas elas nao surtiram efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Porrete = 180 - 380|\n\t|Esfera de Ataque = 200 - 400|\n\t|Besta = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 3:
        printf("\nMago foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2500|\n\t|Mana = 100|\n\t|Forca = 40|\n\t|Magia = 100|\n\t|Armadura = 30|\n\t|Resistencia = 80|\n\t|Agilidade = 40|\n");

        playerB = 3;

        vidaB = 2500;
        manaB = 100;
        forcaB = 40;
        magiaB = 100;
        armaduraB = 30;
        resistenciaB = 80;
        agilidadeB = 40;

        pocaoB = 400;
        bioB = 720;
        curaB = 800;
        geloB = 640;
        toxicoB = 560;
        tempestadeB = 400;

        armaB = 5;

        printf("\nComo mago ganhou as seguintes habilidades: ");
        printf("\n\t|pocao = 400|\n\t|bio = 720|\n\t|cura = 800|\n\t|flama gelada = 640|\n\t|intoxicacao = 560|\n\t|tempestade = 400|\nPode tentar usar o halito de fogo, mas ele não surtira efeito.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Tridente Sagrado = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 4:
        printf("\nPaladino foi selecionado e seus atributos sao:\n");
        printf("\n\t|vida = 3200|\n\t|mana = 80|\n\t|Forca = 60|\n\t|Magia = 50|\n\t|Armadura = 60|\n\t|Resistencia = 60|\n\t|Agilidade = 60|\n");

        playerB = 4;

        vidaB = 3200;
        manaB = 80;
        forcaB = 60;
        magiaB = 50;
        armaduraB = 60;
        resistenciaB = 60;
        agilidadeB = 60;

        pocaoB = 300;
        geloB = 480;
        tempestadeB = 300;

        armaB = 2;

        printf("As habilidades do paladino são:\n\tPocao de vida = 300\n\tFlama Gelada = 480\n\ttempestade = 300\n");
        printf("\nVoce pode tentar usar as outras magias mas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Besta = 220 - 420|\n\t|Tridente Sagrado = 220 - 420|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 5:
        printf("\nAnimal foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 3200|\n\t|Mana = 30|\n\t|Forca = 80|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 50|\n");

        playerB = 5;

        vidaB = 3200;
        manaB = 30;
        forcaB = 80;
        magiaB = 20;
        armaduraB = 80;
        resistenciaB = 20;
        agilidadeB = 50;

        bioB = 432;

        armaB = 1;

        printf("Animal tem a magia Bio com dano de 432. \nPode tentar usar outras magias mas elas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Garra Letal = 100 - 300|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 6:
        printf("\nTroll foi selecionado e seus atributos sao:\n");
        printf("\n\t|vida = 2800|\n\t|Mana = 20|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 80|\n\t|Resistencia = 20|\n\t|Agilidade = 20|\n");

        playerB = 6;

        vidaB = 2800;
        manaB = 20;
        forcaB = 100;
        magiaB = 20;
        armaduraB = 80;
        resistenciaB = 20;
        agilidadeB = 20;

        toxicoB = 336;

        armaB = 5;

        printf("troll tem a magia intoxicacao = 336\nTroll pode tentar usar outras magia mas não surtirao efeito.");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Porrete = 180 - 380|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 7:
        printf("\nDragao foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 3000|\n\t|Mana = 40|\n\t|Forca = 100|\n\t|Magia = 20|\n\t|Armadura = 50|\n\t|Resistencia = 50|\n\t|Agilidade = 30|\n");

        playerB = 7;

        vidaB = 3000;
        manaB = 40;
        forcaB = 100;
        magiaB = 20;
        armaduraB = 50;
        resistenciaB = 50;
        agilidadeB = 30;

        fogoB = 480;

        armaB = 1;

        printf("Dragao tem a magia Alito de fogo = 480\nEle pode tentar usar outras magias mas não surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Garra Letal = 100 - 300|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    case 8:
        printf("\nZumbi foi selecionado e seus atributos sao:\n");
        printf("\n\t|Vida = 2500|\n\t|Mana = 20|\n\t|Forca = 40|\n\t|Magia = 20|\n\t|Armadura = 40|\n\t|Resistencia = 80|\n\t|Agilidade = 50|\n");

        playerB = 8;

        vidaB = 2500;
        manaB = 20;
        forcaB = 40;
        magiaB = 20;
        armaduraB = 40;
        resistenciaB = 80;
        agilidadeB = 50;

        toxicoB = 336;

        armaB = 5;

        printf("Zumbi tem a magia intoxicacao = 336\nEle pode tentar usar outras magias mas nao surtirao efeito");

        printf("\nVoce tem as seguintes armas:\n");
        printf("\n\t|Cajado = 50 - 200|\n\t|Garra Letal = 100 - 300|\n\t|Porrete = 180 - 380|\n\t|Espada Lendaria = 500 - 900|\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce comeca com a arma mais fraca.\nVoce pode usar um turno para trocar por uma arma mais forte.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVoce passa de arma em arma, entao so equipara a lendaria se passar por todas as armas disponiveis para a sua classe.\n");
        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

        break;
    }

    while (turno == 1)
    {
        if (vida >= 1)
        {
            printf("Turno do player 1\n");
            printf("Selecione o que voce quer fazer:\n");
            printf("\t|1 - Atacar|\n\t|2 - Usar Magia|\n\t|3 - Melhorar a Arma|\n\t|4 - Fugir|\n");
            scanf("%d", &acao);

            switch (acao)
            {
            case 1:
                switch (arma)
                {
                case 1:
                    dano = rand() % 200 + 100;
                    break;
                case 2:
                    dano = rand() % 200 + 220;
                    break;
                case 3:
                    dano = rand() % 200 + 300;
                    break;
                case 4:
                    dano = rand() % 200 + 180;
                    break;
                case 5:
                    dano = rand() % 150 + 50;
                    break;
                case 6:
                    dano = rand() % 200 + 220;
                    break;
                case 7:
                    dano = rand() % 200 + 200;
                    break;
                case 8:
                    dano = rand() % 400 + 500;
                    break;
                }
                dano = dano / 100;
                dano = (dano * 100) + (dano * forca);
                vidaB = vidaB - dano;
                printf("Ainda resta %d de vida para o inimigo", vidaB);
                getch();
                break;
            case 2:
                printf("selecione a magia que deseja usar:\n ");
                printf("\t|1 - Pocao de vida|\n\t|2 - Halito de fogo|\n\t|3 - Bio|\n\t|4 - Cura|\n\t|5 - Flama Gelada|\n\t|6 - Intoxicacao|\n\t|7 - Tempestade|\n");
                scanf("%d", &magiaE);
                switch (magiaE)
                {
                case 1:
                    dano = pocao;
                    vida = vida + pocao;
                    break;
                case 2:
                    dano = fogo;
                    vidaB = vidaB - dano;
                    break;
                case 3:
                    dano = bio;
                    vidaB = vidaB - bio;
                    break;
                case 4:
                    dano = cura;
                    vida = vida + dano;
                    break;
                case 5:
                    dano = gelo;
                    vidaB = vidaB - gelo;
                    break;
                case 6:
                    dano = toxico;
                    vidaB = vidaB - toxico;
                    break;
                case 7:
                    dano = tempestade;
                    vidaB = vidaB - tempestade;
                    break;
                }
                printf("Sua vida é:%d", vida);
                printf("A vida do inimigo é:%d", vidaB);
                break;
            case 3:
                switch (player)
                {
                case 1:
                    if (arma = 4)
                    {
                        arma = 3;
                    }
                    else if (arma = 3)
                    {
                        arma = 8;
                    }
                    else if (arma = 8)
                    {
                        arma = 8;
                    }
                    break;
                case 2:
                    if (arma = 5)
                    {
                        arma = 4;
                    }
                    else if (arma = 4)
                    {
                        arma = 7;
                    }
                    else if (arma = 7)
                    {
                        arma = 6;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 3:
                    if (arma = 5)
                    {
                        arma = 2;
                    }
                    else if (arma = 2)
                    {
                        arma = 8;
                    }
                    break;
                case 4:
                    if (arma = 2)
                        arma = 4;
                    else if (arma = 4)
                    {
                        arma = 8;
                    }
                    break;
                case 5:
                    if (arma = 1)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 6:
                    if (arma = 5)
                    {
                        arma = 4;
                    }
                    else if (arma = 4)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 7:
                    if (arma = 1)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 8:
                    if (arma = 5)
                    {
                        arma = 1;
                    }
                    else if (arma = 1)
                    {
                        arma = 4;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                }

                break;

            case 4:
                printf("\nEntao temos um covarde, assim que eu gosto!\n");
                printf("-----O player 2 venceu!-----");

                getch();
                return 0;
                break;
            }
        }
        else
        {
            printf("\nO player 2 venceu... Lamentavel\n");
            getch();
            return 0;
        }
        if (vidaB >= 1)
        {
            printf("Turno do player 2\n");
            printf("Selecione o que voce quer fazer:\n");
            printf("\t|1 - Atacar|\n\t|2 - Usar Magia|\n\t|3 - Melhorar a Arma|\n\t|4 - Fugir|\n");
            scanf("%d", &acao);

            switch (acao)
            {
            case 1:
                switch (armaB)
                {
                case 1:
                    dano = rand() % 200 + 100;
                    break;
                case 2:
                    dano = rand() % 200 + 220;
                    break;
                case 3:
                    dano = rand() % 200 + 300;
                    break;
                case 4:
                    dano = rand() % 200 + 180;
                    break;
                case 5:
                    dano = rand() % 150 + 50;
                    break;
                case 6:
                    dano = rand() % 200 + 220;
                    break;
                case 7:
                    dano = rand() % 200 + 200;
                    break;
                case 8:
                    dano = rand() % 400 + 500;
                    break;
                }
                dano = dano / 100;
                dano = (dano * 100) + (dano * forcaB);
                vida = vida - dano;
                printf("Ainda resta %d de vida para o inimigo", vida);
                getch();
                break;
            case 2:
                printf("selecione a magia que deseja usar:\n ");
                printf("\t|1 - Pocao de vida|\n\t|2 - Halito de fogo|\n\t|3 - Bio|\n\t|4 - Cura|\n\t|5 - Flama Gelada|\n\t|6 - Intoxicacao|\n\t|7 - Tempestade|\n");
                scanf("%d", &magiaE);
                switch (magiaE)
                {
                case 1:
                    dano = pocaoB;
                    vidaB = vidaB + pocaoB;
                    break;
                case 2:
                    dano = fogoB;
                    vida = vida - dano;
                    break;
                case 3:
                    dano = bioB;
                    vida = vida - bioB;
                    break;
                case 4:
                    dano = curaB;
                    vidaB = vidaB + danoB;
                    break;
                case 5:
                    dano = geloB;
                    vida = vida - geloB;
                    break;
                case 6:
                    dano = toxicoB;
                    vida = vida - toxicoB;
                    break;
                case 7:
                    dano = tempestadeB;
                    vida = vida - tempestadeB;
                    break;
                }
                printf("Sua vida é:%d", vidaB);
                printf("A vida do inimigo é:%d", vida);

                break;
            case 3:
                switch (player)
                {
                case 1:
                    if (arma = 4)
                    {
                        arma = 3;
                    }
                    else if (arma = 3)
                    {
                        arma = 8;
                    }
                    else if (arma = 8)
                    {
                        arma = 8;
                    }
                    break;
                case 2:
                    if (arma = 5)
                    {
                        arma = 4;
                    }
                    else if (arma = 4)
                    {
                        arma = 7;
                    }
                    else if (arma = 7)
                    {
                        arma = 6;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 3:
                    if (arma = 5)
                    {
                        arma = 2;
                    }
                    else if (arma = 2)
                    {
                        arma = 8;
                    }
                    break;
                case 4:
                    if (arma = 2)
                        arma = 4;
                    else if (arma = 4)
                    {
                        arma = 8;
                    }
                    break;
                case 5:
                    if (arma = 1)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 6:
                    if (arma = 5)
                    {
                        arma = 4;
                    }
                    else if (arma = 4)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 7:
                    if (arma = 1)
                    {
                        arma = 8;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                case 8:
                    if (arma = 5)
                    {
                        arma = 1;
                    }
                    else if (arma = 1)
                    {
                        arma = 4;
                    }
                    else
                    {
                        arma = 8;
                    }
                    break;
                }

                break;

            case 4:
                printf("\nEntao temos um covarde, assim que eu gosto!\n");
                printf("-----O player 1 venceu!-----");

                getch();
                return 0;
                break;
            }
        }
        else
        {
            printf("\nO player 1 venceu... Melhore.\n");
            getch();
            return 0;
        }
    }

    getch();
    return 0;
}
