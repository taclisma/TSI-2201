#include <stdio.h>
#include <stdlib.h>

// typedef struct{
//     char nome[100];
//     char email[150];
//     char cpf[15];
// }contato;

typedef struct tno{
        // contato dado; 
        char dado[3]; //para teste
        struct tno* prox;//próximo nó 
        struct tno* prev;//próximo nó 
}tno; /* tipo do nó */

typedef struct tList{
        tno* first;
        tno* last;
        int size;
}tList;

//Criação da lista vazia //ok
void inicializar(tList *l);

//Verificar se a lista está vazia //ok
int vazia(tList *f);

//Obter o tamanho da lista
int tamanho(tList *f);

//Inserir um elemento na lista conforme ordem ALFABÉTICA
int inserir(tList *f, char d[]);

//Imprimir a lista
void imprimeFila(tList *f);

//Obter o valor do elemento de uma posição dada

//Obter a posição de elemento cujo valor é dado

//Remover um elemento de uma determinada posição
int remover(tList *l, char rem[]);


//int soma(int a, int b);