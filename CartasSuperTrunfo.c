#include <stdio.h>

// Estrutura para armazenar as informações das cartas
struct Carta {
    char estado[20];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Definição das cartas
    struct Carta carta1 = {"Estado A", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct Carta carta2 = {"Estado B", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    // Mostra as duas cartas
    printf("Carta 1: %s - %s\n", carta1.estado, carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2: %s - %s\n", carta2.estado, carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    // Jogador escolhe o atributo
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    scanf("%d", &escolha);

    // Compara os atributos escolhidos
    if (escolha == 1) {
        if (carta1.populacao > carta2.populacao)
            printf("\nCarta 1 venceu!\n");
        else if (carta2.populacao > carta1.populacao)
            printf("\nCarta 2 venceu!\n");
        else
            printf("\nEmpate!\n");
    } 
    else if (escolha == 2) {
        if (carta1.area > carta2.area)
            printf("\nCarta 1 venceu!\n");
        else if (carta2.area > carta1.area)
            printf("\nCarta 2 venceu!\n");
        else
            printf("\nEmpate!\n");
    } 
    else if (escolha == 3) {
        if (carta1.pib > carta2.pib)
            printf("\nCarta 1 venceu!\n");
        else if (carta2.pib > carta1.pib)
            printf("\nCarta 2 venceu!\n");
        else
            printf("\nEmpate!\n");
    } 
    else if (escolha == 4) {
        if (carta1.pontos_turisticos > carta2.pontos_turisticos)
            printf("\nCarta 1 venceu!\n");
        else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
            printf("\nCarta 2 venceu!\n");
        else
            printf("\nEmpate!\n");
    } 
    else {
        printf("\nOpção inválida!\n");
    }

    return 0;
}
