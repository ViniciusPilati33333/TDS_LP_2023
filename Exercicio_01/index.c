//exercicio 24 
   /* 24-
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac ̧a um programa em que o usuario entre com o valor e o estado destino do  ́
produto e o programa retorne o prec ̧o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado n  ́ ao for v  ̃ alido, mostrar uma mensagem  ́
de erro.
 */


#include <stdio.h>
#include <string.h>

int main() {
    float value;
    int state;
    float totalValue;

    printf("Digite o valor do produto: ");
    scanf("%f", &value);

    if(value <= 0) {
        printf("Voce precisa digitar um valor maior que zero.");
    } else {
        printf("Selecione o estado que voce mora:\n");
        printf("1 - MG\n2 - SP\n3 - RJ \n4 - MS \n");
        scanf("%d", &state);

        switch(state) {
            case 1: totalValue = value + ((value/100)*7);
                    printf("O valor total e: %.1f", totalValue);
            break;
            case 2: totalValue = value + ((value/100)*12);
                    printf("O valor total e: %.1f", totalValue);
            break;
            case 3: totalValue = value + ((value/100)*15);
                    printf("O valor total e: %.1f", totalValue);
            break;
            case 4: totalValue = value + ((value/100)*8);
                    printf("O valor total e: %.1f", totalValue);
            break;
            default: printf("Digite um numero valido para o seu estado!(1 a 4).");
        }
    }
}
