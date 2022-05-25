/*
Criar uma pilha encadeada em C

1- inserir contatos de 1 a 3
2- remover um Contato  e imprimir em tela os dados
3 - remover um Contato  e imprimir em tela os dados
4 -  empilhar um novo contato
5 - remover um Contato  e imprimir em tela os dados
6 - remover um Contato  e imprimir em tela os dados
7 – tentar remover contato (deve dar erro)
*/

#include <stdlib.h>
#include <stdio.h>

#define N 3

typedef struct{
	char nome[20];	
}contato;

typedef struct{
	contato c;
	struct no* prox;
}no;

//struct que aponta para o topo
typedef struct{
	no *topo;
} pilha;

//void inserir(p pilha, int j){}

int main (){
	int i;
    //inicializar pilha
	pilha p;
	// aponta topo para vazio
    p.topo = NULL;
    
    for(i = 0; i<3; i++){
    	p.topo = (no*)malloc(sizeof(no))
	}
    

}
