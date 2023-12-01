
#include <stdio.h>

int main() {
    printf("Aqui esta a tabuada: \n");

    int resultado[9];
    
    for(int i = 1;i <= 10; i++) {
        for(int j = 1; j <= 10;j++) {
            int total = i * j;
        printf("O resultado de %d x %d = %d \n", i, j, total);
        }
        //printf("\n Esse e o total da soma: %d \n", resultado[0]);
    }
    return 0;
}

