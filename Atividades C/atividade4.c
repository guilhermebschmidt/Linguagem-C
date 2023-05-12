// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Programa que faz voce digitar os valores de linhas e colunas de uma matriz, depois soma o valor total de cada linha e coluna, depois mostra a matriz
        int mtrx[5][5], v[10];
        int i = 0, j = 0, soma = 0;

        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                printf("Digite os valores da matriz na posicao %d e %d: ", i + 1, j + 1);
                scanf("%d", &mtrx[i][j]);
            }
        }

        printf("\n\n Total por linha:\n\n");
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                soma = soma + mtrx[i][j];
            }
            printf("\nLinha %d : soma = %d\n", i + 1, soma);
            v[i] = soma;
            soma = 0;
        }

        soma = 0;
        printf("\nTotal por coluna:\n\n");
        for(j = 0; j < 5; j++){
            for(i = 0; i < 5; i++){
                soma = soma + mtrx[i][j];
            }
            printf("\nColuna %d : soma = %d\n", j + 1, soma);
            v[j + 5] = soma;
            soma = 0;
        }

        for(i = 0; i < 5; i++){
            printf("\nOs valores da soma da linha %d sao: %d\n", i + 1, v[i]);
            printf("\nOs valores da soma da coluna %d sao: %d\n", i + 1, v[i + 5]);
        }

        printf("\nMatriz:\n\n");
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                printf("( %d )", mtrx[i][j]);
            }
        printf("\n");
        }

    return 0;
}
