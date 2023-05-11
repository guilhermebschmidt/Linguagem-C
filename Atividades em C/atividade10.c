//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Programa que coleta os dados de 5 funcionarios, por meio de um tipo de estrutura, depois reajusta o salario e exibe.

//Tipo de estrutura para armazenar os dados dos funcionarios
typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNC;

FUNC recebeDados();             //Função que coleta os dados dos funcionarios
void exibeDados(FUNC *f);       //Função que exibe os dados dos funcionarios
void reajuste(float *salario);  //Função que reajusta os salarios dos funcionarios em 10%
void rel_salario(FUNC *f);      //Função que exibe os novos salarios e os nomes dos funcionarios

int main(){
    int i, n = 5;
    FUNC f[5];

    for (int i = 0; i < n; i++){
       f[i] = recebeDados();
    }

    for (int i = 0; i < n; i++) {
        printf("\nFuncionario %d: ", i+1);
        exibeDados(&f[i]);
    }
    for(int i = 0; i < n; i++) {
        reajuste(&f[i].salario);
    }
    printf("\nNovos Salarios!! \n");

    rel_salario(f);

 return 0;
}

FUNC recebeDados(){
    FUNC f;
        printf("ID: ");
        scanf("%d", &f.ID);
        printf("Nome: ");
        getchar();
        fgets(f.nome, 30, stdin);
        printf("Idade: ");
        scanf("%d", &f.idade);
        printf("Salario: ");
        scanf("%f", &f.salario);
    return f;
};

void exibeDados(FUNC *f){
    printf("\nID: %d \nNome: %sIdade: %d \nSalario: %.2f\n", (*f).ID, (*f).nome, (*f).idade, (*f).salario);
};

void reajuste(float *salario) {
    *salario = *salario * 1.1;
};

void rel_salario(FUNC *f){
    int n = 5;
    for(int i = 0; i < n; i++){
        printf("\nNome: %s", f[i].nome);
        printf("Salario: %.2f\n", f[i].salario);
    }
};
