// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Programa para ler um numero inteiro e se ele for entre 1 e 4, exibir um caractere especifico de cada numero
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        default:
            printf("0");
    }

    return 0;
}
