#include<stdio.h>
#include<conio.h>
main(){
	float A,B,C;
	printf("\t Programa Tipo de triangulo \n\n");
	printf("\n Informe o lado A:  ");
	scanf("%f",&A);
	printf("\n Informe o lado B:  ");
	scanf("%f",&B);
	printf("\n Informe o lado C:  ");
	scanf("%f",&C);
	printf("\n");
	if(A<B+C && B<A+C && C<A+B){
		if(A==B && B== C){
		    printf("Triangulo Equilátero \n");	
		}else{
			if(A==B ||A==C || C==B){
				printf("Triangulo Isosceles \n");
			}else{
				printf("Triangulo Escaleno \n");
		    }
		}
	}else{
	    printf("Os valores fornecidos nao formam um triangulo \n");	
	}
	getch();
}
