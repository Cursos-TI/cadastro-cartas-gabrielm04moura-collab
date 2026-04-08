#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[8];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
  // Área para entrada de dados
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o codigo: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade); 
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
  // Área para exibição dos dados da cidade
    printf("\nDados da Cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

return 0;
} 
