#include <stdio.h>

void main() {
    int A[6] = {1, 0, 5,-2, -5, 7};

    int soma = A[0] + A[1] + A[5];
    printf("A soma das tres posicoes e: %d \n", soma);

    A[4] = 100;
   
    for(int i = 0;i <= 5;i++) {
        printf("valor %d e: %d \n", i, A[i]);
    }
}