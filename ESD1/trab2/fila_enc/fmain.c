#include <stdio.h>
#include <stdlib.h>
#include "filaenc.h"

int main(){
	printf("\n");
	int num;

	tList *lista = (tList*) malloc(sizeof (tList));
	inicializar(lista);


	//checar se esta vazia
	num = vazia(lista);
	if (num != 0){
		printf("lista vazia\n");
	}
	//checar tamanho
	printf("%d \n",tamanho(lista));
	printf("\n");



	free (lista);
	return 0;
}
