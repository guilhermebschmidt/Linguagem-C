#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


void calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float numeroHora, float salarioHora, float numeroFilho,
                      float valorPorFilho) {
    *salarioBruto = numeroHora * salarioHora;
    *salarioFamilia = numeroFilho * valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float *iNSS, float *iRPF, float taxaIR, float *salarioBruto, float *deducoes){
    *iNSS = *salarioBruto * 0.08;
    *iRPF = *salarioBruto * taxaIR;
    *deducoes = *iNSS + *iRPF;
}
