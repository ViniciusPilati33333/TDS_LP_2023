//Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>

int main() {
    int number[10];
    int maior = 0;
    int menor = 7000000;
    int i = 0;

    printf("Digite os valores em cada posicao do vetor\n");
    
    for(int i = 0;i<=10;i++) {
        scanf("%d", &number[i]);

        if(number[i] > maior) {
             maior = number[i];
        }
        if(number[i] < menor) {
             menor = number[i];  
    }  
        }
    printf("O maior e: %d e o menor e: %d", maior,menor);
}
