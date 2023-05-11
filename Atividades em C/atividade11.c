//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Programa que coleta 3 valores, soma 100 em cada valor e exibe eles depois.

void soma_valor(int *a, int *b, int *c);

int main(){
    int um, dois, tres;

    printf("Digite um valor para a variavel 1: ");
    scanf("%d", &um);
    printf("Digite um valor para a variavel 2: ");
    scanf("%d", &dois);
    printf("Digite um valor para a variavel 3: ");
    scanf("%d", &tres);

    soma_valor(&um, &dois, &tres);
    printf("Variavel 1: %d \n", um);
    printf("Variavel 2: %d \n", dois);
    printf("Variavel 3: %d ", tres);

    return 0;
}

void soma_valor(int *a, int *b, int *c){
    *a = *a + 100;
    *b = *b + 100;
    *c = *c + 100;
}
