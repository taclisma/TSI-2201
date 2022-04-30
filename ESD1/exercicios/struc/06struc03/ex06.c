#include <stdio.h>
#include <stdlib.h>

#define NUM 5
#define NUM_NOTAS 4
#define AP "aprovado"
#define RP "reprovado"

/*  Exercício 3

    *Crie uma estrutura que armazene o nome de um aluno, numero de matricula, 4 notas e faltas.
    *Crie um vetor para armazenar 5 alunos.
    *Crie uma função para ler os dados de um aluno.
    *Crie uma função para escrever na tela os dados de um aluno
    *Crie uma função que retorne a média do aluno
    Crie uma função que escreva a situação do aluno
    
    As funções acima recebem o índice do aluno como parâmetro e alteram o array global que contém os alunos.
	usar ponteiros
*/

//declara estrutura alunos
typedef struct {
    char nome[10];
    int matricula;
    float notas[4];
    int faltas;
}dadosAluno;

//funçao para registrar info de alunos
void registro(dadosAluno vet[], int x){
	int i;
	printf("\n aluno %i", x+1);
	printf("\n\tnome: ");
	 gets(vet[x].nome);
	printf("\tmatricula: "); 
	 scanf("%i", &vet[x].matricula); getchar();

    //loop para registrar notas
	printf("\n\tnotas: "); 
    for(i = 0; i < NUM_NOTAS; i++){
        printf("\n\tnota %i: ", i+1);
	    scanf("%f", &vet[x].notas[i]); getchar();
    }

	printf("\n\tfaltas: ");
	 scanf("%i", &vet[x].faltas); getchar();
}

void leitura(dadosAluno vet[], int x){
	int i;
	printf("\n aluno %i", x+1);
	printf("\n\tnome: %s", vet[x].nome);
	printf("\n\tmatricula: %i", vet[x].matricula);

    //loop para mostrar notas
	printf("\n\tnotas: \n"); 
    for(i = 0; i < 4; i++){
        printf("\t\tnota %i: \n", i+1);
	    printf("\t\t%.2f\n", vet[x].notas[i]);
    }

	printf("\n\tfaltas: %i \n\n", vet[x].faltas);
}

float media(dadosAluno vet[], int indice){
    float med = 0;
    int j;

    for(j = 0;j<NUM_NOTAS;j++){
        med += vet[indice].notas[j];
    }
    
    //med = (med/4);
    return med/NUM_NOTAS;
}


// dando pau

const char* situacao(dadosAluno vet[], int indice){
    float med = 0;
    int j;

    for(j = 0;j<NUM_NOTAS;j++){
        med += vet[indice].notas[j];
    }
    
    if (med >= 7){
        return AP;
    } else {
        return RP;
    }
}

int main(int argc, char const *argv[]){
	int i, m;

	//declara vetor de alunos
	dadosAluno aluno[NUM];
    
	for(i = 0; i<NUM; i++){
        registro(aluno, i);
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
            leitura(aluno, i-1);
        break;
        
        case 2:
            /* ver media */
            scanf("%i", &i); getchar();
            printf("%.2f", media(aluno, i-1));
        break;

        case 3:
            scanf("%i", &i); getchar();
            printf("%s", situacao(aluno, i-1));
            
        break;

        default:
        break;
        }
    } while (m<4 && m>0);
    return 0;
}
