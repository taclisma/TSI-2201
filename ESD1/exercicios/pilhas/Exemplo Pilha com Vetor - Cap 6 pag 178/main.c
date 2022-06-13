/* 
 * File:   main.c
 * Author: okuyama
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "PilhaVetor.h"

/*
 * Programa para testar a Pilha
 */
int main(int argc, char** argv) {
    Pilha p; //cria a pilha
    int valor, status;
    inicializa(&p);
    int op = menu();
    while (op != 7) {
        switch (op) {
            case 1:
                printf("Digite valor: ");
                scanf("%d", &valor);
                if (push(&p, valor)) {
                    printf("Inserido com sucesso.\n");
                } else {
                    printf("Falha.\n");
                }
                break;
            case 2:
                valor = pop(&p, &status);
                if (status) {
                    printf("Valor removido: %d\n", valor);
                } else {
                    printf("Falha.\n");
                }
                break;
            case 3:
                valor = peek(&p, &status);
                if (status) {
                    printf("Valor do topo: %d\n", valor);
                } else {
                    printf("Falha.\n");
                }
                break;
            case 4:
                if (cheia(&p)) {
                    printf("Pilha Cheia\n\n");
                } else {
                    printf("Pilha Nao Cheia\n\n");
                }
                break;
            case 5:
                if (vazia(&p)) {
                    printf("Pilha Vazia\n\n");
                } else {
                    printf("Pilha Nao Vazia\n\n");
                }
                break;
            case 6:
                printf("Tamanho: %d itens \n", tamanho(&p));
                break;
            case 7:
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
    printf("\n1 - Inserir na Pilha (PUSH)\n");
    printf("2 - Remover da Pilha (POP)\n");
    printf("3 - Ver Topo da Pilha (PEEK)\n");
    printf("4 - Verificar se Cheia\n");
    printf("5 - Verificar se Vazia\n");
    printf("6 - Verificar Tamanho\n");
    printf("7 - Sair\n");
    scanf("%d", &valor);
    return valor;
}
