
#include <stdio.h>

int main() {
    printf("Aqui esta a tabuada: \n");

    int resultado[11];
    int totalDaSoma = 0;
    
    for(int i = 1;i <= 10; i++) {
        resultado[i] = 0;
            for(int j = 1; j <= 10;j++) {
                int total = i * j;
                printf("O resultado de %d x %d = %d \n", i, j, total);
                resultado[i] = resultado[i] + total;  
                totalDaSoma = totalDaSoma + total; 
            }
                printf("\n---------------- O total das somas da tubuada do %d e: %d\n",i, resultado[i]);
    }
    printf("O total da soma das tabuadas e: %d", totalDaSoma);
    return 0;
}

