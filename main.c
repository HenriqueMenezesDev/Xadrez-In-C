#include <stdio.h>
#include <string.h>

// Função para exibir a posição em notação de xadrez
void print_posicao(char coluna, int linha) {
    printf("%c%d\n", coluna, linha);
}

int main() {
    // Variáveis para armazenar a direção escolhida para cada peça
    char bispo[10], torre[10], rainha[10];
    
    // Posições iniciais das peças no tabuleiro
    char bispo_coluna = 'c';
    int bispo_linha = 1;
    char torre_coluna = 'a';
    int torre_linha = 1;
    char rainha_coluna = 'e';
    int rainha_linha = 1;

    // Entrada e movimentação do Bispo
    printf("Digite qual a direção o Bispo vai assumir (direita ou esquerda): \n");
    scanf("%s", bispo);
    
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        if (strcmp(bispo, "direita") == 0) {
            bispo_coluna++;  // Move para a direita na coluna
            bispo_linha++;  // Move para cima na linha
        } else if (strcmp(bispo, "esquerda") == 0) {
            bispo_coluna--;  // Move para a esquerda na coluna
            bispo_linha++;  // Move para cima na linha
        } else {
            printf("Direção inválida! Escolha entre 'direita' ou 'esquerda'.\n");
            break;
        }
        printf("Passo %d: ", i);
        print_posicao(bispo_coluna, bispo_linha);
    }

    // Entrada e movimentação da Torre
    printf("\nDigite a direção que a Torre vai assumir (cima, esquerda ou direita): \n");
    scanf("%s", torre);

    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        if (strcmp(torre, "cima") == 0) {
            torre_linha++;  // Move para cima na linha
        } else if (strcmp(torre, "esquerda") == 0) {
            torre_coluna--;  // Move para a esquerda na coluna
        } else if (strcmp(torre, "direita") == 0) {
            torre_coluna++;  // Move para a direita na coluna
        } else {
            printf("Direção inválida! Escolha entre 'cima', 'esquerda' ou 'direita'.\n");
            break;
        }
        printf("Passo %d: ", i);
        print_posicao(torre_coluna, torre_linha);
    }

    // Entrada e movimentação da Rainha
    printf("\nDigite a direção que a Rainha vai assumir (cima, esquerda, diagonalD, diagonalE ou direita): \n");
    scanf("%s", rainha);

    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= 5; i++) {
        if (strcmp(rainha, "cima") == 0) {
            rainha_linha++;  // Move para cima na linha
        } else if (strcmp(rainha, "esquerda") == 0) {
            rainha_coluna--;  // Move para a esquerda na coluna
        } else if (strcmp(rainha, "direita") == 0) {
            rainha_coluna++;  // Move para a direita na coluna
        } else if (strcmp(rainha, "diagonalD") == 0) {
            rainha_coluna++;  // Move para a direita na coluna
            rainha_linha++;  // Move para cima na linha
        } else if (strcmp(rainha, "diagonalE") == 0) {
            rainha_coluna--;  // Move para a esquerda na coluna
            rainha_linha++;  // Move para cima na linha
        } else {
            printf("Direção inválida! Escolha entre 'cima', 'esquerda', 'diagonalD', 'diagonalE' ou 'direita'.\n");
            break;
        }
        printf("Passo %d: ", i);
        print_posicao(rainha_coluna, rainha_linha);
    }

    return 0;
}
