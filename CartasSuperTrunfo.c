#include <stdio.h>

int main() {

    // seção 1: definição das variáveis
    char estado1[10], estado2[10];      // estado
    char codigo1[10], codigo2[10];      // código da carta
    char cidade1[50], cidade2[50];      // nome da cidade

    int populacao1, populacao2;         // população
    int pontos1, pontos2;               // pontos turísticos

    float area1, area2;                 // área
    float pib1, pib2;                   // PIB

    float densidade1, densidade2;       // densidade populacional
    float pibpc1, pibpc2;               // PIB per capita


    // seção 2: cadastro da carta 1
    printf("Cadastro da Carta 1\n");

    printf("Estado:\n");
    scanf(" %s", estado1);

    printf("Código:\n");
    scanf(" %s", codigo1);

    printf("Nome da cidade:\n");
    scanf(" %s", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos1);


    // seção 3: cadastro da carta 2
    printf("Cadastro da Carta 2\n");

    printf("Estado:\n");
    scanf(" %s", estado2);

    printf("Código:\n");
    scanf(" %s", codigo2);

    printf("Nome da cidade:\n");
    scanf(" %s", cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos2);


    // seção 4: cálculos obrigatórios

    // densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB / população
    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;


    // seção 5: exibição dos cálculos

    printf("Densidade Populacional Carta 1: %.2f\n", densidade1);
    printf("PIB per capita Carta 1: %.2f\n", pibpc1);

    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);
    printf("PIB per capita Carta 2: %.2f\n", pibpc2);


    // seção 6: comparação (atributo escolhido: PIB)

    printf("Comparação de cartas (Atributo: PIB)\n");

    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);

    // regra: maior valor vence
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}