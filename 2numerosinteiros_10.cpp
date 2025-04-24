#include<stdio.h>
#include<conio.h>
#include<locale.h>
main(){
	/*Leia 2 numeros inteiros um dividendo e um divsor e imprimir a seguinte saida:
	  quociente:
	  Resto:
	*/
	/*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,quociente,resto;
	printf("\n Entre com o numero inteiro 1:");
	scanf("%d",&n1);
	printf("Entre com o numero inteiro  2:  ");
	scanf("%d",&n2);
	quociente=(n1/n2);
	resto=(n1%n2);
	printf("\nn1: %d|| n2: %d>>>Quociente: %d>>>Resto: %d",n1,n2,quociente,resto);
	getchar();
	return 0;
}
