#include <stdio.h>

int main() {

    int num_tipos, num_tamanhos;
    scanf("%d %d", &num_tipos, &num_tamanhos);

    int estoque[num_tipos][num_tamanhos];

    for(int i = 0; i < num_tipos; i++) {
        for(int j = 0; j < num_tamanhos; j++) {
            scanf("%d", &estoque[i][j]);
        }
    }

    int num_pedidos;
    scanf("%d", &num_pedidos);

    int num_vendas = 0;

    for(int _ = 0; _ < num_pedidos; _++) {
        int i, j;
        scanf("%d %d", &i, &j);

        i--; j--;

        if(estoque[i][j] > 0) {
            estoque[i][j] = estoque[i][j] - 1;
            num_vendas++;
        }
    }

    printf("%d", num_vendas);

    return 0;
}