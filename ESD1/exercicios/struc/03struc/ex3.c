#include <stdio.h>
#include <stdlib.h>

#define NUM 2
/*  Exercício 3

    *Crie uma estrutura que armazene o nome de um aluno, numero de matricula, 4 notas e faltas.
    *Crie um vetor para armazenar 5 alunos.
    *Crie uma função para ler os dados de um aluno.
    *Crie uma função para escrever na tela os dados de um aluno
    *Crie uma função que retorne a média do aluno
    Crie uma função que escreva a situação do aluno
    
    As funções acima recebem o índice do aluno como parâmetro e alteram o array global que contém os alunos.
*/

//declara estrutura alunos
typedef struct {
    char nome[10];
    int matricula;
    float notas[4];
    int faltas;
}dadosAluno;

//declara vetor de alunos
dadosAluno aluno[NUM];

//funçao para registrar info de alunos
void registro(int x){
	printf("\n aluno %i", x+1);
	printf("\n\tnome: ");
	 gets(aluno[x].nome);
	printf("\tmatricula: "); 
	 scanf("%i", &aluno[x].matricula); getchar();

    //loop para registrar notas
	printf("\n\tnotas: "); 
    for(int i = 0; i < 4; i++){
        printf("\n\tnota %i: ", i+1);
	    scanf("%f", &aluno[x].notas[i]); getchar();
    }

	printf("\n\tfaltas: ");
	 scanf("%i", &aluno[x].faltas); getchar();
}

void leitura(int x){
	printf("\n aluno %i", x+1);
	printf("\n\tnome: %s", aluno[x].nome);
	printf("\n\tmatricula: %i", aluno[x].matricula);

    //loop para mostrar notas
	printf("\n\tnotas: \n"); 
    for(int i = 0; i < 4; i++){
        printf("\t\tnota %i: \n", i+1);
	    printf("\t\t%.2f\n", aluno[x].notas[i]);
    }

	printf("\n\tfaltas: %i \n\n", aluno[x].faltas);
}

float media(int indice){
    float med = 0;
    int j;

    for(j = 0;j<4;j++){
        med += aluno[indice].notas[j];
    }
    
    //med = (med/4);
    return med/4;
}

const char* situacao(int indice){
    if (media(indice) >= 7){
        return "aprovado";
    } else {
        return "reprovado";
    }
}

int main(int argc, char const *argv[]){
    int i, m;

    for(i = 0; i<NUM; i++){
        registro(i);
    }

    // menu para escolher entre ver aluno, ver media e ver situaçao
    do{
        /* inicio menu, scan var m */
        printf("\n\n1 - ver aluno \n2 - ver media de aluno \n3 - situação aluno \noutro - sair \n");

        scanf("%i", &m);
        printf("\n");
        switch (m){
        case 1:
            printf("escolha o aluno: \n");
            /* ver aluno */
            scanf("%i", &i); getchar();
            leitura(i-1);
        break;
        
        case 2:
            /* ver media */
            scanf("%i", &i); getchar();
            printf("%.2f", media(i-1));
        break;

        case 3:
            scanf("%i", &i); getchar();
            printf("%s", situacao(i-1));
            
        break;

        default:
        break;
        }
    } while (m<4 && m>0);
    return 0;
}
