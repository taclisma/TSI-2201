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
	lista novo, aux2, aux = NULL;

	novo = (lista) malloc(sizeof (proximoAnterior));
	if(novo == NULL) return 0;

	strcpy(novo->dado.nome, dado.nome);
	strcpy(novo->dado.email, dado.email);
	strcpy(novo->dado.cpf, dado.cpf);

	///////############# ( inserir na lista vazia ) #############
    //se a lista ta vazia, novo = inicio
	if(vazia(InFim)){
		InFim->inicio = novo;
        InFim->fim = novo;
	}
	///////############# ( fim do inserir na lista vazia ) #############


	///////############# ( inserir na lista não-vazia ) #############
	else {
		//auxiliar recebe primeiro da lista
		aux2 = InFim->inicio;
		
        //printf("strcmp com null: %i", strcmp(novo->dado.cpf, NULL)); <- isso da falha de segmentação
		

		///////############# ( inserir na primeira posição ) #############
		/*
		**  se comparação com o primeiro for maior que 0,
		**  o novo recebe o primeiro da fila como proximo
		**  e se torna o novo inicio da lista
		*/
		if(strcmp(novo->dado.cpf, aux2->dado.cpf) < 0){
			novo->proximo = aux2;
			aux2->anterior = novo;
			InFim->inicio = novo;
		///////############# ( fim inserir na primeira posição ) #############

		
		///////############# ( inserir depois da primeira posição ) #############
		//se comparação com o primeiro for menor que 0, podem ocorrer duas coisas:
		} else {
			///////####### ( loop de comparação para ordenar CPF alfabeticamente ) #######
				printf("\nordenando lista...\n");
			//  enquanto a comparação entre o novo cpf e o cpf salvo no auxiliar for maior que 0:
			while (strcmp(novo->dado.cpf, aux2->dado.cpf) > 0){

				//  se a lista continuar (prox não é null) segue para o proximo e compara novamente
				if(aux2->proximo){
					aux2 = aux2->proximo;
					//  volta pro loop

				//se chega ao fim da lista, novo é colocado como ultimo elemento (e quebra loop)
				} else {
					printf("fim lista");
					InFim->fim = novo;
					break;
				}
			}
			///////############# ( fim do loop de comparação de CPF ) #############
			
			if(strcmp(novo->dado.cpf, aux2->dado.cpf) == 0){
				printf("cpf já cadastrado");
				return 1;
			}

		///////############# ( inserir no meio ) #############
			//  compara novo com fim da fila:
			if(strcmp(InFim->fim->dado.cpf, novo->dado.cpf) != 0){
				//  se novo não for o fim da fila, 
				aux = aux2->anterior;		//  aux SALVA O ANTERIOR a aux2
				aux2->anterior = novo;		//  aux2 anterior recebe novo dado
				novo->proximo = aux2;		//  o novo receve aux2 como proximo
				novo->anterior = aux;		//  e aux como anterior
				aux->proximo = novo;		//  e aux recebe o novo como proximo;
		///////############# ( fim do inserir no meio ) #############


		///////############# ( inserir no fim ) #############
			} else {
				aux2->proximo = novo;		// aux2 proximo recebe o novo
				novo->anterior = aux2;		// e novo recebe aux2 como anterior;
			}
		///////############# ( fim do inserir no fim ) #############


		}
		///////############# ( fim inserir depois da primeira posição ) #############

	} 
	///////############# ( fim do inserir na lista não vazia) #############
		

    return 0;

}

void imprimeFila(inicioFim *InFim){
    int cont = 1;
    lista aux;
    aux = InFim->inicio;

	//se a lista está vazia,
    if(vazia(InFim)){
    	printf("Lista vazia\n");
	
	//se não
    } else {
    	while(aux!=NULL){
            printf("Elemento %i: \n\tnome: %s \n\temail: %s \n\tcpf: %s\n", cont, aux->dado.nome, aux->dado.email, aux->dado.cpf);
    		cont++;
			// if(aux->anterior) printf("\nanterior: %s\n", aux->anterior->dado.cpf);
			// if(aux->proximo) printf("\nproximo: %s", aux->proximo->dado.cpf);
			// printf("\n////////////////////////////////////\n");
            aux = aux->proximo;
    	}

		//printf("primeiro elemento: %s\n", InFim->inicio->dado.cpf);
		//printf("ultimo elemento: %s", InFim->fim->dado.cpf);
	cont = 1;
    }
}

int remover(inicioFim *InFim, int pos){
    int cont;
    lista aux, aux2, aux3 = NULL;
    aux = InFim->inicio;

	//se a lista está vazia,
    if(vazia(InFim)){
    	printf("Lista vazia\n");
	return 1;
	//se não
    } else {
		for(cont = 1; cont < pos; cont++){
			if(aux->proximo && (pos-cont) >= 1) aux = aux->proximo;

			else {
			printf("sem elemento nessa posição."); 
			return 1;
			}
		}
		aux;
		printf("\naux: %s", aux->dado.cpf);

		if(InFim->inicio == InFim->fim) { printf("unico elementos"); InFim->fim = InFim->inicio = NULL;  free(aux); return 0;}

		if(aux->anterior){
			aux->anterior->proximo = aux->proximo;
		} else {
			InFim->inicio = InFim->inicio->proximo;
		}

		if(aux->proximo){
			aux->proximo->anterior = aux->anterior;
		} else {
			InFim->fim = InFim->fim->anterior;
		}
		
		free(aux);
		return 0;
    }
}

int consultar(inicioFim *InFim, int pos){
	int cont = 1;
	lista aux;
	aux = InFim->inicio;


    if(vazia(InFim)){
    	printf("Lista vazia\n");
	
	//se não
    } else {
		//  qualquer numero (>= 0) tbm printa a primeira posição
		for(cont = 1; cont < pos; cont++){
			if(aux->proximo && (pos-cont) >= 1) aux = aux->proximo;

			else {
			printf("sem elemento nessa posição."); 
			return 1;
			}
		}
		printf("Elemento %i: \n\tnome: %s \n\temail: %s \n\tcpf: %s\n", cont, aux->dado.nome, aux->dado.email, aux->dado.cpf);
	cont = 1;
	}
}