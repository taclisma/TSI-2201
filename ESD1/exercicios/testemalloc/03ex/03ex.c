/*Criar agenda:
Cada registro deve ter capacidade para armazenar o nome, telefone, celular, endereço e aniversário.
A agenda deve ser apresentar as opções: 
    1- inserir /
    2-visualizar os dados de uma posição (perguntar a posição) / 
    3-sair; (ficar em laço até o usuário escolher sair). 
Máximo de 100 registros. (criar vetor de 100 posições, cada posição é um ponteiro para contato).
Cada contato é criado dinamicamente ocupando as posições no vetor sequencialmente.
Não esqueça de liberar a memória no final do programa, antes de sair.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char nome[20];
    // char telefone[9];
    // char celular[10];
    // char endereço[120];
    // char aniversario[6];
} contato;

void inserir(contato* ag){
    printf("\ndigite o nome: \n");
    gets(ag->nome);
}

int main (){
    int i, m, c=0;
    contato *agenda[100];

    do{
        printf("bem vindo a sua agenda, escolha uma opçao:\n");
        printf("1 - inserir\n2 - visualizar\n3 - sair\n");
        scanf("%i", &m);getchar();

        switch (m)
        {
        case 1:
            // inserir
            // pego agenda, typecast ponteiro para contato (contato*), faz malloc
            agenda[c] = (contato*)malloc(sizeof(contato));
            inserir(agenda[c]);
            c++;
            break;
        
        case 2:
            // visualizar();
            break;
        
        case 3:
            break;
        
        default:
            printf("\nescolha uma opção valida\n");
            break;
        }


    } while (m != 3);
    
    free(agenda);
}