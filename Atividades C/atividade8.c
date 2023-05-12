//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Programa que calcula as vantagens do salario, e as deduções, com uso de Ponteiros.

// Funcao que calcula as vantagens
void calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float numeroHora, float salarioHora, float numeroFilho,
                      float valorPorFilho) {
    *salarioBruto = numeroHora * salarioHora;
    *salarioFamilia = numeroFilho * valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}
// Funcao que calcula as deducoes
void calculoDeducoes(float *iNSS, float *iRPF, float taxaIR, float *salarioBruto, float *deducoes){
    *iNSS = *salarioBruto * 0.08;
    *iRPF = *salarioBruto * taxaIR;
    *deducoes = *iNSS + *iRPF;
}

int main()
{
    float numeroHora, salarioHora, numeroFilho, valorPorFilho, taxaIR, salarioBruto, salarioFamilia, iNSS, iRPF, deducoes, vantagens;

    // comandos para o usuario informar os dados para a funcao
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &numeroHora);

    printf("Digite o salario por hora: ");
    scanf("%f", &salarioHora);

    printf("Digite o numero de filhos: ");
    scanf("%f", &numeroFilho);

    printf("Digite o valor por filho: ");
    scanf("%f", &valorPorFilho);

    printf("Digite a taxa do IR: ");
    scanf("%f", &taxaIR);

    // comandos para exibir os dados da funcao
    calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, numeroHora, salarioHora, numeroFilho, valorPorFilho);
    printf("Vantagens: %.2f\n", vantagens);
    calculoDeducoes(&iNSS, &iRPF, taxaIR, &salarioBruto, &deducoes);
    printf("Deducoes: %.2f\n", deducoes);
}
