// GUILHERME BITTENCOURT SCHMIDT IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Programa que abre dois arquivos e coloca dados em um deles, depois transfere esses dados colocados para outro arquivo transformando
o texto em letras maisculas
*/
int main(){

    FILE *a1, *a2; // Declarando arquivo
    a1 = fopen("arq1.txt","r"); // Abertura de arquivos
    a2 = fopen("arq2.txt","w");
    if (a1==NULL || a2==NULL){ // Verificando se o arquivo existe
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(a1);
    while (c != EOF){ // Estrutura de repeticao para mostrar o conteudo do arq1 e transformar em letra maiuscula no arq2
        printf("%c", c);
        fputc(toupper(c), a2);
        c = fgetc(a1);
    }
    printf("\n\n");

    fclose(a1); // Fechando o arq1 que não é mais necessario
    fclose(a2); // Fechando o arq2 para abrir em modo leitura no proximo codigo

    a2 = fopen("arq2.txt", "r"); // Abrindo arq2 em modo leitura
    char b = fgetc(a2);
    while (b != EOF){  // Estrutura de repeticao para exibir o arq2 com letras maiusculas
        printf("%c", b);
        b = fgetc(a2);
    }
    printf("\n\n\n");

    fclose(a2); // Fechando o arq2

    return 0;
}
