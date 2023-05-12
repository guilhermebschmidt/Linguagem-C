//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Programa que exibe os endereços da memoria de um ponteiro.

int main(){
    int *um, *dois;

    printf("Digite um valor para a variavel 1: ");
    scanf("%d", &um);
    printf("Digite um valor para a variavel 2: ");
    scanf("%d", &dois);

    if (&um > &dois) {
        printf("A Variavel 1, com o valor: %d, tem o endereco maior: %d \n", um, &um);
        printf("A Variavel 2, com o valor: %d, tem o endereco menor: %d \n", dois, &dois);
    }
    else {
        printf("A Variavel 2, com o valor: %d, tem o endereco maior: %d \n", dois, &dois);
        printf("A Variavel 1, com o valor: %d, tem o endereco menor: %d \n", um, &um);
    }
    return 0;
}
