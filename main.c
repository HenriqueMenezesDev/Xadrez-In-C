#include <stdio.h>

// Função recursiva para a movimentação da Torre (5 casas para a direita)
void mover_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mover_torre(casas - 1); // Chamada recursiva para o próximo movimento
    }
}

// Função recursiva para a movimentação do Bispo (5 casas na diagonal para cima e à direita)
void mover_bispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        mover_bispo(casas - 1); // Chamada recursiva para o próximo movimento
    }
}

// Função recursiva para a movimentação da Rainha (8 casas para a esquerda)
void mover_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha(casas - 1); // Chamada recursiva para o próximo movimento
    }
}

// Função para simular o movimento do Cavalo (duas casas para cima e uma para a direita)
void mover_cavalo() {
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");  // Move duas casas para cima
    }

    // Mover uma casa para a direita
    for (int i = 1; i <= 1; i++) {
        printf("Direita\n");
    }
}

// Função recursiva para o movimento do Bispo com loops aninhados (movimento na diagonal)
void mover_bispo_complexo(int casas_vertical, int casas_horizontal) {
    if (casas_vertical > 0) {
        for (int i = 1; i <= casas_horizontal; i++) {
            printf("Direita\n");  // Movimento horizontal
        }
        printf("Cima\n");  // Movimento vertical
        mover_bispo_complexo(casas_vertical - 1, casas_horizontal);  // Chamada recursiva
    }
}

int main() {
    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    mover_torre(5);
    
    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    mover_bispo(5);

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    mover_rainha(8);

    // Movimentação do Cavalo: duas casas para cima e uma para a direita
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    // Movimentação do Bispo com loops aninhados: 3 casas para cima e 3 para a direita
    printf("\nMovimento do Bispo Complexo:\n");
    mover_bispo_complexo(3, 3);

    return 0;
}
