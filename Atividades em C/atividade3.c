// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Programa para o usuario digitar os numeros de 2 vetores, mostrar os numeros e aparecer a posicao em que os numeros sao iguais
    int v1[5], v2[5];
    int i = 0, j = 0;

    for(i = 0; i < 5; i++){
        printf("Informe o valor do elemento %d do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(j = 0; j < 5; j++){
        printf("Informe o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }

    printf("Vetor 1: ");
    for(i = 0; i < 5; i++){
        printf("%d ", v1[i]);
    }

    printf("\n");

    printf("Vetor 2: ");
    for(j = 0; j < 5; j++){
        printf("%d ", v2[j]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(v1[i] == v2[j]){
                printf("\n Valores iguais na posicao %d e %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
