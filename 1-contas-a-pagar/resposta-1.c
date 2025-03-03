#include <stdio.h>

int main(){
    int V, A, F, P;

    scanf("%d", &V);
    scanf("%d", &A);
    scanf("%d", &F);
    scanf("%d", &P);

    if((A+F+P)<=V) {
        printf("%d", 3);
    } else if((A+F) <= V || (A+P) <= V || (F+P) <= V) {
        printf("%d", 2);
    } else if(A <= V || P <= V || F <= V) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}