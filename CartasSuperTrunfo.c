#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // variáveis para a carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    double pib1;
    int pontosturisticos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontosturisticos2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    // Cadastro da Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");

    //cadastro da carta 2
    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     
     printf("Carta 1 cadastrada:\n");
     printf("Estado: %c\n", estado1);
     printf("Código da carta: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2lf bilhões de reais\n", pib1);
     printf("Pontos Turísticos: %d\n", pontosturisticos1);

     printf("Carta 2 cadastrada:\n");
     printf("Estado: %c\n", estado2);
     printf("Código da carta: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2lf bilhões de reais\n", pib2);
     printf("Pontos Turísticos: %d\n", pontosturisticos2);
     
    return 0;
}
