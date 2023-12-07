#include <stdio.h>

int main() {
    int vetor[8];
    int a = 0;
    int b = 0;

    printf("Digite o valor de cada posicao do vetor: \n");

    for(int i = 0;i <= 7;i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Escolha duas posicoes do vetor para somar:");
    scanf("%d", &a);

    printf("Escolha a segunda posicao do vetor:");
    scanf("%d", &b);

    if(a > 8 || a < 0 || b > 8 || b < 0) {
        printf("As posicoes devem ser de 0 a 8!");
    } else {
        printf("A soma dos vetores vetor[%d] + vetor[%d] e: %d",a,b,vetor[a] + vetor[b]);
    }
}


