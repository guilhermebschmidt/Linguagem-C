// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Programa para ler um numero inteiro e se ele for entre 1 e 4, exibir um caractere especifico de cada numero
    int n;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n == 1){
        printf("A");
    }
    else if (n == 2){
        printf("B");
    }
    else if (n == 3){
        printf("C");
    }
    else if (n == 4){
        printf("D");
    }
    else {
        printf("0");
    }

    return 0;
}
