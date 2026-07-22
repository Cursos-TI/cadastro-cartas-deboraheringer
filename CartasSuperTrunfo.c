#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
    //carta 1
    char estado;
    char cod_carta[4];
    char nome_cidade [30];
    int populacao;
    float area;
    float densidadePopulacional;
    float pib;
    float pibperCapita;
    int pontos_turisticos;

    //carta 2
    char estado2;
    char cod_carta2[4];
    char nome_cidade2 [30];
    int populacao2;
    float area2;
    float densidadePopulacional2;
    float pib2;
    float pibperCapita2;
    int pontos_turisticos2;


    // Área para entrada de dados
    printf("Vamos preencher os dados da primeira carta:\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf(" %3s", cod_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("\n\nAgora vamos preencher a segunda carta:\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf(" %3s", cod_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidadePopulacional = populacao/area;
    pibperCapita = (pib * 1000000000.0)/populacao; 

    densidadePopulacional2 = populacao2/area2;
    pibperCapita2 = (pib2 * 1000000000.0)/populacao2;

    // Área para exibição dos dados da cidade
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
    estado, cod_carta, nome_cidade, populacao, area, pib, pontos_turisticos, densidadePopulacional, pibperCapita);

    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
    estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidadePopulacional2, pibperCapita2);

    return 0;
} 
