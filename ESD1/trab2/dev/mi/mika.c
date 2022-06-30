#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "lista.c"
//#include "lista.h"

typedef struct{
	char nome[100];
	char email[100];
	char cpf[15];
} contato;

typedef struct no{
		contato dado;
		struct no *proximo;
		struct no *anterior;
} proximoAnterior; /* tipo do n� */

typedef proximoAnterior *lista;

typedef struct {
    lista inicio;
    lista fim;
    //int tamanho;
} inicioFim;

void inicializar(inicioFim *InFim);

int vazia(inicioFim *InFim);

void inserir(inicioFim *InFim, contato dado);

void imprimeFila(inicioFim *InFim);

void inicializar(inicioFim *InFim){
    InFim->inicio = NULL;
	InFim->fim = NULL;    
}

int vazia(inicioFim *InFim){
	return (InFim->inicio == NULL);
}



void inserir(inicioFim *InFim, contato dado){	
	lista novo, antigo, aux;
	int resultadoCmpr;
	novo = (lista*) malloc(sizeof (proximoAnterior));
	novo->proximo = NULL;
	strcpy(novo->dado.nome,dado.nome);
	strcpy(novo->dado.email,dado.email);
	strcpy(novo->dado.cpf,dado.cpf);
	if(vazia(InFim)){
		InFim->inicio = novo;
	}else{
		InFim->fim = antigo;
		resultadoCmpr = strcmp(novo->dado.cpf, antigo->dado.cpf);
	}if(resultadoCmpr < 0){
	//	do{
			InFim->inicio->anterior = novo;
        	novo->proximo = InFim->inicio;
        	InFim->inicio = novo;
        	resultadoCmpr = strcmp(novo->dado.cpf, antigo->dado.cpf);
//		}while(resultadoCmpr < 0);
		
	}
	else if(resultadoCmpr > 0){
		if(antigo->proximo = NULL){
          	novo->anterior = antigo;
          	antigo->proximo = novo;
        	InFim->fim = novo;
            return 1; 
        } else {
            aux = antigo;
        }
		novo->anterior = antigo;
        novo->proximo = aux;
        aux->anterior = novo;
        antigo->proximo = novo;	
	}

}

void imprimeFila(inicioFim *InFim){
    int cont;
    lista aux;
    aux = InFim->inicio;

        //printf("Elemento : \n\t%s\n \n\t%s\n \n\t%s\n", aux->dado.nome, aux->dado.email, aux->dado.cpf);
        printf("aux: \n\t%s\n", aux);
        printf("vazia(InFim)", vazia(InFim));

    if(vazia(InFim)){
    	printf("Lista vazia\n");
        
    } else {
    	while(aux!=NULL){
    		cont++;
            printf("Elemento %i: \n\t%s\n \n\t%s\n \n\t%s\n", cont, aux->dado.nome, aux->dado.email, aux->dado.cpf);
            aux = aux->proximo;
    	}
    }
}

int main(int argc, char** argv)
{
	char nome, email, cpf;
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
				gets(pessoa.nome);
				printf("Informe o e-mail\n");
				scanf("%s", &pessoa.email);
				printf("Informe o cpf\n");
				scanf("%s", &pessoa.cpf);
				inserir(InFim, pessoa);
				
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
