#include <stdio.h>
#include <stdlib.h>
/*
Uma pré escola tem 5 alunos, crie uma estrutura que armazene nome, telefone de emergencia, idade, contato de emergencia;

Crie um vetor com 5 dessas estruturas

Crie uma função para ler as informações de UM aluno; chame a função 5 vezes.

Crie uma função que recebe como parâmetro o índice do aluno e escreva todos os dados na tela de maneira organizada.

As funções acima recebem o índice do aluno como parâmetro e alteram o array global que contém os alunos.
*/
	//globais
typedef struct{
	char nome[10];
	char telefone[15];
	int idade;
	char contato[15];
}alunos;
	
	alunos a[5];

//como o array � global nao precisa passar como parametro
void leitura(int i){
	printf("aluno %i:\n", i+1);
	printf("\n\tnome: %s", a[i].nome);
	printf("\n\tidade: %i", a[i].idade);
	printf("\n\ttelefone emergencial: %s \n\tcontato emergencial: %s", a[i].contato, a[i].telefone);
}
void registra(int x){
	printf("\n\n aluno %i", x+1);
	printf("\tnome: ");
	 gets(a[x].nome);
	printf("\n\tidade do aluno: "); 
	 scanf("%i", &a[x].idade); getchar();
	printf("\n\ttelefone de emergencia: "); 
	 gets(a[x].telefone);
	printf("\n\tcontato de emergencia: "); 
	 gets(a[x].contato);
}
int main(int argc, char *argv[]) {
	int i;

	//registra alunos
	for(i = 0; i < 5;i ++){
		registra(i);
	}

	//le 
	for(i = 0; i < 5;i ++){
		leitura(i);
	}
	;
return 0;
}
