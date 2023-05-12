// Arquivo ponto.h
// Atribui novo nome para scruct ponto: Ponto
typedef struct ponto Ponto;

//Cria um novo ponto - somente ponteiro!!
Ponto *pto_cria(float x, float y);

//Libera um ponto
void pto_libera(Ponto *p);

//acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto *p, float *x, float *y);

//atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto *p, float x, float y);

//Calcula a distancia entre dois pontos
float pto_distancia(Ponto *p, Ponto *p2);
