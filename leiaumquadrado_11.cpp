#include<stdio.h>
#include<conio.h>
main(){
	/*Leia um lado de um quadrado e calcule e exiba:
      Perímetro:
      Área:
      Diagonal (hipotenusa):
      Entrada: quadrado
      Processamento: Perimetro, area, diagonal
      saida:o resultado é
    */
    /*Ricardo Silva Godoi*/
	float lado,perimetro,area,diagonal;
	printf("\nEntre lado do quadrado");
	scanf("%f",&lado);
    perimetro=(4*lado);/*Representa 4 lados do quadrado*/
    area=(lado*lado);
    diagonal=lado*(2);/*(2) vale hipotenusa*/
    printf("\n Perimetro: %.2f\n",perimetro);
	printf("\n Area: %.2f\n",area); 
	printf("\n Diagonal: %.2f\n",diagonal);
    getchar();
    return 0;	
}
