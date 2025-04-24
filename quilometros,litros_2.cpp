#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	/* Leia quantos litros foram abastecidos em um tanque de combustivel de um veiculo qualquer. 
	   Leia quantos quilômetros foram percorridos Calcule e exiba qual o consumo em(KM/l)*/
	/*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	int quilometros,litros,consumo;
	printf("Entre com a quantidade de litros percorrido");
	scanf("%d",&litros);
	printf("Entre com o quilometro abstecido");
	scanf("%d",&quilometros);
	consumo=quilometros*litros;
	printf("\n Quilometros eh:%d || Litros percorridos:%d>>> O total conforme pedido sera:%d",quilometros,litros,consumo);
	getchar();
	getch();
	return 0;
}
