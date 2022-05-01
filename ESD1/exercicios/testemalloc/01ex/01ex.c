#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
char nome[40];
char telefone[15];
} contato;

int main(int argc, char *argv[]){
  contato *teste;
  teste = (contato*)malloc(sizeof(contato));
  if(teste != 0){
    gets((*teste).nome);
    strcpy((*teste).telefone, "1234567");
    printf("Nome = %s\nTelefone =  %s\n",(*teste).nome,(*teste).telefone);
    free(teste);
  } else {
      printf("erro na alocação");
  }
}

