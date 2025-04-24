#include<stdio.h>
main(){
	/*3) Escreva um Programa em C que:
          Leia uma quantidade de chuva 
		  dada em polegadas e exiba o 
		  equivalente em milímetros 
		  (25,4 mm = 1 polegada).
		  
		  P=polegada;
		  quantidade=milimitros;
	*/
	/*Ricardo Silva Godoi*/
	float P,quantidade;
	printf("Entre com a quantidade da chuva");
	scanf("%f",&P);
	quantidade=(P*25.4);
	printf("\n P e:%.1f>>> A chuva totaliza é: %.1f",P,quantidade);
	getchar(); 
}
