# Xadrez em C

Este é um projeto de implementação do jogo de xadrez em C, que simula os movimentos das peças no tabuleiro. O programa permite a movimentação das peças como Torre, Bispo, Rainha e Cavalo, utilizando estruturas de repetição e, no caso das peças Torre, Bispo e Rainha, funções recursivas. A movimentação do Cavalo foi aprimorada com o uso de loops aninhados e múltiplas condições.

## Funcionalidades

- **Movimento da Torre**: Move-se em linha reta horizontalmente ou verticalmente.
- **Movimento do Bispo**: Move-se na diagonal (cima e direita ou baixo e esquerda).
- **Movimento da Rainha**: Move-se em todas as direções, combinando os movimentos da Torre e do Bispo.
- **Movimento do Cavalo**: Move-se em "L", duas casas em uma direção e uma casa perpendicularmente.

## Estrutura do Código

1. **Movimentos Básicos**:
   - Cada peça (Torre, Bispo e Rainha) foi implementada utilizando loops (`for`, `while`, `do-while`).
   - Movimentos mais complexos, como o do Cavalo, são implementados com loops aninhados.

2. **Recursividade**:
   - Movimentos das peças Torre, Bispo e Rainha foram substituídos por funções recursivas para simular os movimentos.

3. **Melhorias**:
   - Movimentos do Cavalo agora utilizam loops complexos com múltiplas variáveis e condições, além do aprimoramento da lógica do Bispo.

## Como Rodar o Projeto

Para compilar e rodar o programa, siga as instruções abaixo:

### 1. Clone o repositório

```bash
git clone https://github.com/HenriqueMenezesDev/Xadrez-In-C.git
