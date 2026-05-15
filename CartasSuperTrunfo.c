#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

int main() {
    // Variáveis da Carta 1
    char estado1[8];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2

    char estado2[8];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // CADASTRO DA CARTA 1

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // CADASTRO DA CARTA 2
    
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // LÓGICA DE COMPARAÇÃO 

    printf("\n=========================================\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("=========================================\n");
    
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);
    
    // Estrutura de decisão if e if-else para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
