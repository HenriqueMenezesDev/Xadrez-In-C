Simulação de Movimentação de Peças de Xadrez
Este projeto foi desenvolvido para simular a movimentação de peças de xadrez em um tabuleiro 8x8. O programa, implementado em linguagem C, permite ao usuário controlar o movimento de quatro peças: Bispo, Torre, Rainha e Cavalo. A movimentação das peças é validada em tempo real, garantindo que cada posição final respeite as regras do jogo e esteja dentro dos limites do tabuleiro.

Funcionalidades
O programa permite a movimentação das seguintes peças de xadrez:

Bispo: Movimenta-se apenas nas diagonais.

Direção diagonalD: Move para a diagonal direita.
Direção diagonalE: Move para a diagonal esquerda.
Torre: Movimenta-se em linha reta, para cima, para a esquerda ou para a direita.

Direção cima: Move para cima no tabuleiro.
Direção esquerda: Move para a esquerda no tabuleiro.
Direção direita: Move para a direita no tabuleiro.
Rainha: Combina os movimentos da Torre e do Bispo, podendo se mover tanto nas linhas retas quanto nas diagonais.

Direções: cima, esquerda, direita, diagonalD, diagonalE.
Cavalo: Movimenta-se de forma única, em um padrão de "L", podendo se mover para baixo ou para a esquerda.

Direção baixo: Move para baixo no tabuleiro.
Direção esquerda: Move para a esquerda no tabuleiro.
O programa também valida se a nova posição de cada peça está dentro dos limites do tabuleiro 8x8. Caso um movimento ultrapasse os limites, o sistema emite uma mensagem de erro.

Estrutura do Código
O código é dividido em funções que tratam das funcionalidades principais do programa:

Função print_posicao: Exibe a posição de uma peça em notação de xadrez (ex.: "c3", "h8").
Função esta_no_tabuleiro: Verifica se uma peça permanece dentro dos limites do tabuleiro após um movimento.
Função main: Controla o fluxo principal do programa, gerenciando a entrada de dados do usuário e a execução dos movimentos das peças.
Como Utilizar
Para compilar e executar o código, siga os passos abaixo:

Compilação: Utilize um compilador C (como o GCC) para compilar o código:

bash
Copiar
Editar
gcc movimentacao_pecas.c -o movimentacao_pecas
Execução: Após a compilação, execute o programa gerado:

bash
Copiar
Editar
./movimentacao_pecas
Interação com o Programa: O programa solicitará ao usuário o número de movimentos para cada peça e as direções desejadas. As direções devem ser inseridas conforme as opções disponibilizadas:

Para o Bispo: diagonalD ou diagonalE.
Para a Torre: cima, esquerda ou direita.
Para a Rainha: cima, esquerda, direita, diagonalD, diagonalE.
Para o Cavalo: baixo ou esquerda.
Após cada movimento, a nova posição da peça será exibida em notação de xadrez, ou uma mensagem de erro será mostrada caso o movimento ultrapasse os limites do tabuleiro.

Exemplo de Execução
Um exemplo de execução do programa pode ser visualizado abaixo:

bash
Copiar
Editar
Digite quantos movimentos o Bispo vai fazer e em que direção (diagonalD ou diagonalE):
Quantos movimentos o Bispo vai fazer? 2
Movimentação do Bispo:
Digite a direção do movimento 1 (diagonalD ou diagonalE): diagonalD
Passo 1: d2
Digite a direção do movimento 2 (diagonalD ou diagonalE): diagonalE
Passo 2: c3

Digite quantos movimentos a Torre vai fazer e em que direção (cima, esquerda ou direita):
Quantos movimentos a Torre vai fazer? 1
Movimentação da Torre:
Digite a direção do movimento 1 (cima, esquerda ou direita): cima
Passo 1: a2
Requisitos
Sistema Operacional: Qualquer sistema que suporte a linguagem C.
Compilador C: GCC ou qualquer compilador compatível com a linguagem C.
Funcionamento Detalhado
Posições Iniciais: As peças começam em posições predefinidas no tabuleiro:

Bispo em c1
Torre em a1
Rainha em e1
Cavalo em g1
Entrada do Usuário: O programa solicita que o usuário informe o número de movimentos e as direções para cada peça. A entrada é validada para garantir que a direção inserida seja compatível com os movimentos possíveis para cada peça.

Validação dos Movimentos: Após cada movimento, o programa verifica se a posição resultante está dentro dos limites do tabuleiro (linhas de 1 a 8 e colunas de 'a' a 'h'). Caso o movimento seja inválido, o programa interrompe a execução da peça e exibe uma mensagem de erro.

Possíveis Melhorias Futuras
Implementação de um sistema de repetição de movimentos, permitindo ao usuário corrigir entradas incorretas.
Inclusão de novas peças (como o Rei e os Peões) com suas respectivas regras de movimento.
Adição de uma interface gráfica para tornar a interação mais visual e intuitiva.
Conclusão
Este projeto foi desenvolvido com o objetivo de ilustrar a implementação de um jogo de xadrez básico, focando na movimentação das peças de forma simples e interativa. O código é modular e pode ser facilmente expandido para incluir mais funcionalidades, como a movimentação de outras peças ou a adição de um sistema de jogo completo.
