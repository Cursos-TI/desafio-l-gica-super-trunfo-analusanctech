#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

     // Área para definição das variáveis para armazenar as propriedades das cidades
    // CARTA 1
    char estado1[20];
    char codigo1[10];
    char cidade1[30];
    unsigned int populacao1;
    double area1;
    double pib1;
    unsigned int turisticos1;

    // CARTA 2
    char estado2[20];
    char codigo2[10];
    char cidade2[30];
    unsigned int populacao2;
    double area2;
    double pib2;
    unsigned int turisticos2;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("=== CARTA 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área (km²): ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos turísticos: ");
    scanf("%u", &turisticos1);

    //CARTA 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área (km²): ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos turísticos: ");
    scanf("%u", &turisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2) {
         printf("Cidade 1 tem maior população.\n");
     } else {
         printf("Cidade 2 tem maior população.\n");
     }

     if (area1 > area2) {
         printf("Cidade 1 tem maior area.\n");
     } else {
         printf("Cidade 2 tem maior area.\n");
     }

     if (pib1 > pib2) {
         printf("Cidade 1 tem maior pib.\n");
     } else {
         printf("Cidade 2 tem maior pib.\n");
     }

     if (turisticos1> turisticos2) {
         printf("Cidade 1 tem maior pontos turisticos.\n");
     } else {
         printf("Cidade 2 tem maior pontos turisticos.\n");
     }
     
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2lf hab/km²\n", populacao1 / area1);
    printf("PIB per capita: R$ %.2lf\n", pib1 / populacao1);

    //CARTA 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: R$ %.2lf\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2lf hab/km²\n", populacao2 / area2);
    printf("PIB per capita: R$ %.2lf\n", pib2 / populacao2);

    // Exemplo:
     printf("A cidade vencedora é: %s\n", superpoder);

    return 0;
}
