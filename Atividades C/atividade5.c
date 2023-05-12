// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// Programa para o usuario escrever duas strings e uma letra para contar e ver quantas vezes aparece nas strings
        char string1[20];
        char string2[20];
        char letra;
        int x, cont1 = 0, cont2 = 0;

        // comando para usuario escrever as duas strings e uma letra para contagem

        printf("Escreva a primeira palavra: ");
        gets(string1);
        printf("Escreva a segunda palavra: ");
        gets(string2);
        printf("Digite uma letra para contar nas palavras: ");
        scanf("%c", &letra);

        // contador de quantas vezes aparece a letra na string
        for (x = 0; x < strlen(string1); x++){
            if(string1[x] == letra){
                cont1++;
            }
        }
        for (x = 0; x < strlen(string2); x++){
            if(string2[x] == letra){
                cont2++;
            }
        }
        // comando para ler as duas strings e ver se elas tem uma forma parecida entre si

        if(strstr(string1, string2)) {
            printf("\n\n A Palavra \%s\" esta na string \%s\"", string2, string1);
        }

        else {
            printf("\n A Palavra \%s\" esta na string \%s\"", string1, string2);
        }

        printf("\nA letra \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
        printf(" e %d vez(es) na string 2", cont2);
        printf("\n\n\n");

    return 0;
}
