//Cria um tipo de dado abstrato
typedef struct calculadora Calculadora;

// Cria uma nova calculadora
Calculadora *cria_calc();

// Libera a calculadora
void libera_calc(Calculadora *c);

// atribui os valores x e y a calculadora
void atribui_calc(Calculadora *c, float x, float y);

//operacao soma
float soma_calc(Calculadora *c);
//operacao subtracao
float sub_calc(Calculadora *c);
//operacao multiplicacao
float mult_calc(Calculadora *c);
//operacao divisao
float div_calc(Calculadora *c);

//acessa o ultimo resultado
float acessa_calc(Calculadora *c);
