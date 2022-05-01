//2 - Elaborar programa que receba base e potência 
//    (inteiros positivos) e calcule o valor resultante.
#include <stdio.h>

int pot(int b, int e){
	if(e == 0) return 1;
	else if(e == 1) return b;
	else return b*(pot(b,e-1));
}

int main(){
	
	printf("0 elevado a 0: %d\n", pot(0,0));
	printf("1 elevado a 1: %d\n", pot(1,1));
	printf("2 elevado a 3: %d\n", pot(2,3));
	printf("3 elevado a 3: %d\n", pot(3,3));
	printf("5 elevado a 2: %d\n", pot(5,2));
	return 0;
}
