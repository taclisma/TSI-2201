#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main() {
	setlocale(LC_ALL,"");
	int lista[15] = {}, posicao, ocupados=0, opcao;
	char confirm;
	
/*	for(posicao = 0; posicao < 20; posicao ++){
		printf("Informe o c�digo da posi��o %d \n", posicao);
		scanf("%d", &lista[posicao]);
		while(lista[posicao] < 0){
			printf("Informe um valor acima de zero\n");
			scanf("%d", &lista[posicao]);
		}
		ocupados++;
	}
*/
do{
	printf("1 - Incluir novo elemento\n 2) Excluir elemento\n 3) Acessar posicao\n 4) Quantidade de elementos\n 5) Mostrar lista \n 6) Sair\n");	
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Informe a posicao que deseja incluir novo elemento\n");
			scanf("%d", &posicao);
		
			if(lista[posicao] > 0){
				printf("Posicao ja ocupada! Item sera movido para o final\n");
				posicao = ocupados + 1;
				printf("Informe o valor do novo elemento \n");
				scanf("%d", &lista[19]);
				while(lista[19] < 0){
					printf("Valor informado deve ser acima de 0\n");
					scanf("%d", &lista[19]);
				} 
			}else{
				printf("Informe o novo valor\n");
				scanf("%d", &lista[posicao]);
			}
			ocupados++;
			if(ocupados >= 20){
				ocupados = 20;
			}

		break;
		
		case 2:
			printf("Informe a posi��o que deseja excluir um elemento\n");
			scanf("%d", &posicao);
			
			if(lista[posicao] == 0){
				printf("Posi��o vazia! Informe nova posi��o\n");
				scanf("%d", &posicao);
				if(lista[posicao] == 0){
					printf("Posi��o vazia! Retornar para menu\n");
				}
			}
			else if(lista[posicao] > 0){
				if(lista[posicao+1] > 0){
					for(posicao; posicao < 20; posicao ++){
					lista[posicao] = lista[posicao+1];
					}
				}else{
						lista[posicao] = 0;
				}

				ocupados -= 1;
			}
				
			
		break;
		
		case 3:
			printf("Qual posi��o deseja acessar?\n");
			scanf("%d", &posicao);
			printf("Posi��o %d: %d\n", posicao, lista[posicao]);
		break;
		
		case 4:
			printf("%d Ocupados\n", ocupados);
		break;
	}
	
}while(opcao != 5);
	
	
	for(posicao = 0; posicao < 20; posicao ++){
	printf("%d\n", lista[posicao]);
	}
	
return 0;
}

