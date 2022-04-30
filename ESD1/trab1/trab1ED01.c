#include <stdio.h>
#include <locale.h>
#include <string.h> 

#define MAX 15

// pra passar vetor como ponteiro so precisa colocar o nome do vetor mostrar void mostrar(int lista, int c);

int main() {
	setlocale(LC_ALL,"");
	int lista[MAX] = {NULL}, posicao=0, ocupados=0, opcao;
	char confirm;	
	int aux, prox, i;
    
	do{

	    printf("\n 1) Incluir novo elemento\n 2) Excluir elemento\n 3) Acessar posicao\n 4) Quantidade de elementos\n 5) Mostrar lista \n 6) Sair\n");	
		scanf("%d", &opcao);

	    switch (opcao){
		    case 1:
	                
		        printf("Informe a posicao de 0 a 14 que deseja incluir novo elemento\n");
				scanf("%d", &posicao);

				if (posicao > 14 && posicao < 0){
					printf("posição invalida");getchar();
					break;
				}
				
	
		        // se > que ocupados, puxar para (ocupados+1)
		        // se < que ocupados, empurrar prox elementos (for loop)
		        
				// se a posição estiver vazia
		        if(lista[posicao] == NULL){
					printf("Informe o valor\n");
					// de acordo com item b do enunciado, inserção em lugar desocupado vai para a ultima posiçao ocupada
					// se a lista estiver completamente vazia, vai obrigatoriamente para a posição 0 e incrementa ocupados.
					//if(ocupados == 0){
						scanf("%d", &lista[ocupados]);
						ocupados++;
					//se não, vai para a proxima posição e incrementa ocupados. 
					// } else {
					// 	scanf("%d", &lista[ocupados+1]); 
					// 	ocupados++;}
				}

				//se a posição estiver ocupada
				else if(lista[posicao] != NULL){
					printf("Posi��o j� ocupada! os proximos elementos serão movidos\n");
					printf("\nInforme o novo valor: ");
						scanf("%d", &aux);
				//
					for(i = posicao; i <= ocupados+1; i++){
						// salva o que esta na posiçao, coloca o novo valor no lugar, coloca o salvo como prox valor
						//a ser adicionado no espaço seguinte até que i = (ocupados+1)
						prox = lista[i];
						lista[i] = aux;
						aux = prox;
					}
					ocupados++;
				}
				//
	                    
	    	break;
	    	
	    	case 2:
	    		printf("Informe a posi��o que deseja excluir um elemento\n");
				scanf("%d", &posicao);
			
				if(lista[posicao] == NULL){
					printf("Posi��o vazia! \n");
				} else {
					for(i = posicao; i <= ocupados+1; i++){
						// salva o que esta na posiçao, coloca o novo valor no lugar, coloca o salvo como prox valor
						//a ser adicionado no espaço seguinte até que i = (ocupados+1)
						prox = lista[i+1];
						lista[i] = prox;
					}
					ocupados--;
				}
			
	    	break;
	    	
	    	case 3:
				printf("Informe a posi��o que deseja acesssar\n");
				scanf("%d", &posicao);
				printf("\n\tPosi��o: %d \n\tElemento: %d", posicao, lista[posicao]);
			break;
			
			case 4:
				printf("\n\tQuantidade de elementos ocupados: %d", ocupados);
			break;
			
		    case 5:
		    	printf("%d", lista[ocupados]);
		        printf("lista:\n");
		        printf("\n\t Posi��o\t");
		        for(i=0; i < MAX; i++){
					printf("\t%d", i);
					printf(" | ");
				}
				printf("\n\t Elemento\t");
		        for(i=0; i < MAX; i++){
					if(lista[i] == NULL){
						printf("\tx");
					} else {
						printf("\t%d", lista[i]);
					}
					printf(" | ");
				}
		    break;
	    
		    default:
				printf("\nOp��o inv�lida");
			break;
		}
	}while(opcao != 6);
}
