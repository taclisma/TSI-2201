#include <stdio.h>
#include <stdlib.h>
/*
Uma pré escola tem 5 alunos, crie uma estrutura que armazene nome, telefone de emergencia, idade, contato de emergencia;

Crie um vetor com 5 dessas estruturas

Crie uma função para ler as informações de UM aluno; chame a função 5 vezes.

Crie uma função que recebe como parâmetro o índice do aluno e escreva todos os dados na tela de maneira organizada.

As funções acima recebem o índice do aluno como parâmetro e alteram o array global que contém os alunos.

usar ponteiros
*/
	typedef struct{
		char nome[10];
		char telefone[15];
		int idade;
		char contato[15];
	}alunos;
	
void leitura(alunos vet[], int i){
	printf("\naluno %i:\n", i+1);
	printf("\tnome: %s", vet[i].nome);
	printf("\tidade: %i", vet[i].idade);
	printf("\n\ttelefone emergencial: %s \n\tcontato emergencial: %s\n", vet[i].contato, vet[i].telefone);
}
void registra(alunos vet[],int x){
	printf("\n\n aluno %i", x+1);
	printf("\tnome: ");
	 gets(vet[x].nome);
	printf("\n\tidade do aluno: "); 
	 scanf("%i", &vet[x].idade); getchar();
	printf("\n\ttelefone de emergencia: "); 
	 gets(vet[x].telefone);
	printf("\n\tcontato de emergencia: "); 
	 gets(vet[x].contato);
}

int main(int argc, char *argv[]) {
	
	alunos a[5];

	int i;

	//registra alunos
	for(i = 0; i < 5;i ++){
		registra(a, i);
	}

	//le 
	for(i = 0; i < 5;i ++){
		leitura(a, i);
	}
	;
return 0;
}
