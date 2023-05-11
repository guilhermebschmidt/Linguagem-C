// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
// Programa que aloca dinamicamente dados em uma matriz, depois exibe a soma desses dados

int main(){

    int **p;
    int i, j, m, n, soma;

    printf("Quantas linhas a matriz vai ter: ");
    scanf("%d", &m);
    printf("Quantas colunas a matriz vai ter: ");
    scanf("%d", &n);

    p = (int**) calloc(m , sizeof(int*));
        for(i=0;i<m;i++){
            p[i] = (int*) calloc(n , sizeof(int));
            for(j=0;j<n;j++){
                printf("Matriz (%d,%d): ", i+1, j+1);
                scanf("%d", &p[i][j]);
            }
        }
    soma = 0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            soma = soma + p[i][j];
        }
    }
    printf("Soma: %d", soma);

    return 0;
}
