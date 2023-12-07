#include <stdio.h>

void main() {
    int A[6];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int soma = A[0] + A[1] + A[5];
    printf("A soma das tres posicoes e: %d \n", soma);

    A[4] = 100; //Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
   
    for(int i = 0;i <= 5;i++) {
        printf("valor %d e: %d \n", i, A[i]);
    }
}