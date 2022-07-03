#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "lista.c"
//#include "lista.h"

/*retorna 0 se forem iguais
retorna valor  positivo se
str1>str2
retorna valor negativo se
str1<str2*/


typedef struct{
	char nome[100];
	char email[100];
	char cpf[15];
} contato;

typedef struct{
		contato dado;
		struct no *proximo;
		struct no *anterior;
} proximoAnterior; /* tipo do nó */

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
	lista novo, aux2, aux;
	int resultadoCmp;
	novo = (lista) malloc(sizeof (proximoAnterior)); //lista == proximoAnterior == novo
	novo->proximo = NULL;
	strcpy(novo->dado.nome,dado.nome);
	strcpy(novo->dado.email,dado.email);
	strcpy(novo->dado.cpf,dado.cpf);
	if(vazia(InFim)){
		InFim->inicio = novo; //novo é lista que contem o dado
		InFim->fim = novo;
		printf("novo %s", novo->dado.nome);
	}else{
		//aux2 = InFim->inicio;
		//resultadoCmp = strcmp(novo->dado.cpf, aux2->dado.cpf);
		lista listaAtual = InFim->inicio;
		
		while(listaAtual->proximo != NULL){
			resultadoCmp = strcmp(novo->dado.cpf, listaAtual->dado.cpf);
			if(resultadoCmp < 0){
				
				if(listaAtual->anterior == 	NULL){
					novo->proximo = listaAtual;
					listaAtual->anterior = novo;			
					InFim->inicio = novo;

				}else{
					novo->proximo = listaAtual;
					aux = listaAtual->anterior;
					novo->anterior = aux;
					aux->proximo = novo;
					listaAtual->anterior = novo;		
					if(listaAtual->proximo == InFim->fim){
						InFim->fim->proximo = novo;
    					InFim->fim = novo;
					}
				}
			}else{
				InFim->fim->proximo = novo;
    			InFim->fim = novo;
			}
			listaAtual = listaAtual->proximo;
		}
	}
		/*printf("strcmp: %i", strcmp(novo->dado.cpf, aux2->dado.cpf));

		if(resultadoCmp < 0){//se o novo for menor que o aux2
			novo->proximo = aux2;
			aux2->anterior = novo;
		}
		else if(resultadoCmp > 0){//se o novo for maior que o aux2
			//do{
				aux2 = aux2->proximo;
				printf("aux 2 - %s\n", aux->dado.cpf);
				resultadoCmp = strcmp(novo->dado.cpf, aux2->dado.cpf);
				if(resultadoCmp < 0 || aux2->dado.nome == NULL){
					aux2 = aux2->anterior;
				//	break;
					
				}
		//	}while(!InFim->fim);
		}
	}
/*	}if(resultadoCmpr < 0){
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
           // return 1; 
        } else {
            aux = antigo;
        }
		novo->anterior = antigo;
        novo->proximo = aux;
        aux->anterior = novo;
        antigo->proximo = novo;	
	}*/

}


void imprimeFila(inicioFim *InFim){
    int cont;
    lista aux;
    aux = InFim->inicio;

        //printf("Elemento : \n\t%s\n \n\t%s\n \n\t%s\n", aux->dado.nome, aux->dado.email, aux->dado.cpf);
        //printf("aux: \n\t%s\n", aux);
        //printf("vazia(InFim)", vazia(InFim));

    if(vazia(InFim)){
    	printf("Lista vazia\n");
        
    } else {
    	while(aux!=NULL){
    		cont++;
    		//printf("\nanterior%s :", aux->dado.nome);
            printf("\nElemento %i: \n\t%s\n \n\t%s\n \n\t%s\n", cont, aux->dado.nome, aux->dado.email, aux->dado.cpf);
            aux = aux->proximo;
            //printf("\nproximo%s: ", aux->dado.nome);
    	}
    }
}

int main(int argc, char** argv)
{
	char nome[100], email[100], cpf[15];
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
				scanf(" %[^\n]s", &pessoa.nome);
				printf("Informe o e-mail\n");
				scanf("%s", &pessoa.email);
				printf("Informe o cpf\n");
				scanf("%s", &pessoa.cpf);
				inserir(InFim, pessoa);
				
			break;
			case 4:
				imprimeFila(&InFim);
				break;
			default:
				break;
		}		
	}while(opcao!=5);
	
	
	return 0;
}
//se novo for maior que todos ele tem que ir pro final da lista
//incrementar listaAtual;
