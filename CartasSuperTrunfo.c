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
    unsigned int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    getchar(); // Limpar buffer
    printf("Código da carta: ");
    scanf("%s", codigo1);
    getchar(); // Limpar buffer antes da string
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1); //insira o PIB em bilhões
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    //cadastro da carta 2
    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar();
    printf("Código da carta: ");
    scanf("%s", codigo2);
    getchar();
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);  //insira o PIB em bilhões
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    //calculo da densidade populacional
    //densidade_populacional1 = populacao1 / area1;
    //densidade_populacional2 = populacao2 / area2;
    // Alterando a densidade populacional para garantir precisão
    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    //calculo do PIB per Capita
    //pib_per_capita1 = pib1 * 1e9 / populacao1;  // Converte o PIB de bilhões para reais
    //pib_per_capita2 = pib2 * 1e9 /populacao2;  // Converte o PIB de bilhões para reais
    // Alterando a densidade populacional para garantir precisão
    // Garantindo precisão na divisão do PIB per capita
    pib_per_capita1 = pib1 * 1e9 / (double) populacao1;
    pib_per_capita2 = pib2 * 1e9 / (double) populacao2;

    //Calculo do SUPER PODER
    
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (area1 / populacao1);
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (area2 / populacao2);

    //Variáveis de Comparação
    int vencedor_populacao = (populacao1 > populacao2);
    int vencedor_area = (area1 > area2);
    int vencedor_PIB = (pib1 > pib2);
    int vencedor_PontosTuristicos = (pontos_turisticos1 > pontos_turisticos2);
    int vencedor_PIBperCapita = (pib_per_capita1 > pib_per_capita2);
    int vencedor_DensidadePopulacional = (densidade_populacional1 < densidade_populacional2);
    int vencedor_superPoder = (super_poder1 > super_poder2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     
     printf("Carta 1 cadastrada:\n");
     printf("Estado: %c\n", estado1);
     printf("Código da carta: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %u\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2lf bilhões de reais\n", pib1); // Exibe o PIB como bilhões
     printf("Pontos Turísticos: %d\n", pontos_turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
     printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
     printf("Super Poder: %.2f\n", super_poder1);
     printf("\n");

     printf("Carta 2 cadastrada:\n");
     printf("Estado: %c\n", estado2);
     printf("Código da carta: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %u\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2lf bilhões de reais\n", pib2); // Exibe o PIB como bilhões
     printf("Pontos Turísticos: %d\n", pontos_turisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
     printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
     printf("Super Poder: %.2f\n", super_poder2);
     printf("\n");

     //Exibição dos resultados das comparações
     printf("Resultado das Comparações: \n");
     printf("População: %d\n", vencedor_populacao);
     printf("Área: %d\n", vencedor_area);
     printf("PIB: %d\n", vencedor_PIB);
     printf("Pontos Turísticos: %d\n", vencedor_PontosTuristicos);
     printf("PIB per Capita: %d\n", vencedor_PIBperCapita);
     printf("Densidade Populacional: %d\n", vencedor_DensidadePopulacional);
     printf("Super Poder: %d\n", vencedor_superPoder);
     printf("\n");

     printf("Comparação de cartas por atributo: \n");
     printf("\n");
     printf("Atributo População: \n");
     printf("Carta 1: %u\n", populacao1);
     printf("Carta 2: %u\n", populacao2);
     if (populacao1 > populacao2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }
     printf("\n");
     printf("Atributo Área: \n");
     printf("Carta 1: %.2f km²\n", area1);
     printf("Carta 2: %.2f km²\n", area2);
     if (area1 > area2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }
     printf("\n");
     printf("Atributo PIB: \n");
     printf("Carta 1: %.2lf bilhões de reais\n", pib1);
     printf("Carta 2: %.2lf bilhões de reais\n", pib2);
     if (pib1 > pib2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }
     printf("\n");
     printf("Atributo Pontos Turísticos: \n");
     printf("Carta 1: %d\n", pontos_turisticos1);
     printf("Carta 2: %d\n", pontos_turisticos2);
     if (pontos_turisticos1 > pontos_turisticos2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }
     printf("\n");
     printf("Atributo Densidade Populacional: \n");
     printf("Carta 1: %.2f hab/km²\n", densidade_populacional1);
     printf("Carta 2: %.2f hab/km²\n", densidade_populacional2);
     if (densidade_populacional1 < densidade_populacional2){
        printf("Resultado: Carta 1 venceu: \n");
     } else{
        printf("Resultado: Carta 2 venceu: \n");
     printf("\n");
     printf("Atributo PIB per Capita: \n");
     printf("Carta 1: %.2f reais\n", pib_per_capita1);
     printf("Carta 2: %.2f reais\n", pib_per_capita2);
     if (pib_per_capita1 > pib_per_capita2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }
     printf("\n");
     printf("Atributo Super Poder: \n");
     printf("Carta 1: %.2f\n", super_poder1);
     printf("Carta 2: %.2f\n", super_poder2);
     if (super_poder1 > super_poder2){
        printf("Resultado: Carta 1 venceu: \n");
     } else {
        printf("Resultado: Carta 2 venceu: \n");
     }


     
     


     //exemplo para as saídas
     //Carta 1:
     //Estado: A
     //Código: A01
     //Nome da Cidade: São Paulo
     //População: 12325000
     //Área: 1521.11 km²
     //PIB: 699.28 bilhões de reais
     //Número de Pontos Turísticos: 50
     //Densidade Populacional: 8102.47 hab/km²
     //PIB per Capita: 56724.32 reais

     //Carta 2:
     //Estado: B
     //Código: B02
     //Nome da Cidade: Rio de Janeiro
     //População: 6748000
     //Área: 1200.25 km²
     //PIB: 300.50 bilhões de reais
     //Número de Pontos Turísticos: 30
     //Densidade Populacional: 5622.24 hab/km²
     //PIB per Capita: 44532.91 reais
     
    return 0;
    
}