#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	/*Escreva um Programa em C que:
     Exiba a seguinte saída
     1 -   "Clientes"
     2 - "Fornecedores"
    3 - "Faturas"
    0 - "SAIR"
    */
    /*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	printf("\n 1-\"Cliente\"");
	printf("\n\n 2-\"Fornecedores\"");
	printf("\n\n 3-\"Faturas\"");
	printf("\n\n 0-\"Sair\"");
	getchar();
	return 0;
	
}
