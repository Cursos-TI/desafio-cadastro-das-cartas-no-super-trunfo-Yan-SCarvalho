#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char codigo1[4];
    char nome1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variáveis da segunda carta
    char codigo2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espaços): ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em m²): ");
    scanf("%f", &area1);
    area1 = area1 / 1000000.0; // conversão de m² para km²
    printf("PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espaços): ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em m²): ");
    scanf("%f", &area2);
    area2 = area2 / 1000000.0; // conversão de m² para km²
    printf("PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // NÍVEL AVENTUREIRO
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Saída da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    // Saída da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

     //DESAFIO MESTRE :D

         // Comparações simples entre as propriedades
    int resultado;

    // População
    resultado = populacao1 > populacao2;
    printf("\nPopulação - Resultado: %d\n", resultado);

    // Área
    resultado = area1 > area2;
    printf("Área - Resultado: %d\n", resultado);

    // PIB
    resultado = pib1 > pib2;
    printf("PIB - Resultado: %d\n", resultado);

    // PIB per capita
    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per capita - Resultado: %d\n", resultado);

    // Pontos turísticos
    resultado = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos turísticos - Resultado: %d\n", resultado);

    // Densidade populacional (menor é melhor)
    resultado = densidade_populacional1 < densidade_populacional2;
    printf("Densidade populacional (menor ganha) - Resultado: %d\n", resultado);

    // Super Poder (soma de todas as propriedades)
    float super_poder1 = (float)populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + (float)pontos_turisticos1;
    float super_poder2 = (float)populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + (float)pontos_turisticos2;

    resultado = super_poder1 > super_poder2;
    printf("Super Poder - Resultado: %d\n", resultado);




    return 0;
}