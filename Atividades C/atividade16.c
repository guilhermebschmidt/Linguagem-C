//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
// Programa que aloca dados dinamicamente e exibe os numeros impares positivos de 1 a 10.

int main(){

    int *p;
    p = (int*) calloc(10, sizeof(int));
    if(p==NULL){
        printf("Sem memoria!");
        exit(1);
    }
    for(int i=0; i<10; i++){
        p[i] = i * 2 + 1;
    }

    printf("Numeros impares positivos!\n");
    for(int i=0; i<10; i++){
        printf("Posicao p[%d] = %d\n", i, p[i]);
    }
    free(p);
    return 0;
}
