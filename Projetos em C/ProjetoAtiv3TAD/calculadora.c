#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

struct calculadora{
    float x;
    float y;
    float r;
};

Calculadora *cria_calc(){
    Calculadora *c = (Calculadora*) malloc(sizeof(Calculadora));
    return c ? (c->x = 0, c->y = 0, c->r = 0, c) : NULL;
}
void libera_calc(Calculadora *c){
    free(c);
}

void atribui_calc(Calculadora *c, float x, float y){
    c->x = x;
    c->y = y;
}

float soma_calc(Calculadora *c){
    float resultado = 0;
    resultado = c->x + c->y;
    c->r = resultado;
    return c->r;
}

float sub_calc(Calculadora *c){
    float resultado = 0;
    resultado = c->x - c->y;
    c->r = resultado;
    return c->r;
}

float mult_calc(Calculadora *c){
    float resultado = 0;
    resultado = c->x * c->y;
    c->r = resultado;
    return c->r;
}

float div_calc(Calculadora *c){
    float resultado = 0;
    if (c->y == 0) {
        printf("Erro: Divisao por zero\n");
        return 0;
    } else {
        resultado = c->x / c->y;
        c->r = resultado;
        return c->r;
    }
}

float acessa_calc(Calculadora *c){
     return (c->r);
}
