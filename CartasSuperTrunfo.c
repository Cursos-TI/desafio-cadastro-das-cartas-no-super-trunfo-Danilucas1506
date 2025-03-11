#include <stdio.h> // Biblioteca para manipulação de strings, utilizada para remover o '\n'



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // Definindo variáveis para armazenar os dados de cada carta
    char estado1, estado2;  // Variáveis para armazenar o estado (letra de A a H)
    char codigo1[4], codigo2[4];  // Variáveis para armazenar o código da carta (ex: A01)
    int populacao1, populacao2;  // Variáveis para armazenar a população das cidades
    float area1, area2;  // Variáveis para armazenar a área das cidades em km²
    float pib1, pib2;  // Variáveis para armazenar o PIB das cidades em bilhões de reais
    int pontosTuristicos1, pontosTuristicos2;  // Variáveis para armazenar o número de pontos turísticos de cada cidade
    float densidade1, densidade2;
    float pibcap1, pibcap2;

    // Exibindo mensagem para o usuário e coletando dados da primeira carta
    printf("Inserindo dados para a primeira carta...\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é para limpar o buffer de entrada


    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);  // Lê o código da carta (como A01, B02, etc)



    printf("População: ");
    scanf("%d", &populacao1);  // Lê a população da cidade


    printf("Área (em km²): ");
    scanf("%f", &area1);  // Lê a área da cidade em km²


    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);  // Lê o PIB da cidade em bilhões de reais


    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  // Lê o número de pontos turísticos da cidade


    // Exibindo mensagem para o usuário e coletando dados da segunda carta
    printf("\nInserindo dados para a segunda carta...\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  // O espaço antes de %c é para limpar o buffer de entrada


    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);  // Lê o código da carta (como A01, B02, etc)



    printf("População: ");
    scanf("%d", &populacao2);  // Lê a população da cidade


    printf("Área (em km²): ");
    scanf("%f", &area2);  // Lê a área da cidade em km²


    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);  // Lê o PIB da cidade em bilhões de reais


    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);  
    // Lê o número de pontos turísticos da cidade



    // Calculando a densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    


     // Calculando o PIB per capita
     pibcap1 = (pib1 * 1000000000) / populacao1;  // Convertendo PIB de bilhões para reais
     pibcap2 = (pib2 * 1000000000) / populacao2;
     


    // Exibindo os dados da carta 1
    printf("\nInformações da Carta 1:\n");
    printf("Estado: %c\n", estado1);  // Exibe o estado da primeira carta
    printf("Código: %s\n", codigo1);  // Exibe o código da carta
    printf("População: %d\n", populacao1);  // Exibe a população da cidade
    printf("Área: %.2f km²\n", area1);  // Exibe a área da cidade em km²
    printf("PIB: %.2f bilhões de reais\n", pib1);  // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);  // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %2.f hab/km²\n", densidade2);
    printf("PIB per Capita: %2.f reais\n", pibcap2);
    
    // Exibindo os dados da carta 2
    printf("\nInformações da Carta 2:\n");
    printf("Estado: %c\n", estado2);  
    printf("Código: %s\n", codigo2);  
    printf("População: %d\n", populacao2); 
    printf("Área: %.2f km²\n", area2);  
    printf("PIB: %.2f bilhões de reais\n", pib2);  
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);  
    printf("Densidade Populacional: %2.f hab/km²\n", densidade2);
    printf("PIB per Capita: %2.f reais\n", pibcap2);
    
    return 0;  // Fim do programa
}
