#include<stdio.h>
#include<conio.h>
main(){
	/*9) Escreva um Programa em C que: solicite um 
	     determinado numero em segundos e em seguida 
		 indique quantas horas, minutos e segundos .
         Ex: se for digitado 6543, o resultado será:
		 Horas : 1
         Minutos : 49
         Segundos : 3
    */
    /*Ricardo Silva Godoi*/
    int quantidade_segundos,horas,minutos,segundos;
    printf("\nEntre com um horario em segundos: ");
    scanf("%d",&quantidade_segundos);
    horas=(quantidade_segundos/3600);
    minutos=(quantidade_segundos%3600)/60;
    segundos=quantidade_segundos%60;
    printf("\nHoras:%d\n",horas);
    printf("\nMinutos:%d\n",minutos);
    printf("\nSegundos:%d\n",segundos);
	getchar();
	return 0;
}
