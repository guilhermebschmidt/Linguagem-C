// Guilherme Bittencourt Schmidt IFSP
#include <stdio.h>
#include <stdlib.h>
// Programa que pede a quantidade de alunos de uma turma, depois insere duas notas de cada aluno, calcula a media e exibe elas

int main(){
    int i, n, cont;
    float soma;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &n);

    float *p;
    p = (float*) calloc(n, sizeof(float));
    if(p==NULL){
        printf("Sem memoria!");
        exit(1);
    }

    for(i = 0; i<n; i++){
        printf("Digite a nota do Aluno %d: ", i+1);
        scanf("%f", &p[i]);
        soma = soma + p[i];
        cont++;
    }

    for(int i = 0; i<n; i++){
        printf("Nota do aluno %d: %.2f\n", i+1, p[i]);
    }
    float media = 0;
    media = soma / n;
    printf("Media dos alunos: %.2f", media);

    free(p);
    return 0;
}
