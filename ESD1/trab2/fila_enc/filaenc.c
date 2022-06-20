#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filaenc.h"

//strcmp (a e c = -1) (c e a = 1)

void copiaD(tno* novo, tno* aux){
    strcpy(novo->dado,aux->dado);
}

//retorna um ponteiro para null, criando uma lista vazia genérica
void inicializar(tList *l){
	l->first = NULL;
    l->last = NULL;
    l->size = 0;
}

//checa se o inicio da lista é nulo (ou seja, se esta vazia, os returns são para que ela aseja facilmente usada por outras funções)
int vazia(tList *f){
    if (f->first == NULL){
        return 0; // se esta vazia retorna 0
    } else {
        return 1; // se não retorna 1
    }
    
}

//tamanho da lista a partir do dado size na struct 
int tamanho(tList *f){
    int aux;
    aux = f->size; 
    return aux;
}

//inserir na lista por ordem alfabetica
// problema: so consigo inserir em ordem decrescente (quando o strcmp < 0)
//como "reapontar" o ponteiro auxiliar sem mudar a lista
int inserir(tList *li, char d[]){
    char c[3];
    int cmp;
    tno *novo;
    tno *aux;
    tno *aux2;

    //aloca memoria para um nó
    novo = (tno*) malloc(sizeof(tno));

    //se malloc teve sucesso
    if(novo!=NULL){
        
        strcpy(novo->dado,d); //nó alocado recebe valor
        
        if(vazia(li) == 0){//se a lista estiver vazia:
            li->first = novo; // o nó novo é o primeiro;
            li->last = novo;  // e tbm o ultimo; 
            novo->prev = NULL; // o anterior sera NULL;
            novo->prox = NULL; // e o prox também;
        
        } else { //se não estiver vazia, 
            aux = li->first; //coloca o valor do primeiro em um nó auxiliar,
            
            cmp = strcmp(novo->dado, aux->dado); // compara valores
            printf(" cmp = %i\n", cmp);
            //se a comparação der que o valor é maior que o primeiro, corre a lista até encontrar um valor que seja menor ou que o prox seja nulo;
            if (cmp > 0){
                // isso podia ser uma função separada
                while (strcmp(novo->dado, aux->dado) > 0){

                    //se o prox for nulo, o novo valor é agr o ultimo da lista
                    if(aux->prox = NULL){
                        novo->prev = aux;
                        aux->prox = novo;
                        li->last = novo;
                        li->size++;
                        //sai da funçao
                        return 1; 
                    } else {
                    //se não vai para o proximo nó
                    aux = aux2;
                    }
                } // ao fim do while, 

                //aux fica sendo o dado "maior" que o novo dado, entao salva-se o anterior em aux2
       //         aux2 = aux->prev;
                novo->prev = aux2;
                novo->prox = aux;
                aux->prev = novo;
                aux2->prox = novo;


            } else if (cmp < 0){
                li->first->prev = novo;
                novo->prox = li->first;
                li->first = novo;
            }
        }
        li->size++;
        //retorna 1 se tudo deu certo
        return 1;
    } else {
        //retorna 0 se tudo deu errado :(
        return 0;
    }
}

void imprimeFila(tList *l){
    int i;
    tno *aux;
    aux = l->first;

    if(vazia(l)!=0){
        for(i = 0; i < l->size; i++){
            printf("Elemento %i: \n\t%s\n", (i+1), aux->dado);
            aux = aux->prox;
        }
    } else {
        printf("lista vazia\n");
    }
}

int remover(tList *l, char rem[]){ 

}