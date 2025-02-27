#include <stdio.h>

int main() {
    char estado1[2], cidade1[20], codigo1[4];
    int populacao1, pturistico1;
    float area1, pib1;
    char estado2[2], cidade2[20], codigo2[4];
    int populacao2, pturistico2;
    float area2, pib2;


   
    printf("\nCarta 1: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", &estado1);

    printf("\nDigite o Código: ");
    scanf("%s", &codigo1);

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao1);

    printf("\nDigite a Área: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    printf("\nCarta 2: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", &estado2);

    printf("\nDigite o Código: ");
    scanf("%s", &codigo2);

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Área: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);



    printf("\n\nCarta 1: ");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %d km²", area1);
    printf("\nPIB: %f de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pturistico1);

    printf("\n\nCarta 2: ");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %d km²", area2);
    printf("\nPIB: %f de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pturistico2);

    
    return 0;
}
