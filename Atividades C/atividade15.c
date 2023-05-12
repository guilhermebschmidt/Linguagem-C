//Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Programa que insere dados de funcionarios em um arquivo binario, e exibe o terceiro funcionario.

typedef struct funcionario { // Tipo de estrutura para funcionarios de uma empresa
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUN;

int main() {
    FUN func[5];
    int n = 5;
    FILE *f; // Arquivo
    f = fopen("testaai.txt", "wb");  // Criando o arquivo binario
    if (f == NULL) {                  // Testanto se abriu
        printf("Erro na abertura!");
        exit(1);
    }

    printf("Digite os dados de cinco funcionarios:\n"); // Estrutura de repetição para o usuario digitar os dados dos funcionarios
    for (int i = 0; i < n; i++) {
        printf("\nFuncionario %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &func[i].ID);
        printf("Nome: ");
        getchar();
        fgets(func[i].nome, 30, stdin);
        printf("Idade: ");
        scanf("%d", &func[i].idade);
        printf("Salario: ");
        scanf("%f", &func[i].salario);
    }

    fwrite(func, sizeof(FUN), 5, f); // Passando os dados digitados para o arquivo binario
    fclose(f); // Fechando o arquivo

    f = fopen("testaai.txt", "rb");  // Abrindo o arquivo binario em modo de leitura
    if (f == NULL) {                 // Testando se abriu
        printf("Erro na abertura!");
        exit(1);
    }

    FUN funci;
    fseek(f, 2*sizeof(FUN), SEEK_SET);   // Indo para uma certa parte do arquivo
    fread(&funci, sizeof(FUN), 1, f);    // Lendo o bloco de bytes do arquivo

    printf("\nDados do Funcionario 3:\n");
    printf("ID:%d\nNome:%sIdade:%d\nSalario:%.2f\n", funci.ID, funci.nome, funci.idade, funci.salario);

    fclose(f); // Fechando o arquivo

    return 0;
}

