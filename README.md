Manipulação de Peças de Xadrez em C
Introdução
Este projeto em C foi desenvolvido com o objetivo de manipular peças de xadrez em um tabuleiro de 8x8, permitindo ao usuário mover quatro peças (Bispo, Torre, Rainha e Cavalo) de acordo com suas respectivas regras de movimento. O programa verifica se as posições para onde as peças são movidas estão dentro dos limites do tabuleiro e exibe suas posições.

Estrutura do Código
O código é dividido em funções que executam tarefas específicas, facilitando a organização e a leitura do programa. Abaixo estão descritas as principais funções e variáveis utilizadas.

Definições e Variáveis Globais
c
#define LIMITE_LINHA 8
#define LIMITE_COLUNA 'h'
Estas definições representam os limites do tabuleiro de xadrez, sendo 8 linhas e colunas de 'a' a 'h'.

Funções
print_posicao
c
void print_posicao(char coluna, int linha) {
    printf("%c%d\n", coluna, linha);
}
Esta função exibe a posição em notação de xadrez.

esta_no_tabuleiro
c
int esta_no_tabuleiro(char coluna, int linha) {
    return (linha >= 1 && linha <= LIMITE_LINHA && coluna >= 'a' && coluna <= LIMITE_COLUNA);
}
Esta função verifica se a posição está dentro dos limites do tabuleiro.

Função Principal (main)
A função main é responsável por receber a entrada do usuário, controlar o fluxo do jogo e mover as peças de acordo com as direções fornecidas. As variáveis para armazenar a direção de cada peça e suas posições iniciais são definidas:

c
char bispo[10], torre[10], rainha[10], cavalo[10];

char bispo_coluna = 'c';
int bispo_linha = 1;
char torre_coluna = 'a';
int torre_linha = 1;
char rainha_coluna = 'e';
int rainha_linha = 1;
char cavalo_coluna = 'g';
int cavalo_linha = 1;
Movimentação do Bispo
O programa solicita ao usuário quantos movimentos o Bispo fará e em que direção (diagonalD ou diagonalE). Com base na entrada do usuário, a função esta_no_tabuleiro verifica se a nova posição está dentro dos limites do tabuleiro antes de exibi-la.

Movimentação da Torre
De maneira similar ao Bispo, o usuário informa quantos movimentos a Torre fará e em que direção (cima, esquerda ou direita). O programa então verifica e exibe a nova posição da peça.

Movimentação da Rainha
A Rainha pode se mover em mais direções (cima, esquerda, diagonalD, diagonalE ou direita). O processo de entrada e verificação de posição é análogo aos anteriores.

Movimentação do Cavalo
O Cavalo pode se mover para baixo ou para a esquerda. O programa lê a entrada do usuário, verifica os limites do tabuleiro e exibe a nova posição da peça.

Conclusão
Este programa é uma implementação básica das regras de movimentação de algumas peças de xadrez. Ele oferece uma maneira interativa para que o usuário entenda e visualize os movimentos permitidos no tabuleiro. Melhorias futuras podem incluir a implementação das demais peças do jogo e a verificação de movimentos válidos com base na posição das outras peças.
