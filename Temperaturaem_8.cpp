#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
main(){
	/*Leia uma temperatura dada na escala 
	Celsius (C) e exiba o equivalente em Fahrenheit (F). 
	(Fórmula de conversão: F = 9/5 * C + 32).
	*/
	/*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	float c,f;
	printf("\n Entre com a temperatura em Celsius");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\n\n temperatura em Celsius:%.2f>>> A temperatura em Fahrenheit:%.2f",c,f);
	getchar();
}
