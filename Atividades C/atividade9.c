//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Programa que coleta os dados de cinco funcionarios por meio de uma estrutura.

//Estrutura para criar e armazenar variaveis referente aos funcionarios
struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
};

int main(){
    struct funcionario F[5];
// Estrutura de repetição para colocar os dados dos cinco funcionarios
    for (int i = 0; i < 5; i++){
        printf("Digite os dados do funcionario %d: \n", i+1);
        printf("ID: ");
        scanf("%d", &F[i].ID);
        printf("Nome: ");
        getchar();
        fgets(F[i].nome, 30, stdin);
        printf("Idade: ");
        scanf("%d", &F[i].idade);
        printf("Salario: ");
        scanf("%f", &F[i].salario);
    }
// Estrutura de repetição para exibir os dados colocados
    for(int i = 0; i < 5; i++){
        printf("\nFuncionario %d: \nID: %d \nNome: %sIdade: %d \nSalario: %.2f", i+1, F[i].ID, F[i].nome, F[i].idade, F[i].salario);
    }
    return 0;
}

