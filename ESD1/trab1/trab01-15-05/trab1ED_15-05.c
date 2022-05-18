#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

//tamanho da lista
#define MAX 15


int main() {
	
	int lista[MAX] = {0}, posicao=0, ocupados=0, opcao;	
	int aux, prox, i;
    
	//loop do menu
	do{
		//imprime menu
	    printf("\n 1) Incluir novo elemento\n 2) Excluir elemento\n 3) Acessar posicao\n 4) Quantidade de elementos\n 5) Mostrar lista \n 6) Sair\n");	
		scanf("%d", &opcao);

	    switch (opcao){
		    case 1:
		    	
				//checa se lista esta cheia 
	            if(ocupados == MAX){
	            	printf("Lista cheia! Nao e possivel inserir mais elementos");
				}

				//pergunta posiçao que quer inserir
				else {
					printf("Informe a posicao de 0 a 14 que deseja incluir novo elemento\n");
					scanf("%d", &posicao);

					//valida posição escolhida
					if (posicao > 14 || posicao < 0){
						printf("Posicao invalida");getchar();
						break;
					}
				
		       		// se > que ocupados, puxar para (ocupados+1)
		        	// se < que ocupados, empurrar prox elementos (for loop)
		        
					if(posicao >= ocupados){
						printf("Informe o valor\n");
					// de acordo com item b do enunciado, insercao em lugar desocupado vai para a ultima posicao ocupada
					// se a lista estiver completamente vazia, vai obrigatoriamente para a posicao 0 e incrementa ocupados.
					scanf("%d", &lista[ocupados]);
					}
				
					if(posicao < ocupados) {
						printf("Posicao ja ocupada! Os proximos elementos serao movidos para as proximas posicoes\n");
						printf("\nInforme o novo valor: ");
						scanf("%d", &aux);

						for(i = posicao; i <= ocupados+1; i++){
						// salva o que esta na posicao, coloca o novo valor no lugar, coloca o valor salvo como prox valor
						// a ser adicionado no espaco seguinte ate que i = (ocupados+1), assim inserindo o novo valor e 
						// movendo os outros para a proxima posiçao
							prox = lista[i];
							lista[i] = aux;
							aux = prox;
						}
					}
					ocupados++;
				}	                  
	    	break;
	    	
	    	case 2:
			//excluir elemento
			// erro: 
	    		if(ocupados == 0){
	    			printf("Lista vazia! Nao e possivel excluir elementos");
				}
			//exclui elemento	
				else{
					printf("Informe a posicao que deseja excluir um elemento\n");
					scanf("%d", &posicao);
					
					//valida posicao
					if (posicao > 14 || posicao < 0){
						printf("Posicao invalida");getchar();
					break;
					}
					
					if(posicao >= ocupados){
						printf("Posicao vazia! \n");
					}	
					else{
						for(i = posicao; i <= ocupados+1; i++){
						// salva o que esta na proxima posiçao, coloca no indice atual
						prox = lista[i+1];
						lista[i] = prox;
						}
						ocupados--;
					}
				}
	    	break;
	    	
	    	case 3:
				printf("Informe a posicao que deseja acesssar\n");
				scanf("%d", &posicao);
				if (posicao < ocupados){
					printf("\n\tPosicao: %d \n\tElemento: %d", posicao, lista[posicao]);
				} else {
					printf("\tposição vazia");
				}
					
				
			break;
			
			case 4:
				printf("\n\tQuantidade de elementos ocupados: %d", ocupados);
			break;
			
		    case 5:
		    	printf("%d", lista[ocupados]);
		        
		        printf("\n  Posicao");
		        for(i=0; i < MAX; i++){
					printf("\t%5d", i);
					printf("|");
				}
				
				printf("\n  Elemento");
		        for(i=0; i < MAX; i++){
					if(i > ocupados-1){
						printf("\tXXXXX");
					} else {
						printf("\t%5d", lista[i]);
					}
					printf("|");
				}
		    break;
	    
	    	case 6:
	    		printf("Encerrando...");	
	    	break;
		    default:
				printf("\nOpcao invalida");
			break;
		}
	}while(opcao != 6);
}
