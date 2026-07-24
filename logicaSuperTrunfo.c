#include <stdio.h>

int main() {

    //definindo variaveis
    char estado1, estado2, cod1[4], cod2[4], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, superPoder1, superPoder2;

    //recebendo dados
    printf("Agora eh a vez de inserir os dados da primeira carta! Digite os dados conforme solicitado abaixo:\n");
    
    printf("Digite o estado - 'A' a 'H': \n");
    scanf(" %c", &estado1);

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
    scanf(" %c", &estado2);

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

    printf("Estado: %c\n", estado1);
    printf("Codigo da cidade: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km^2\n", densidade1);
    printf("PIB per capita: %.2f reais por habitante\n", pib_per_capita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
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
    //menu interativo

    printf("\nAgora vamos comparar os atributos das duas cidades! Escolha o atributo que deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");

    int escolha1, escolha2;
    printf("Primeiro atributo: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            printf("Você escolheu População como primeiro atributo.\n");
            break;
        case 2:
            printf("Você escolheu Área como primeiro atributo.\n");
            break;
        case 3:
            printf("Você escolheu PIB como primeiro atributo.\n");
            break;
        case 4:
            printf("Você escolheu Pontos Turisticos como primeiro atributo.\n");
            break;
        case 5:
            printf("Você escolheu Densidade Populacional como primeiro atributo.\n");
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1;
    }

    printf("\nAgora escolha o segundo atributo (não pode ser igual ao primeiro):\n");
    switch (escolha1) {
        case 1:
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        case 2:
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        case 3:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        case 4:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Populacional\n");
            break;
        case 5:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            break;
    }

    printf("Segundo atributo: ");
    scanf("%d", &escolha2);

    switch (escolha2) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (escolha2 == escolha1) {
                printf("Você não pode escolher o mesmo atributo para as duas cidades.\n");
                return 1;
            }
            printf("Você escolheu os atributos %d e %d para o jogo.\n", escolha1, escolha2);
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
            return 1;
    }

    //cabeçalho da resposta
    printf("\nComparando os atributos das duas cidades: %s e %s\n", cidade1, cidade2);
    printf("O Atributo escolhido foi: %d", escolha1);
    if (escolha1 == 1) {
        printf(" - População\n");
    } else if (escolha1 == 2) {
        printf(" - Área\n");
    } else if (escolha1 == 3) {
        printf(" - PIB\n");
    } else if (escolha1 == 4) {
        printf(" - Pontos Turisticos\n");
    } else if (escolha1 == 5) {
        printf(" - Densidade Populacional\n");
    } else {
        printf("Opção inválida\n");
    }


    //fazendo a comparação com base na escolha do usuário
    switch (escolha1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A cidade %s tem população de %lu habitantes, enquanto a cidade %s tem população de %lu habitantes\n", cidade1, populacao1, cidade2, populacao2);
                printf("A cidade %s ganhou! Pois tem maior população que a cidade %s\n", cidade1, cidade2);
            } else if (populacao1 < populacao2) {
                printf("A cidade %s tem população de %lu habitantes, enquanto a cidade %s tem população de %lu habitantes\n", cidade2, populacao2, cidade1, populacao1);
                printf("A cidade %s ganhou! Pois tem maior população que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma população\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A cidade %s tem área de %.2f km^2, enquanto a cidade %s tem área de %.2f km^2\n", cidade1, area1, cidade2, area2);
                printf("A cidade %s ganhou! Pois tem maior área que a cidade %s\n", cidade1, cidade2);
            } else if (area1 < area2) {
                printf("A cidade %s tem área de %.2f km^2, enquanto a cidade %s tem área de %.2f km^2\n", cidade2, area2, cidade1, area1);
                printf("A cidade %s ganhou! Pois tem maior área que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma área\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A cidade %s tem PIB de %.2f milhões de reais, enquanto a cidade %s tem PIB de %.2f milhões de reais\n", cidade1, pib1, cidade2, pib2);
                printf("A cidade %s ganhou! Pois tem maior PIB que a cidade %s\n", cidade1, cidade2);
            } else if (pib1 < pib2) {
                printf("A cidade %s tem PIB de %.2f milhões de reais, enquanto a cidade %s tem PIB de %.2f milhões de reais\n", cidade2, pib2, cidade1, pib1);
                printf("A cidade %s ganhou! Pois tem maior PIB que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm o mesmo PIB\n");
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("A cidade %s tem %d pontos turísticos, enquanto a cidade %s tem %d pontos turísticos\n", cidade1, pontos1, cidade2, pontos2);
                printf("A cidade %s ganhou! Pois tem mais pontos turísticos que a cidade %s\n", cidade1, cidade2);
            } else if (pontos1 < pontos2) {
                printf("A cidade %s tem %d pontos turísticos, enquanto a cidade %s tem %d pontos turísticos\n", cidade2, pontos2, cidade1, pontos1);
                printf("A cidade %s ganhou! Pois tem mais pontos turísticos que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm o mesmo número de pontos turísticos\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("A cidade %s tem densidade populacional de %.2f habitantes por km^2, enquanto a cidade %s tem densidade populacional de %.2f habitantes por km^2\n", cidade1, densidade1, cidade2, densidade2);
                printf("A cidade %s ganhou! Pois tem menor densidade populacional que a cidade %s\n", cidade1, cidade2);
            } else if (densidade1 > densidade2) {
                printf("A cidade %s tem densidade populacional de %.2f habitantes por km^2, enquanto a cidade %s tem densidade populacional de %.2f habitantes por km^2\n", cidade2, densidade2, cidade1, densidade1);
                printf("A cidade %s ganhou! Pois tem menor densidade populacional que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma densidade populacional\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    switch (escolha2) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A cidade %s tem população de %lu habitantes, enquanto a cidade %s tem população de %lu habitantes\n", cidade1, populacao1, cidade2, populacao2);
                printf("A cidade %s ganhou! Pois tem maior população que a cidade %s\n", cidade1, cidade2);
            } else if (populacao1 < populacao2) {
                printf("A cidade %s tem população de %lu habitantes, enquanto a cidade %s tem população de %lu habitantes\n", cidade2, populacao2, cidade1, populacao1);
                printf("A cidade %s ganhou! Pois tem maior população que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma população\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A cidade %s tem área de %.2f km^2, enquanto a cidade %s tem área de %.2f km^2\n", cidade1, area1, cidade2, area2);
                printf("A cidade %s ganhou! Pois tem maior área que a cidade %s\n", cidade1, cidade2);
            } else if (area1 < area2) {
                printf("A cidade %s tem área de %.2f km^2, enquanto a cidade %s tem área de %.2f km^2\n", cidade2, area2, cidade1, area1);
                printf("A cidade %s ganhou! Pois tem maior área que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma área\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A cidade %s tem PIB de %.2f milhões de reais, enquanto a cidade %s tem PIB de %.2f milhões de reais\n", cidade1, pib1, cidade2, pib2);
                printf("A cidade %s ganhou! Pois tem maior PIB que a cidade %s\n", cidade1, cidade2);
            } else if (pib1 < pib2) {
                printf("A cidade %s tem PIB de %.2f milhões de reais, enquanto a cidade %s tem PIB de %.2f milhões de reais\n", cidade2, pib2, cidade1, pib1);
                printf("A cidade %s ganhou! Pois tem maior PIB que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm o mesmo PIB\n");
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("A cidade %s tem %d pontos turísticos, enquanto a cidade %s tem %d pontos turísticos\n", cidade1, pontos1, cidade2, pontos2);
                printf("A cidade %s ganhou! Pois tem mais pontos turísticos que a cidade %s\n", cidade1, cidade2);
            } else if (pontos1 < pontos2) {
                printf("A cidade %s tem %d pontos turísticos, enquanto a cidade %s tem %d pontos turísticos\n", cidade2, pontos2, cidade1, pontos1);
                printf("A cidade %s ganhou! Pois tem mais pontos turísticos que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm o mesmo número de pontos turísticos\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("A cidade %s tem densidade populacional de %.2f habitantes por km^2, enquanto a cidade %s tem densidade populacional de %.2f habitantes por km^2\n", cidade1, densidade1, cidade2, densidade2);
                printf("A cidade %s ganhou! Pois tem menor densidade populacional que a cidade %s\n", cidade1, cidade2);
            } else if (densidade1 > densidade2) {
                printf("A cidade %s tem densidade populacional de %.2f habitantes por km^2, enquanto a cidade %s tem densidade populacional de %.2f habitantes por km^2\n", cidade2, densidade2, cidade1, densidade1);
                printf("A cidade %s ganhou! Pois tem menor densidade populacional que a cidade %s\n", cidade2, cidade1);
            } else {
                printf("As duas cidades têm a mesma densidade populacional\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }


// CALCULANDO SUPERPODER
    printf("a soma dos atributos da carta 1 é: %.2f\n", superPoder1);
    printf("a soma dos atributos da carta 2 é: %.2f\n", superPoder2);


    //vencedor da rodada


    if (superPoder1 > superPoder2) {
        printf("\nA cidade %s ganhou a rodada! Pois tem maior super poder que a cidade %s\n", cidade1, cidade2);
    } else if (superPoder1 < superPoder2) {
        printf("\nA cidade %s ganhou a rodada! Pois tem maior super poder que a cidade %s\n", cidade2, cidade1);
    } else {
        printf("\nEMPATE!\n");
    }

    return 0;
}