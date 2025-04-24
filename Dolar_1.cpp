#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <cmath>
main(){
	/* Escreva um Programa em C que:
       Leia a cotação do dólar, Leia um valor em dólares, Converta esse valor para Real e  Mostre o resultado
	*/
	/*Ricardo Silva Godoi*/
	float cotacao,dolar,real;
	setlocale(LC_ALL,"Portuguese");
    printf("\n\nEntre com a cotação do dolar: ");
    scanf("%f",&cotacao);
    printf("\n\n Entre com os valores de dolares que voce quer comprar: ");
    scanf("%f",&dolar);
    real=(cotacao*dolar);
    printf("\n Cotacao:%.1f || Dolar:%.1f>>> O total em reais é:%.1f",cotacao,dolar,real);
	return 0;
}
