// 1 - Elaborar programa que receba um valor inteiro positivo n e, que calcule 
//	   o somatórios dos números inteiros de 1 até n;
#include <stdio.h>

int sum(int n){
	if(n == 1) return 1;
	else return n + (sum(n-1));
}

int main(){
	
	printf("3: %d\n", sum(3));
	printf("1: %d\n", sum(1));
	printf("2: %d\n", sum(2));
	printf("5: %d\n", sum(5));
	
	return 0;
}
