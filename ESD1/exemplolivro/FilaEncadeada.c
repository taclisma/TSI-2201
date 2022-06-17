#include "FilaEncadeada.h"
#include <stdio.h>

void inicializa(fila *f) {
    f->fim = NULL;
    f->inicio = NULL;
}

int vazia(fila *f) {
    return (f->inicio == NULL);
}

void libera_fila(fila *f) {
    lista aux_A, aux_B;
    aux_A = f->inicio;
    while (aux_A != NULL) {
        aux_B = aux_A->proximo;
        free(aux_A);
        aux_A = aux_B;
    }
    free(f);
}

int remover(fila *f) {
    lista auxiliar;
    int retorno;
    if (!vazia(f)) {
        auxiliar = f->inicio;
        retorno = f->inicio->valor;
        f->inicio = f->inicio->proximo;
        free(auxiliar);
        if (f->inicio == NULL)
            f->fim = NULL;
        return retorno;
    } else
        return LISTA_VAZIA;
}

void insere(fila *f, int val) {
    lista auxiliar;
    auxiliar = (lista) malloc(sizeof (no));
    auxiliar->proximo = NULL;
    auxiliar->valor = val;
    if (vazia(f))
        f->inicio = auxiliar;
    else
        f->fim->proximo = auxiliar;
    f->fim = auxiliar;
}

int tamanho(fila *f) {
    int cont = 0;
    lista aux = f->inicio;
    while (aux != NULL) {
        cont++;
        aux = aux->proximo;
    }
    return cont;
}