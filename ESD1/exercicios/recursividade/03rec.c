#include <stdio.h>
#define TAM 8
void imprimeVetor(int vet[]){
    int i;
    printf("vetor: ");
    for(i=0; i<TAM; i++) printf("%d ",vet[i]);
    printf("\n");
}
void deslocarD(int vet[],int indice, int elementos){
    printf("\nChamada: deslocarD(vet, %d, %d)\n",indice,elementos);
    if(elementos==0) return; //fazer nada
    if(elementos+indice>TAM -1) return; //fazer nada, ultrapassou limite
        else{
            if(elementos==1){
                vet[indice+1]=vet[indice];
            }
            imprimeVetor(vet);
            deslocarD(vet,indice+1, elementos -1);
            deslocarD(vet,indice,elementos-1);
            printf("\n");
        }
}
int main(){
   int vetor[]={1,2,3,5,6,7,0,0};
    imprimeVetor(vetor);
    deslocarD(vetor,3,2);
}

