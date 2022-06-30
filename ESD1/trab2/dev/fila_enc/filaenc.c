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

	int resultadoCmp;
    //printf("sizeof lista %d", sizeof(lista));
    //printf("sizeof contato %d", sizeof(contato));

	novo = (lista) malloc(sizeof (proximoAnterior));

	// novo->proximo = NULL; // por que esse novo->proximo = null??
	strcpy(novo->dado.nome, dado.nome);
	strcpy(novo->dado.email, dado.email);
	strcpy(novo->dado.cpf, dado.cpf);

    //se a lista ta vazia, novo = inicio
	if(vazia(InFim)){
		InFim->inicio = novo;
        InFim->fim = novo;
		novo->anterior = NULL;
		novo->proximo = NULL;

    //se nao estiver vazia
	}else{
		aux2 = InFim->inicio;
		resultadoCmp = strcmp(novo->dado.cpf, aux2->dado.cpf);
		printf("\n\n\tdado novo:%s dado aux:%s\n\n", novo->dado.cpf, aux2->dado.cpf);
        printf("strcmp: %i", strcmp(novo->dado.cpf, aux2->dado.cpf));
	}
		

    return 0;

}

void imprimeFila(inicioFim *InFim){
    int cont;
    lista aux;
    aux = InFim->inicio;

        //printf("Elemento : \n\t%s\n \n\t%s\n \n\t%s\n", aux->dado.nome, aux->dado.email, aux->dado.cpf);
        //printf("aux: \n\t%s\n", aux);
        //printf("vazia(InFim)", vazia(InFim));

	//se a lista está vazia,
    if(vazia(InFim)){
    	printf("Lista vazia\n");
	
	//se não
    } else {
    	while(aux!=NULL){
    		cont++;
            printf("Elemento %i: \n\tnome: %s \n\temail: %s \n\tcpf: %s", cont, aux->dado.nome, aux->dado.email, aux->dado.cpf);
            aux = aux->proximo;
    	}
    }
}