#include <stdio.h>

int main() {
    // Cartas do Super Trunfo - Cadastro de duas cidades

    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibição dos resultados
    printf("\n===== CARTA 1 =====\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("pontos Turisticos: %d\n", pontos1);

    printf("\n===== CARTA 2 =====\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("pontos Turisticos: %d\n", pontos2);

    return 0;
}
