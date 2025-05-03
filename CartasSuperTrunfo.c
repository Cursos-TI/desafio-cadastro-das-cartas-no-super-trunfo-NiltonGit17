#include <stdio.h>

int main() {
    
    // Declaração das variáveis da primeira carta
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da segunda carta
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("1:\n");

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("2:\n");

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n=== Cartas Cadastradas ===\n");

    printf("Carta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

