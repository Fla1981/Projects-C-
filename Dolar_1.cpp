#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <cmath>
main(){
	/* Escreva um Programa em C que:
       Leia a cota��o do d�lar, Leia um valor em d�lares, Converta esse valor para Real e  Mostre o resultado
	*/
	/*Ricardo Silva Godoi*/
	float cotacao,dolar,real;
	setlocale(LC_ALL,"Portuguese");
    printf("\n\nEntre com a cota��o do dolar: ");
    scanf("%f",&cotacao);
    printf("\n\n Entre com os valores de dolares que voce quer comprar: ");
    scanf("%f",&dolar);
    real=(cotacao*dolar);
    printf("\n Cotacao:%.1f || Dolar:%.1f>>> O total em reais �:%.1f",cotacao,dolar,real);
	return 0;
}
