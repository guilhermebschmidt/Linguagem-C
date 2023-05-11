//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Programa que exibe os endereços da memoria de um ponteiro.

int main(){

    float vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float *p_vet;
    p_vet = &vet[10];

    for(int i = 0; i < 10; i++){
        printf("Posicao %d: %x\n", i, &p_vet[i]);
    }
    return 0;
}
