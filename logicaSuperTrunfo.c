#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo\n");

    // Variáveis
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char nome1[30], nome2[30];
    int populacao1, populacao2, turista1, turista2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;

    // Entrada Carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &turista1);

    // Entrada Carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &turista2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1 - %s (%s):\n", nome1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turista1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n", pibcapita1);

    printf("\nCarta 2 - %s (%s):\n", nome2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turista2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n", pibcapita2);

    // Comparação de atributo (ex: População)
    printf("\n--- Comparação de cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s: %d habitantes\n", nome1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nome2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
