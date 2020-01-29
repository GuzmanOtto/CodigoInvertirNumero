#include <iostream>
#include <stdlib.h>
#include <conio.h>

void invertirNumero(int num);

int main(){
	
	int numero;
	
	do{
		printf("Ingrese un numero mayor a 0: ");
		scanf("%d",&numero);
	}while(numero<0);
	
	printf("Su numero invertido: ");
	invertirNumero(numero);
	return 0;
}

void invertirNumero(int num){
	printf("%d",num%10);
	if(num>10){
		invertirNumero(num/10);
	} 
}
