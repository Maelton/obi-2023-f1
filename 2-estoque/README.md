# Estoque

## Nome do arquivo: estoque.c, estoque.cpp, estoque.java, estoque.js ou estoque.py

Você foi contratado(a) para desenvolver um programa de controle de estoque, para uma loja de roupas que está iniciando vendas online. A loja mantém um estoque de roupas, em que cada peça de roupa é identificada por um tipo (por exemplo camisa, calça, saia, vestido, ...) e um tamanho (por exemplo bebê, infantil, pequeno, médio, ...).

O estoque da loja pode ser visto como uma tabela em que cada linha representa um tipo de roupa e cada coluna representa um tamanho, como mostrado na figura (a) abaixo. Na figura, tipos de roupa são representados por números de 1 a 4 e tamanhos são representados por números de 1 a 3.

**TAMANHO**  
| TIPO | 1 | 2 | 3 |
|------|---|---|---|
| 1    | 5 | 2 | 2 |
| 2    | 6 | 4 | 0 |
| 3    | 2 | 1 | 4 |
| 4    | 1 | 3 | 2 |

(a)

---

**TAMANHO**  
| TIPO | 1 | 2 | 3 |
|------|---|---|---|
| 1    | 4 | 2 | 2 |
| 2    | 6 | 4 | 0 |
| 3    | 2 | 1 | 4 |
| 4    | 1 | 3 | 2 |

(b)

Assim, a tabela da figura (a) mostra que o estoque da peça de roupa de tipo 1 e tamanho 1 é 5 unidades, e o estoque da peça de roupa de tipo 4 e tamanho 2 é 3 unidades.

Quando uma peça de roupa é vendida, o estoque deve ser atualizado. Por exemplo, se uma peça de roupa de tipo 1 e tamanho 1 for vendida, o estoque atualizado é mostrado na figura (b). Se o estoque para um tipo e tamanho de peça de roupa tem valor zero, peças de roupa desse tipo e tamanho não podem ser vendidas (por exemplo a peça de roupa de tipo 2 e tamanho 3 na figura). Ou seja, a venda não é efetivada.

Dados o estoque inicial e a lista de pedidos de clientes, escreva um programa para determinar quantas peças de roupa são efetivamente vendidas no total. Cada pedido se refere a uma única peça de roupa. As vendas são processadas sequencialmente, na ordem em que os pedidos foram feitos. Se uma venda não é possível por falta de estoque, o pedido correspondente é ignorado.

### Entrada

A primeira linha da entrada contém dois números inteiros M e N , indicando respectivamente o número de tipos e o número de tamanhos de peças de roupa no estoque. Tipos são identificados por inteiros de 1 a M e tamanhos são identificados por inteiros de 1 a N . Cada uma das M linhas seguintes contém N inteiros $X_{i,j}$ , indicando a quantidade de roupas do tipo i e tamanho j, para 1 ≤ i ≤ M e 1 ≤ j ≤ N . A seguir a entrada contém uma linha com um número inteiro P , o número de pedidos recebidos pela loja. Cada uma das P linhas seguintes contém dois inteiros I e J representando respectivamente o tipo e o tamanho da peça de roupa de um pedido. Os pedidos são dados na ordem em que foram feitos.

### Saída

Seu programa deve produzir uma única linha, contendo um único inteiro, o número total de peças de roupas efetivamente vendidas.

### Restrições

- 1 ≤ M ≤ 500
- 1 ≤ N ≤ 500
- 0 ≤ $X_{i,j}$ ≤ 10 para 1 ≤ i ≤ M e 1 ≤ j ≤ N
- 1 ≤ P ≤ 1000
- 1 ≤ I ≤ M
- 1 ≤ J ≤ N

### Informações sobre a pontuação

- A tarefa vale 100 pontos.

- Para um conjunto de casos de testes valendo 19 pontos, há apenas um tipo de roupa, ou seja M = 1.

- Para um conjunto de casos de testes valendo 17 pontos, há apenas um tamanho de roupa, ou seja N = 1.

- Para um conjunto de casos de testes valendo os 64 pontos restantes, nenhuma restrição adicional.

### Exemplos

| **Exemplo de entrada 1** | **Exemplo de saída 1** |
|-------------------------|-----------------------|
| 4 3                     | 1                     |
| 5 2 2                   |                       |
| 6 4 0                   |                       |
| 2 1 4                   |                       |
| 1 3 2                   |                       |
| 2                       |                       |
| 1 1                     |                       |
| 2 3                     |                       |

---

| **Exemplo de entrada 2** | **Exemplo de saída 2** |
|-------------------------|-----------------------|
| 1 4                     | 3                     |
| 1 3 2 5                 |                       |
| 4                       |                       |
| 1 3                     |                       |
| 1 3                     |                       |
| 1 3                     |                       |
| 1 4                     |                       |
