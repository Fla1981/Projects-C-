#include<stdio.h>
#include<conio.h>
#include<locale.h>/*deixar com acento as palavras*/
int main(){
	/*7) Escreva um Programa em C que:
         Leia uma quantidade de pães e leite.
        Informe o valor da conta do cliente, 
		sabendo que cada litro de leite custa 
		R$5,50 e cada pão custa R$1,25.
	*/
	/*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	float paes,leite,qp,qt,total;
	printf("\n\nEntre com a quantidade de pães:  ");
	scanf("%f", &paes);
	printf("\n\nEntre com a quantidade de leite: ");
	scanf("%f", &leite);
	qp=(paes*1.25);/*qp= quantidade paes*/
	qt=(leite*5.50);/*qt=quantidade de leite*/
	total=(qp+qt);
	printf("\n O valor da Conta:%.2f",total);
	getchar();
}
