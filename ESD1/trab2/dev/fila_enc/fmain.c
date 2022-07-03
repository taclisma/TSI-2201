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
				scanf(" %[^\n]s", pessoa.nome);
				printf("Informe o e-mail\n");
				scanf("%s", pessoa.email);
				printf("Informe o cpf\n");
				scanf("%s", pessoa.cpf);
				inserir(InFim, pessoa);
			break;
				
			case 2:
				printf("Informe a posição para remover: \n");
				scanf("%i", &i);
				gets();
				remover(InFim, i);
			break;
			
			case 3:
				printf("Informe a posição para consultar: \n");
				scanf("%i", &i);
				gets();
				consultar(InFim, i);
			break;

			case 4:
				imprimeFila(InFim);
			break;
			
			case 5:
				//sair
			break;

			default:
				printf("\nopção invalida\n");
			break;
		}		
	}while(opcao!=5);
	
	liberaLista(InFim);
	
	return 0;
}