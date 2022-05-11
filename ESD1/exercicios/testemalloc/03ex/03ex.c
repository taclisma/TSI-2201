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
    char telefone[9];
    char celular[10];
    char endereco[120];
    char aniversario[6];
} contato;

void inserir(contato* ag){
    printf("\ndigite o nome: \n");
    gets(ag->nome);

    printf("\ndigite o telefone: \n");
    gets(ag->telefone);

    printf("\ndigite o celular: \n");
    gets(ag->celular);

    printf("\ndigite o endereco: \n");
    gets(ag->endereco);

    printf("\ndigite o aniversario: \n");
    gets(ag->aniversario);
}

void ver(contato* ag){
    
    printf("nome: %s \n", ag->nome);
    printf("telefone: %s \n", ag->telefone);
    printf("celular: %s \n", ag->celular);
    printf("endereco: %s \n", ag->endereco);
    printf("aniversario: %s \n", ag->aniversario);
}

int main (){
    int i, m, c=0;
    contato *agenda[100];

    do{
        printf("\nbem vindo a sua agenda, escolha uma opçao:\n");
        printf("1 - inserir\n2 - visualizar\n3 - sair\n");
        scanf("%i", &m);getchar();

        switch (m)
        {
        case 1:
            // inserir
            // pego agenda, typecast ponteiro para contato (contato*), faz malloc
            agenda[c] = (contato*)malloc(sizeof(contato));
            if (agenda[c] != 0){
                inserir(agenda[c]);
                c++;
            } else {
                printf("erro na alocação");
            }
        break;
            
        
        case 2:
            printf("qual dos %i contatos deseja visualizar?\n", c);
            scanf("%i",&i);getchar();
            if(i > c){
                printf("contato vazio\n");
            } else {
                ver(agenda[i-1]);
            }
        break;
        
        case 3:
        //sair
            for(i = 0; i<c; i++){
                free(agenda[i]);
            }
        break;
        
        default:
            printf("\nescolha uma opção valida\n");
        break;
        }


    } while (m != 3);
    
    //por que isso aqui da problema
    //warning: ‘free’ called on unallocated object ‘agenda’
    //resp: era só fazer um loop no sair pra poder liberar o espaço de cada espaço alocado

}
