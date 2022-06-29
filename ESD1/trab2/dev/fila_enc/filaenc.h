#include <stdio.h>
#include <stdlib.h>

typedef struct contato{
	char nome[100];
	char email[100];
	char cpf[12];
} contato;

typedef struct no{
		contato dado;
		struct no *proximo;
		struct no *anterior;
} proximoAnterior; /* tipo do n� */

typedef proximoAnterior *lista;

typedef struct {
    lista inicio;
    lista fim;
    //int tamanho;
} inicioFim;

void inicializar(inicioFim *InFim);

int vazia(inicioFim *InFim);

int inserir(inicioFim *InFim, contato dado);

void imprimeFila(inicioFim *InFim);


