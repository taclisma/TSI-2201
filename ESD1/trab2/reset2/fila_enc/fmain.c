#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filaenc.h"

int main(int argc, char** argv)
{
	char nome[100], email[100], cpf[12];
	int i, opcao;
	inicioFim *InFim = (inicioFim*) malloc(sizeof (inicioFim));

	contato pessoa;
				strcpy(pessoa.nome, "maria");
				strcpy(pessoa.email, "maria@email.com");
				strcpy(pessoa.cpf, "123");
	contato pessoa2;
				strcpy(pessoa2.nome, "mario");
				strcpy(pessoa2.email, "mario@email.com");
				strcpy(pessoa2.cpf, "234");
	proximoAnterior no;
	
	inicializar(InFim);
	do{
		printf("\n1 - Inserir");
		printf("\n2 - Remover");
		printf("\n3 - Consultar");
		printf("\n4 - Listar");
		printf("\n5 - Sair \n==>");

		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Informe o nome\n");
				//scanf(" %[^\n]s", pessoa.nome);
				scanf(" %s", pessoa.nome);
				printf("Informe o e-mail\n");
				scanf("%s", pessoa.email);
				printf("Informe o cpf\n");
				scanf("%s", pessoa.cpf);
				inserir(InFim, pessoa);
			break;
				
			case 2: inserir(InFim,pessoa);
			break;
			case 3: inserir(InFim,pessoa2);
			break;
			case 4:
				imprimeFila(InFim);
				break;
			default:
				break;
		}		
	}while(opcao!=5);
	
	
	return 0;
}