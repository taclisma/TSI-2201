/*
Simular uma pilha
1- inserir números de 1 a 7
2- remover um número (a)
3-remover outro número (b)
4-Dividir a/b e empilhar o resultado
Repetir 2,3 e 4 até restar apenas um elemento na pilha
Mostrar passo-a-passo
*/

#include <stdlib.h>
#include <stdio.h>
#define N 3

/*/struct da pilha
typedef struct{
	int *topo;
	int num[N];
} pilha;*/


void push(int p[], int *t, int valor){
	if(*t == N){
		printf("pilha cheia");
	} else {
		(*t)++;
		p[*t] = valor;
	}
}

//esse no ex tb retorna um status
int pop(int p[], int *t){
	
}

int main (){
	//-1 = pilha vazia
	int topo = -1;
	int p[N] = {0};
	int valor = 1, i;
	
	printf("antes push %d\n", p[topo]);
	
	for(i = 0; i < N; i++){
	    push(p, &topo, valor);
	    valor++;
	    printf("push %d\n", p[topo]);
	}
	
return 0;
}
