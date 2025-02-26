# README - Simulador de Movimentos de Peças de Xadrez

## Introdução
Este programa simula a movimentação de três peças de xadrez: **Bispo, Torre e Rainha**. O usuário pode escolher uma direção para cada peça, e o programa exibe a sequência de movimentos dessa peça em um tabuleiro teórico. O tabuleiro é representado por coordenadas semelhantes às do xadrez tradicional (por exemplo, `c1`, `a3`).

---

## Bibliotecas Utilizadas
```c
#include <stdio.h>
#include <string.h>
```
- **`stdio.h`**: Biblioteca padrão de entrada e saída, usada para `printf` e `scanf`.
- **`string.h`**: Biblioteca necessária para manipular strings, usada para comparar strings com `strcmp()`.

---

## Estrutura do Código
### 1. Função `print_posicao()`
```c
void print_posicao(char coluna, int linha) {
    printf("%c%d\n", coluna, linha);
}
```
Essa função recebe um caractere (`coluna`) e um número (`linha`) e imprime no formato correto da notificação de xadrez, como `c1`, `e5`.

### 2. Declaração das Variáveis
```c
char bispo[10], torre[10], rainha[10];
```
Essas são strings que armazenam as direções escolhidas pelo usuário.

```c
char bispo_coluna = 'c';
int bispo_linha = 1;
char torre_coluna = 'd';
int torre_linha = 1;
char rainha_coluna = 'e';
int rainha_linha = 1;
```
Essas variáveis representam as posições iniciais de cada peça no tabuleiro.

### 3. Entrada e Movimentação do Bispo
```c
printf("Digite qual a direção o Bispo vai assumir (direita ou esquerda): \n");
scanf("%s", bispo);
```
Solicita ao usuário a direção em que o bispo deve se mover.

#### Lógica de Movimentação do Bispo
```c
for (int i = 1; i <= 5; i++) {
    if (strcmp(bispo, "direita") == 0) {
        bispo_coluna++;
        bispo_linha++;
    } else if (strcmp(bispo, "esquerda") == 0) {
        bispo_coluna--;
        bispo_linha++;
    } else {
        printf("Direção inválida!\n");
        break;
    }
    printf("Passo %d: ", i);
    print_posicao(bispo_coluna, bispo_linha);
}
```
- O `for` move o bispo por **5 casas**.
- `strcmp()` compara a entrada do usuário e verifica se é "direita" ou "esquerda".
- Se for **direita**, o bispo sobe **diagonalmente para a direita** (`bispo_coluna++`, `bispo_linha++`).
- Se for **esquerda**, o bispo sobe **diagonalmente para a esquerda** (`bispo_coluna--`, `bispo_linha++`).
- Se a entrada for inválida, o programa exibe um erro e interrompe a movimentação do bispo.

### 4. Entrada e Movimentação da Torre
```c
printf("\nDigite a direção que a Torre vai assumir (cima, esquerda ou direita): \n");
scanf("%s", torre);
```
- Solicita ao usuário a direção da torre.

#### Lógica da Torre
```c
for (int i = 1; i <= 5; i++) {
    if (strcmp(torre, "cima") == 0) {
        torre_linha++;
    } else if (strcmp(torre, "esquerda") == 0) {
        torre_coluna--;
    } else if (strcmp(torre, "direita") == 0) {
        torre_coluna++;
    } else {
        printf("Direção inválida!\n");
        break;
    }
    printf("Passo %d: ", i);
    print_posicao(torre_coluna, torre_linha);
}
```
- A torre pode **andar apenas em linha reta** (cima, esquerda ou direita).
- Dependendo da direção escolhida, altera **somente a coluna ou a linha**.

### 5. Entrada e Movimentação da Rainha
```c
printf("\nDigite a direção que a Rainha vai assumir (cima, esquerda, diagonalD, diagonalE ou direita): \n");
scanf("%s", rainha);
```
- Solicita ao usuário a direção da rainha.

#### Lógica da Rainha
```c
for (int i = 1; i <= 5; i++) {
    if (strcmp(rainha, "cima") == 0) {
        rainha_linha++;
    } else if (strcmp(rainha, "esquerda") == 0) {
        rainha_coluna--;
    } else if (strcmp(rainha, "direita") == 0) {
        rainha_coluna++;
    } else if (strcmp(rainha, "diagonalD") == 0) {
        rainha_coluna++;
        rainha_linha++;
    } else if (strcmp(rainha, "diagonalE") == 0) {
        rainha_coluna--;
        rainha_linha++;
    } else {
        printf("Direção inválida!\n");
        break;
    }
    printf("Passo %d: ", i);
    print_posicao(rainha_coluna, rainha_linha);
}
```
- A rainha pode **andar tanto em linha reta quanto na diagonal**.
- Se for diagonal, **modifica coluna e linha ao mesmo tempo**.

---
## Exemplo de Saída
### Entrada do Usuário
```
Digite qual a direção o Bispo vai assumir (direita ou esquerda):
direita
Digite a direção que a Torre vai assumir (cima, esquerda ou direita):
cima
Digite a direção que a Rainha vai assumir (cima, esquerda, diagonalD, diagonalE ou direita):
diagonalD
```

### Saída Gerada
```
Movimentação do Bispo:
Passo 1: d2
Passo 2: e3
...
Movimentação da Torre:
Passo 1: d2
Passo 2: d3
...
Movimentação da Rainha:
Passo 1: f2
Passo 2: g3
...
```

---
## Conclusão
Esse programa é uma excelente forma de aprender **lógica de programação**, manipulação de strings e controle de fluxo com `if` e `for`.
Se tiver dúvidas ou quiser adicionar mais funcionalidades, só avisar! 🚀

