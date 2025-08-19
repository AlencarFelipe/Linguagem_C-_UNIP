// Calculo da area
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	
	
	//cria variaveis
	int area,lado;
	
	
	//entra com o valor do lado do quadrado
	printf("Digite um valor para o lado do quadrado : ");
	
	scanf("%d", &lado);
	
	//calcula a area do quadrado
	area = lado * lado; 
	
	//mostra a area do quadrado calculado
	printf("A area do quadrado e = ");
	printf("%d/n" ,area);
	
	//fim do programa 
	return  0; 
} 