// Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>

int main() {
    int number[11];
    int total = 0;
    printf("Digite os valores em cada posicao do vetor\n");
    
    for(int i = 0;i<=10;i++) {
        scanf("%d", &number[i]);
    }

    for(int i = 0;i<=10;i++) {
        if(number[i] % 2 == 0) {
            total++;
        }
    }
    printf("A quantidade de valores pares digitados e: %d", total);
}