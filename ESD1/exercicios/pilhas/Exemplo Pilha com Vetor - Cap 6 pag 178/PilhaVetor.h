/* 
 * File:   PilhaVetor.h
 * Author: okuyama
 *
 */

#ifndef PILHAVETOR_H
#define	PILHAVETOR_H

//Define tamanho maximo da Pilha
#define N 10

typedef struct {
    int topo;
    int conteudo[N]; //N: maximo de elementos
} Pilha;

int peek(Pilha *p, int *status);
int pop(Pilha *p, int *status);
int push(Pilha *p, int valor);
int tamanho(Pilha *p);
void inicializa(Pilha *p);
int cheia(Pilha *p);

#endif	/* PILHAVETOR_H */

