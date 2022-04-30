#include <stdio.h>
#include <locale.h>
#include <string.h> 

//////void mostrar(int *lista, int c);

int main() {
	setlocale(LC_ALL,"");
	int lista[15] = {}, posicao, ocupados=0, opcao, i;
	char confirm;	
    
    do{

    printf("1) Incluir novo elemento\n 2) Excluir elemento\n 3) Acessar posicao\n 4) Quantidade de elementos\n 5) Mostrar lista \n 6) Sair\n");	
	scanf("%d", &opcao);

    switch (opcao){
    case 1:
        int aux, prox;
        printf("Informe a posicao de 0 a 14 que deseja incluir novo elemento\n");
		scanf("%d", &posicao);

        // se > que ocupados, puxar para (ocupados+1)
        // se < que ocupados, empurrar prox elementos (for loop)

        if(ocupados >= 14){
            printf("lista cheia");
        } else {
                printf("Informe o novo valor\n");
				scanf("%d", &aux);

                          if (ocupados == 0){
                lista[ocupados] = aux;
                ocupados++;
                }
            // se posição é menor que numero de ocupados, precisa empurrar os prox numeros
            if(posicao <= ocupados) {

                // i recebe posiçao para so mexer na lista a partir dali, enquanto i for menor que ocupados, empurrar o numero na prox posição
                for(i = posicao; i <= ocupados+1; i++){
                    // salva o que esta na posiçao, coloca o novo valor no lugar, coloca o salvo como prox valor
                    //a ser adicionado no espaço seguinte até que i = (ocupados+1)
                    prox = lista[i];
                    lista[i] = aux;
                    aux = prox;
                }
                ocupados++;

            } else {
                if (ocupados == 0){
                lista[ocupados] = aux;
                ocupados++;
                }
                    
            }
             

        }

    break;
    
    case 5:
        printf("lista:/n");
        for(i=0; i < ocupados; i++){
        printf("%d", lista[i]);
        printf(", ");
        }
    break;
    
    default:
    break;
    }

    }while (opcao != 6);
    
}

/*
void mostrar(int *lista, int c){
    int i;
    for(i=0; i < c; i++){
        printf("%d", lista[i]);
        lista++;
    }
}
*/