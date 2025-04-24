#include<stdio.h>
#include<conio.h>
#include<locale.h>
main(){
	/*Leia um valor, e qual o percentual de um desconto, e informe o novo valor.
    */
    /*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	float valor,percentual;
	printf("\n\n Entre com um valor");
	scanf("%f",&valor);
	printf("\n\n Entre com o percentual");
	scanf("%f",&percentual);
	valor=valor*percentual/100;
    printf("\n Valor eh:%.1f>>>O novo valor eh:%.1f",valor,percentual);
	getchar();
	return 0;
}
