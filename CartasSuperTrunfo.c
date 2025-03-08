                         // Desafio de Cartas Super Trunfo

#include <stdio.h>

// declarando as variáveis
int main() {
    //variávei da carta 1
    char estado1[2], cidade1[20], codigo1[4];
    int populacao1, pturistico1;
    float area1, pib1, densidadepopulacional1, pibpercapita1;
    float superPoder1; //inclui a variavel superPoder1

    //variáveis da carta 2
    char estado2[2], cidade2[20], codigo2[4];
    int populacao2, pturistico2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;
    float superPoder2;

    // Inclusão de variavel de Resultado
    int resultadoPopulacao, resultadoPturistico, resultadoArea;
    int resultadoPib, resultadoDensidadePopulacional, resultadoPibpercapita, resultadoSuperPoder;

    // colacando dados para carta 1
    printf("\nCarta 1: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado1);
    getchar();  

    printf("\nDigite o Código: ");
    scanf("%s", codigo1);
    getchar();  

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade1);
    getchar(); 

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao1);

    printf("\nDigite a Área: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    // inserindo calculos para saber o valor de desindadepopulacional1 e pibpercapita1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1; 

        //incluindo a soma do Super Poder da Carta 1
        superPoder1 = populacao1 + area1 + pib1 + pturistico1 + pibpercapita1 + densidadepopulacional1;

    // Inserindo dados para carta2
    printf("\nCarta 2: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado2);
    getchar();  

    printf("\nDigite o Código: ");
    scanf("%s", codigo2);
    getchar();  

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade2);
    getchar();  

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Área: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    // inserindo calculos para saber o valor de desindadepopulacional2 e pibpercapita2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2; 

    //incluindo a soma do Super Poder da Carta 2
    superPoder2 = populacao2 + area2 + pib2 + pturistico2 + pibpercapita2 + densidadepopulacional2;

    // saída de dados coletados da carta 1
    printf("\n\nCarta 1: ");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %f km²", area1);  
    printf("\nPIB: %f de reais", pib1); 
    printf("\nNúmero de Pontos Turísticos: %d", pturistico1);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional1);
    printf("\nPib per Capita é: %f", pibpercapita1);
    printf("\nSuper Poder: %f", superPoder1);

    // saída de dados coletados da carta 2
    printf("\n\nCarta 2: ");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f km²", area2); 
    printf("\nPIB: %f de reais", pib2); 
    printf("\nNúmero de Pontos Turísticos: %d", pturistico2);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional2);
    printf("\nPib per Capita é: %f", pibpercapita2);
    printf("\nSuper Poder: %f", superPoder2);

     //Comparar as cartas 1 e 2
     resultadoPopulacao = populacao1 > populacao2;
     resultadoArea = area1 > area2;
     resultadoPib = pib1 > pib2;
     resultadoPturistico = pturistico1 > pturistico2;
     resultadoDensidadePopulacional = densidadepopulacional1 < densidadepopulacional2;
     resultadoPibpercapita = pibpercapita1 > pibpercapita2;
     resultadoSuperPoder = superPoder1 > superPoder2;
 
     // inclui uma legenda para identificar melhor o vencedor
     printf("\nLegenda:\n");
     printf("\nNúmero 1 - Carta 1 venceu!");
     printf("\nNúmero 0 - Carta 2 venceu!\n");
 
     //inclui o resultado
     printf("\nPopulação: %d", resultadoPopulacao);
     printf("\nÁrea: %d", resultadoArea);
     printf("\nPib: %d", resultadoPib);
     printf("\nPontos Turisticos: %d", resultadoPturistico);
     printf("\nDensidade Populacional: %d", resultadoDensidadePopulacional);
     printf("\nPib per capita: %d", resultadoPibpercapita);
     printf("\nSuper Poder: %d", resultadoSuperPoder);


}