#include <stdio.h>

int main() {
    int valor, acougue, farmacia, padaria;

    scanf("%d", &valor);
    scanf("%d", &acougue);
    scanf("%d", &farmacia);
    scanf("%d", &padaria);

    int array[] = {acougue, farmacia, padaria};

    //Bubble sort simplificado
    if(array[0] > array[1]){int temp = array[1]; array[1] = array[0]; array[0] = temp;}
    if(array[1] > array[2]){int temp = array[2]; array[2] = array[1]; array[1] = temp;}
    if(array[0] > array[1]){int temp = array[1]; array[1] = array[0]; array[0] = temp;}

    int contas_pagas = 0;

    for(int i = 0; i < 3; i++) {
        if(valor >= array[i]) {
            valor -= array[i];
            contas_pagas++;
        } 
    }

    printf("%d\n", contas_pagas);
}