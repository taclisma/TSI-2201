/* 
 * File:   FilaEncadeada.h
 * Author: okuyama
 *
 */

#ifndef FILAENCADEADA_H
#define	FILAENCADEADA_H
#define LISTA_VAZIA 0

typedef struct {
    int valor;
    struct no *proximo;
} no;
typedef no *lista;

typedef struct {
    lista inicio;
    lista fim;
} fila;

void inicializa(fila *f);

int vazia(fila *f);

void libera_fila(fila *f);

int remover(fila *f);

void insere(fila *f, int val);

int tamanho(fila *f);

#endif	/* FILAENCADEADA_H */

