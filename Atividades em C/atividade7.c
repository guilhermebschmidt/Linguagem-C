//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Programa que calcula as vantagens de um salario, e depois suas deduções.

float salarioBruto, salarioFamilia, iNSS, iRPF, vantagens, deducoes;

// Funcao que calcula as vantagens
void calculoVantagens(float numeroHora, float salarioHora, float numeroFilho, float valorPorFilho) {
    salarioBruto = numeroHora * salarioHora;
    salarioFamilia = numeroFilho * valorPorFilho;
    vantagens = salarioBruto + salarioFamilia;
}
// Funcao que calcula as deducoes
void calculoDeducoes(float taxaIR){
    iNSS = salarioBruto * 0.08;
    iRPF = salarioBruto * taxaIR;
    deducoes = iNSS + iRPF;
}

int main()
{
float numeroHora, salarioHora, numeroFilho, valorPorFilho, taxaIR;

    // comandos para o usuario informar os dados para a funcao calcular
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &numeroHora);

    printf("Digite o salario por hora: ");
    scanf("%f", &salarioHora);

    printf("Digite o numero de filhos: ");
    scanf("%f", &numeroFilho);

    printf("Digite o valor por filho: ");
    scanf("%f", &valorPorFilho);

    printf("Digite a taxa IR: ");
    scanf("%f", &taxaIR);

    // exibicao dos dados calculados pelas funcoes
    calculoVantagens(numeroHora, salarioHora, numeroFilho, valorPorFilho);
    printf("Vantagens: %.2f\n", vantagens);
    calculoDeducoes(taxaIR);
    printf("Deducoes: %.2f\n", deducoes);
}
