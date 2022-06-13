#include <stdio.h>
#include "fila.h"

/*
Fila Duplamente Encadeada

1.CRIAR FILA DE N�MEROS INTEIROS

2. INSERIR 7 N�MEROS, 

3. REMOVER 2 N�MEROS, 

4. SOMAR E INSERIR O RESULTADO  NA FILA, 

REPITA 3 E 4 AT� QUE RESTE APENAS 1 ELEMENTO NA FILA.
*/

int main(){
	int i;
	int r, a ,b;
	tFila fila;
	inicializar(&fila);
	
	imprimeFila(&fila);
	
	for (i=0; i<7; i++){
		inserir(&fila, i);
		printf("inserindo%d", i);
		imprimeFila(&fila);
	}
	
	while(tamanho(&fila)>1){
		remover(&fila,&a);
		remover(&fila,&b);
		r = a+b;
		inserir(&fila,r);
		imprimeFila(&fila);
	}
	return 0;
}
