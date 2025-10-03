#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro - Comparação das Cartas com Menu Interativo e Comparação Aninhada

struct Carta {
    char codigo[10];
    char nome[30];
    int populacao;
    int area;
    int pib;
};

int main() {
    struct Carta carta1, carta2;
    int opcao;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%d", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%d", &carta1.pib);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%d", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%d", &carta2.pib);

    // Menu para escolher atributo
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\n>>> Comparando %s vs %s\n", carta1.nome, carta2.nome);

    switch(opcao) {
        case 1:
            printf("Comparando População...\n");
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedora: %s (População maior)\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedora: %s (População maior)\n", carta2.nome);
            } else {
                printf("Empate na População! Comparando Área...\n");
                if (carta1.area > carta2.area)
                    printf("Vencedora: %s (Área maior)\n", carta1.nome);
                else if (carta2.area > carta1.area)
                    printf("Vencedora: %s (Área maior)\n", carta2.nome);
                else
                    printf("Empate total!\n");
            }
            break;

        case 2:
            printf("Comparando Área...\n");
            if (carta1.area > carta2.area) {
                printf("Vencedora: %s (Área maior)\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("Vencedora: %s (Área maior)\n", carta2.nome);
            } else {
                printf("Empate na Área! Comparando PIB...\n");
                if (carta1.pib > carta2.pib)
                    printf("Vencedora: %s (PIB maior)\n", carta1.nome);
                else if (carta2.pib > carta1.pib)
                    printf("Vencedora: %s (PIB maior)\n", carta2.nome);
                else
                    printf("Empate total!\n");
            }
            break;

        case 3:
            printf("Comparando PIB...\n");
            if (carta1.pib > carta2.pib) {
                printf("Vencedora: %s (PIB maior)\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedora: %s (PIB maior)\n", carta2.nome);
            } else {
                printf("Empate no PIB! Comparando População...\n");
                if (carta1.populacao > carta2.populacao)
                    printf("Vencedora: %s (População maior)\n", carta1.nome);
                else if (carta2.populacao > carta1.populacao)
                    printf("Vencedora: %s (População maior)\n", carta2.nome);
                else
                    printf("Empate total!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
