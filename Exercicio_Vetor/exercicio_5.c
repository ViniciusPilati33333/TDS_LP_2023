//Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

#include <stdio.h>

int main() {
    int numbers[5];
    int maior;
    int menor;
    int PosicMenor;
    int PosicMaior;

    printf("Digite os valores em cada posicao do vetor\n");
    
    for(int i = 0;i<=4;i++) {
        scanf("%d", &numbers[i]);
    }

    maior = numbers[0];
    menor = numbers[0];

     for(int i = 0;i<=4;i++) {
         if(numbers[i] > maior) {
            maior = numbers[i];  
            PosicMaior = i;
        }
        if(numbers[i] < menor) {
             menor = numbers[i];  
             PosicMenor = i;
        }  
     }
    printf("O maior e o: posicao[%d] e o menor e: posicao[%d]", PosicMaior,PosicMenor);
}    