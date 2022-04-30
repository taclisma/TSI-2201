#include <stdio.h>
#include <stdlib.h>

	typedef struct{
		char nome[20];
		char telefone[15];
		char celular[15];
		char endereco[30];
		char aniversario[6];
	} contato;

int main(int argc, char *argv[]) {


		contato agenda[3]; 
		int i;
		//la�o para inserir contatos
		for(i = 0; i<3; i++){
			printf("digite o nome: ");
			gets(agenda[i].nome);
			printf("digite o endere�o: ");
			gets(agenda[i].endereco);
			printf("digite o telefone: ");
			gets(agenda[i].telefone);
			printf("digite o celular: ");
			gets(agenda[i].celular);
			printf("digite o aniversario: (dd/mm)");
			gets(agenda[i].aniversario);
		}
		
		//visualiza contato
		i=0;
		
		while (i <= 2 && i >= 0){
			printf("\nqual contato de 1 a 3 voce quer visualizar?");
			scanf("%i", &i); getchar();
			i--;
			if (i <= 2 && i >= 0){
				printf("\tnome: %s", agenda[i].nome);
				printf("\n\tendere�o: %s", agenda[i].endereco);
				printf("\n\ttelefone: %s", agenda[i].telefone);
				printf("\n\tcelular: %s", agenda[i].celular);
				printf("\n\taniversario: %s", agenda[i].aniversario);
			}
		}
	return 0;
}
