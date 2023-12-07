//Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

#include <stdio.h>

int main() {
    int numbers[5];
    int maior = 0;
    int menor = 7000;

    printf("Digite os valores em cada posicao do vetor\n");
    
    for(int i = 0;i<=4;i++) {
        scanf("%d", &numbers[i]);

         if(numbers[i] > maior) {
             numbers[i] = maior;
             printf("Esse e o maior: %d \n", i);

        }
        if(numbers[i] < menor) {
             menor = i;  
        }  
    }
    printf("O maior e o: numbers[%d] e o menor e: numbers[%d]", maior,menor);
}    