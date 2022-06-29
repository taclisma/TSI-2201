#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filaenc.h"

//strcmp (a e c = -1) (c e a = 1)

int vazia(inicioFim *InFim){
	return (InFim->inicio == NULL);
}

void inicializar(inicioFim *InFim){
    InFim->inicio = NULL;
	InFim->fim = NULL;    
}

int inserir(inicioFim *InFim, contato dado){	
	lista novo, aux2, aux;

	int resultadoCmpr;
    //printf("sizeof lista %d", sizeof(lista));
    //printf("sizeof contato %d", sizeof(contato));

	novo = (lista) malloc(sizeof (proximoAnterior));

	novo->proximo = NULL;
	strcpy(novo->dado.nome, dado.nome);
	strcpy(novo->dado.email, dado.email);
	strcpy(novo->dado.cpf, dado.cpf);

    //se a lista ta vazia, novo = inicio
	if(vazia(InFim)){
		InFim->inicio = novo;
        InFim->fim = novo;
    
    //

    //se nao tive vazia
	}else{
		aux2 = InFim->inicio;

        printf("%i", strcmp(novo->dado.cpf, aux2->dado.cpf));
        // scanf("%d");
    }

    return 1;

	/* // cod antigo	
    resultadoCmpr = strcmp(novo->dado.cpf, aux2->dado.cpf);
	}if(resultadoCmpr < 0){
	//	do{
			InFim->inicio->anterior = novo;
        	novo->proximo = InFim->inicio;
        	InFim->inicio = novo;
        	resultadoCmpr = strcmp(novo->dado.cpf, aux2->dado.cpf);
//		}while(resultadoCmpr < 0);
		
	}
	else if(resultadoCmpr > 0){
		if(aux2->proximo = NULL){
          	novo->anterior = aux2;
          	aux2->proximo = novo;
        	InFim->fim = novo;
            return 1; 
        } else {
            aux = aux2;
        }
		novo->anterior = aux2;
        novo->proximo = aux;
        aux->anterior = novo;
        aux2->proximo = novo;	
	}*/

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