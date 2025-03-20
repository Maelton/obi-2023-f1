#include <stdio.h>
#include <stdbool.h>

int main() {
    int tamanho_sequencia_a, tamanho_sequencia_b;
    scanf("%d %d", &tamanho_sequencia_a, &tamanho_sequencia_b);

    int sequencia_a[tamanho_sequencia_a], sequencia_b[tamanho_sequencia_b];

    for(int i = 0; i<tamanho_sequencia_a; i++) {
        scanf("%d", &sequencia_a[i]);
    }

    //o indice do ultimo elemento da subsequencia em A
    int index_ultimo_Bi = 0;

    //comecar a receber os elementos da sequencia b
    for(int i = 0; i < tamanho_sequencia_b; i++) {
        scanf("%d", &sequencia_b[i]);
        
        //para cada Bi, conferir se ele estah presente em A
        bool Bi_estah_em_A = false;
        //conferir se Bi, estah fora de sequencia
        bool Bi_fora_de_sequencia = false;

        for(int j = 0; j < tamanho_sequencia_a; j++) {
            if(sequencia_b[i] == sequencia_a[j]) {
                Bi_estah_em_A = true;
                
                //qualquer Bi+n que estiver antes de Bi nao interessa pois nao forma sequencia
                if(j >= index_ultimo_Bi) {
                    Bi_fora_de_sequencia = false;
                    index_ultimo_Bi = j;

                    //o indice da primeira ocorrencia eh o que importa
                    //porque todos os outros Bi+n poderao estar depois de Bi
                    //se ja encontrei, posso ir para a conferencia do proximo Bi
                    continue;
                } else {
                    //se Bi estiver em A, mas seu indice for menor que o indice do ultimo Bi
                    //ou seja, se ele estiver antes do seu elemento antecessor, entao nao ha sequencia
                    //se isso for verdade ate o final do loop, significa que a sequencia nao existe
                    //mesmo que Bi esteja em A, ele esta em posicao incorreta
                    Bi_fora_de_sequencia = true;
                }
            }
        }

        //se Bi nao estiver em A nao tem sequencia
        //se Bi estah em A mas nao estah em posicao sequencial correta entao nao ha sequencia
        if(!Bi_estah_em_A || Bi_fora_de_sequencia) {
            printf("N");
            return 0;
        }
    }

    //se nada deu errado retornar S
    printf("S");
    return 0;
}