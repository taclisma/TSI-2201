#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[10];
    int matricula[6];
    float notas[4];
    int faltas;
}dadosAluno;

dadosAluno aluno[5];

int main(int argc, char const *argv[]){
int x, i;

    scanf("%d", &x);
    for(int i = 0; i < 4; i++){
        printf("\n\tnota %i: ", i+1);
	    scanf("%f", aluno[x].notas[i]);
    }
}