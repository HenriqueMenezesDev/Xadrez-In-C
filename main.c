#include <stdio.h>
#include <string.h>

#define LIMITE_LINHA 8
#define LIMITE_COLUNA 'h'

// Função para exibir a posição em notação de xadrez
void print_posicao(char coluna, int linha) {
    printf("%c%d\n", coluna, linha);
}

// Função para verificar se a posição está dentro dos limites do tabuleiro
int esta_no_tabuleiro(char coluna, int linha) {
    return (linha >= 1 && linha <= LIMITE_LINHA && coluna >= 'a' && coluna <= LIMITE_COLUNA);
}

int main() {
    // Variáveis para armazenar a direção escolhida para cada peça
    char bispo[10], torre[10], rainha[10], cavalo[10];
    
    // Posições iniciais das peças no tabuleiro
    char bispo_coluna = 'c';
    int bispo_linha = 1;
    char torre_coluna = 'a';
    int torre_linha = 1;
    char rainha_coluna = 'e';
    int rainha_linha = 1;
    char cavalo_coluna = 'g';
    int cavalo_linha = 1;

    // Entrada e movimentação do Bispo
    printf("\nDigite quantos movimentos o Bispo vai fazer e em que direção (diagonalD ou diagonalE):\n");
    int movimentos_bispo;
    printf("Quantos movimentos o Bispo vai fazer? ");
    scanf("%d", &movimentos_bispo);

    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= movimentos_bispo; i++) {
        printf("Digite a direção do movimento %d (diagonalD ou diagonalE): ", i);
        scanf("%s", bispo);
        
        if (strcmp(bispo, "diagonalD") == 0) {
            bispo_coluna++;  // Move para a direita na coluna
            bispo_linha++;  // Move para cima na linha
        } else if (strcmp(bispo, "diagonalE") == 0) {
            bispo_coluna--;  // Move para a esquerda na coluna
            bispo_linha++;  // Move para cima na linha
        } else {
            printf("Direção inválida! Escolha entre 'diagonalD' ou 'diagonalE'.\n");
            break;
        }

        // Verificar se a nova posição está dentro dos limites do tabuleiro
        if (esta_no_tabuleiro(bispo_coluna, bispo_linha)) {
            printf("Passo %d: ", i);
            print_posicao(bispo_coluna, bispo_linha);
        } else {
            printf("Movimento fora dos limites! O bispo não pode se mover para essa posição.\n");
            break;
        }
    }

    // Entrada e movimentação da Torre
    printf("\nDigite quantos movimentos a Torre vai fazer e em que direção (cima, esquerda ou direita):\n");
    int movimentos_torre;
    printf("Quantos movimentos a Torre vai fazer? ");
    scanf("%d", &movimentos_torre);

    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= movimentos_torre; i++) {
        printf("Digite a direção do movimento %d (cima, esquerda ou direita): ", i);
        scanf("%s", torre);

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

        // Verificar se a nova posição está dentro dos limites do tabuleiro
        if (esta_no_tabuleiro(torre_coluna, torre_linha)) {
            printf("Passo %d: ", i);
            print_posicao(torre_coluna, torre_linha);
        } else {
            printf("Movimento fora dos limites! A torre não pode se mover para essa posição.\n");
            break;
        }
    }

    // Entrada e movimentação da Rainha
    printf("\nDigite quantos movimentos a Rainha vai fazer e em que direção (cima, esquerda, diagonalD, diagonalE ou direita):\n");
    int movimentos_rainha;
    printf("Quantos movimentos a Rainha vai fazer? ");
    scanf("%d", &movimentos_rainha);

    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= movimentos_rainha; i++) {
        printf("Digite a direção do movimento %d (cima, esquerda, diagonalD, diagonalE ou direita): ", i);
        scanf("%s", rainha);

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

        // Verificar se a nova posição está dentro dos limites do tabuleiro
        if (esta_no_tabuleiro(rainha_coluna, rainha_linha)) {
            printf("Passo %d: ", i);
            print_posicao(rainha_coluna, rainha_linha);
        } else {
            printf("Movimento fora dos limites! A rainha não pode se mover para essa posição.\n");
            break;
        }
    }

    // Entrada e movimentação do Cavalo
    printf("\nDigite quantos movimentos o Cavalo vai fazer e em que direção (baixo ou esquerda):\n");
    int movimentos_cavalo;
    printf("Quantos movimentos o Cavalo vai fazer? ");
    scanf("%d", &movimentos_cavalo);

    printf("Movimentação do Cavalo:\n");

    for (int i = 1; i <= movimentos_cavalo; i++) {
        char movimento[10];
        printf("Digite o movimento %d (baixo ou esquerda): ", i);
        scanf("%s", movimento);  // Lê o movimento digitado pelo usuário

        if (strcmp(movimento, "baixo") == 0) {
            cavalo_linha--;  // Mover para baixo
        } else if (strcmp(movimento, "esquerda") == 0) {
            cavalo_coluna--;  // Mover para a esquerda
        } else {
            printf("Movimento inválido! Escolha entre 'baixo' ou 'esquerda'.\n");
            i--;  // Repete o movimento caso o usuário digite algo errado
        }

        // Verificar se a nova posição está dentro dos limites do tabuleiro
        if (esta_no_tabuleiro(cavalo_coluna, cavalo_linha)) {
            printf("Passo %d: ", i);
            print_posicao(cavalo_coluna, cavalo_linha);
        } else {
            printf("Movimento fora dos limites! O cavalo não pode se mover para essa posição.\n");
            break;
        }
    }

    return 0;
}
