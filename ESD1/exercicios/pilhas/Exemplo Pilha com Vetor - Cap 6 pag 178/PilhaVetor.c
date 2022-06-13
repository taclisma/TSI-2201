#include "PilhaVetor.h"
#include <stdio.h>

int peek(Pilha *p, int *status) {
    int valor;
    if (p->topo < 0) {//pilha vazia
        *status = 0; //indica erro
        printf("erro: pilha vazia\n");
        return 0;
    }
    valor = p->conteudo[p->topo];
    return valor;
}

int pop(Pilha *p, int *status) {
    int valor;
    if (p->topo < 0) {//pilha vazia
        *status = 0; //indica erro
        printf("erro: underflow\n");
        return 0;
    }
    valor = p->conteudo[p->topo];
    (p->topo)--;
    *status = 1; //deu certo
    return valor;
}

int push(Pilha *p, int valor) {
    if (p->topo >= N - 1) {
        printf("erro: overflow\n");
        return 0; //indica erro
    }
    (p->topo)++;
    p->conteudo[p->topo] = valor;
    return 1; //ok
}

int tamanho(Pilha *p) {
    Pilha aux;
    inicializa(&aux);
    int status;
    int cont = 0;
    while (!vazia(p)) {
        push(&aux, pop(p, &status));
        cont++;
    }
    while (!vazia(&aux)) {
        push(p, pop(&aux, &status));
    }
    return cont;
}

void inicializa(Pilha *p) {
    p->topo = -1;
}

int cheia(Pilha *p) {
    return (p->topo == N - 1);
}

int vazia(Pilha *p) {
    return (p->topo == -1);
}
