#include <stdio.h>
#include <stdlib.h>
#include "filaenc.h"

//função teste para ver se arquivos estão sendo importados 
// int soma(int a, int b){
    // return a+b;
}

// typedef struct{
//         tno* first;
//         tno* last;
//         int size;
// }tList;

//retorna um ponteiro para null, criando uma lista vazia genérica
void inicializar(tList *l){
	l->first = NULL;
    l->last = NULL;
    l->size = 0;
}

//checa se o inicio da lista é nulo (ou seja, se esta vazia, os returns são para que ela aseja facilmente usada por outras funções)
int vazia(tList *f){
    if (f->first == NULL){
        return 1; // se esta vazia retorna 1
    } else {
        return 0; // se não retorna 0
    }
    
}

//tamanho da lista a partir do dado size na struct 
int tamanho(tList *f){
    int aux;
    aux = f->size; 
    return aux;
}

