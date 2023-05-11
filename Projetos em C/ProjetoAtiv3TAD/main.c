// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    int n;
    float x, y, r;
    Calculadora *c = cria_calc();
    do {
        printf("\t\t CALCULADORA \t\t\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &x);
        printf("Digite o segundo numero: ");
        scanf("%f", &y);
        atribui_calc(c, x, y);
        printf("Escolha uma Operacao\n 1 - Soma\t2 - Subtracao\t3 - Multiplicacao\t4 - Divisao\t5 - Acessar resultado anterior\t0 - Sair\n");
        scanf("%d", &n);
        switch(n) {
            case 0:
                libera_calc(c);
                printf("Ate mais tarde!!");
                exit(1);
            case 1:
                r = soma_calc(c);
                printf("Soma: %.2f\n", r);
                break;
            case 2:
                r = sub_calc(c);
                printf("Subtracao: %.2f\n", r);
                break;
            case 3:
                r = mult_calc(c);
                printf("Multiplicacao: %.2f\n", r);
                break;
            case 4:
                r = div_calc(c);
                printf("Divisao: %.2f\n", r);
                break;
            case 5:
                r = acessa_calc(c);
                printf("Resultado anterior: %f\n", r);
                break;
            default:
                printf("Opcao invalida!\n");
                continue;
        }
    } while(n != 0);

    return 0;
}
