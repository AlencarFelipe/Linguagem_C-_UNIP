// Calculo da area
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	
	
	//cria variaveis
	int area,altura,comprimento;
	
	
	//entra com o valor do altura do retangulo
	printf("Digite o valor de altura do retangulo : ");
	
	scanf("%d", &altura);
	
	//entra com o valor do comprimento do retangulo
	printf("Digite o valor de comprimento do retangulo : ");
	
	scanf("%d", &comprimento);
	
	//calcula a area do quadrado
	area = altura * comprimento; 
	
	//mostra a area do quadrado calculado
	printf("A area do retangulo e = ");
	printf("%d/n" ,area);
	
	//fim do programa 
	return  0; 
} 