/* 
 * File:   main.c
 * Author: okuyama
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "FilaEncadeada.h"

/*
 *Programa para testar a Fila 
 */
int main(int argc, char** argv) {
    fila *f = (fila*) malloc(sizeof (fila));
    int valor;
    inicializa(f);
    int op = menu();
    while (op != 6) {
        switch (op) {
            case 1:
                printf("Digite valor: ");
                scanf("%d", &valor);
                insere(f, valor);
                break;
            case 2:
                if (!vazia(f)) {
                    valor = remover(f);
                    printf("Valor removido: %d\n", valor);
                } else {
                    printf("Erro: Fila Vazia.\n");
                }
                break;
            case 3:
                if (vazia(f)) {
                    printf("Fila Vazia\n\n");
                } else {
                    printf("Fila Nao Vazia\n\n");
                }
                break;
            case 4:
                printf("Tamanho: %d itens \n", tamanho(f));
                break;
            case 5:
                libera_fila(f);
                printf("A fila foi desalocada. \n");
                //Apos desalocar a fila, este programa teste nao 
                //pode mais manipular corretamente a fila
                break;
            case 6:
                break;
            default:
                printf("Opcao Invalida!\n");
        }
        op = menu();
    }

    return (EXIT_SUCCESS);
}

int menu() {
    int valor;
    printf("\n1 - Inserir na Fila\n");
    printf("2 - Remover da Fila\n");
    printf("3 - Verificar se Vazia\n");
    printf("4 - Verificar Tamanho\n");
    printf("5 - Libera Fila\n");
    printf("6 - Sair\n");
    scanf("%d", &valor);
    return valor;
}
