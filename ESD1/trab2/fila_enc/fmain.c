#include <stdio.h>
#include <stdlib.h>
#include "filaenc.h"

int main(){
	printf("\n");
	int num;
	char a[3] = "aa";
	char b[3] = "bb";
	char c[3] = "cc";
	char d[3] = "dd";


	tList *lista = (tList*) malloc(sizeof (tList));
	inicializar(lista);


	//checar se esta vazia
	num = vazia(lista);
	if (num == 0){
		printf("lista vazia\n");
	}
	//checar tamanho
	printf("\n");

	inserir(lista, d);
	inserir(lista, c);
	inserir(lista, b);
	inserir(lista, a);

	imprimeFila(lista);
	return 0;
}
