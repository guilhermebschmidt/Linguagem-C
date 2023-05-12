// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// Programa que recebe uma string do usuário, e conta quantos espaços em branco o texto possui e depois exibe o texto sem o espaço.
        char string1[100], string2[100];
        char letra = 32; // codigo da tabela ascii da letra espaco
        int x, y, cont1 = 0;

        // comando para usuario escrever a string1

        printf("Escreva uma pequena frase: ");
        gets(string1);

        // contador de quantas vezes aparece o espaco na string
        for (x = 0; x < strlen(string1); x++){
            if(string1[x] == letra){
                cont1++;
            }
        }
        printf("\nO espaco \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
        printf("\n\n");

        // codigo para tirar os espacos da string e exibir
        for(x = 0,y = 0; x < strlen(string1); y++) {
            if (string1[y] != letra) {
                string2[x++] = string1[y];
            }
        }
        printf("String sem espaco: %s", string2);

    return 0;
}
