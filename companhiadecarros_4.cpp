#include<stdio.h>
#include<conio.h>
int main(){
	/*  Uma companhia de carros paga a seus empregados um sal�rio de R$ 500,00 
	    por m�s mais uma comiss�o de R$ 50,00 para cada carro vendido e mais 5% 
		do valor da venda. Escreva um Programa em C para calcular e exibir o sal�rio 
		do vendedor em um m�s recebendo como dados de entrada o numero de carros vendidos 
		e o valor total das vendas.
	*/
	/*Ricardo Silva Godoi*/
	int salario,comissao,carrosvendidos,valorvenda;
	printf("Entre com o salario");
	scanf("%d",&salario);
	printf("Entre com a quantidade de carros vendidos");
	scanf("%d", &carrosvendidos);
	printf("Entre com o valor das vendas");
	scanf("%d", &valorvenda);
	comissao=(carrosvendidos*valorvenda);
	printf("\n Salario eh:%d ||Carrosvendidos eh:%d || Valorvenda eh:%d>>> O total conforme pedido e:%d",salario,carrosvendidos,valorvenda,comissao);
	getchar();
	return 0;
}
