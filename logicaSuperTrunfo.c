#include <stdio.h>

int main() {

    //definindo variaveis
    char estado1[2], estado2[2], cod1[4], cod2[4], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, superPoder1, superPoder2;

    //recebendo dados
    printf("Agora eh a vez de inserir os dados da primeira carta! Digite os dados conforme solicitado abaixo:\n");
    
    printf("Digite o estado - 'A' a 'H': \n");
    scanf(" %c", estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", cod1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade (em km^2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em milhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Digite os pontos da cidade: \n");
    scanf("%d", &pontos1); 

    printf("Agora eh a vez de inserir os dados da segunda carta! Digite os dados conforme solicitado abaixo:\n");

    printf("Digite o estado - 'A' a 'H': \n");
    scanf(" %c", estado2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade (em km^2): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em milhoes de reais): \n");
    scanf("%f", &pib2);

    printf("Digite os pontos da cidade: \n");
    scanf("%d", &pontos2);

//criando variáveis para calculo de densidade e PIB
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;



// exibindo dados

    printf("\n Obrigado por inserir os dados das duas cartas! Agora vamos comparar os dados das duas cidades:\n");

    printf("Carta 1: \n");

    printf("Estado: %s\n", estado1);
    printf("Codigo da cidade: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km^2\n", densidade1);
    printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita1);

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade populacional: %.2f habitantes por km^2\n", densidade2);
    printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita2);

//comparações
    superPoder1 = (float) populacao1 + (float) area1 + (float) pib1 + (float) pontos1 + (1.0f/densidade1) + (float) pib_per_capita1;
    superPoder2 = (float) populacao2 + (float) area2 + (float) pib2 + (float) pontos2 + (1.0f/densidade2) + (float) pib_per_capita2;

    printf("\nComparando os super poderes das duas cidades:\n");
    printf("Super Poder da Carta 1: %.2f\n", superPoder1);
    printf("Super Poder da Carta 2: %.2f\n", superPoder2);

    //comparar atributo por atributo

    printf("Comparando os pontos das duas cidades:\n");
    printf("se o resultado for 1 = a primeira cidade tem mais pontos, se for 0 = a segunda cidade tem mais pontos\n");
    printf("populacao1 > populacao2: %d\n", populacao1 > populacao2);
    printf("area1 > area2: %d\n", area1 > area2);
    printf("pib1 > pib2: %d\n", pib1 > pib2);
    printf("pontos1 > pontos2: %d\n", pontos1 > pontos2);
    printf("densidade1 < densidade2: %d\n", densidade1 < densidade2);
    printf("pib_per_capita1 > pib_per_capita2: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("superPoder1 > superPoder2: %d\n", superPoder1 > superPoder2);

    //comparando atributos

    printf("Comparação das cartas:\n");
    printf("A carta 1 tem a população de: %lu\n", populacao1);
    printf("A carta 2 tem a população: %lu\n", populacao2);

    if (populacao1 > populacao2) {
        printf("A carta 1 tem mais habitantes que a carta 2\n");
    } else {
        printf("A carta 2 tem mais habitantes que a carta 1\n");
    }


    return 0;
}