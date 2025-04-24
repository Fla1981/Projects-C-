#include<stdio.h>
#include<conio.h>
#include<locale.h>
main(){
	/*Calcule a media de um aluno na disciplina de Técnicas de Programação.
      Para isso solicite a nota do trabalho e a nota da prova.
      Sabe-se que a nota do trabalho tem peso 4 e a nota da prova tem peso 6.
      Mostre a media como resultado.
	*/ 
	/*Ricardo Silva Godoi*/
	setlocale(LC_ALL,"Portuguese");
	float media,mediaprova,nt,np;
	printf("\n\nEntre com a media da nota de trabalho");
	scanf("%f",&media);
	printf("\n\n Entre com a media da nota de prova");
	scanf("%f",&mediaprova);
	media=(media*mediaprova)+mediaprova+media/2;
	if(media>=4){
		if(media>=6){
		   printf("\n\n Nota de trabalho");	
		} else{
			printf("\n\n Nota da prova");
		}
	    }else{
	  	 printf("\n\n Solicite a nota do trabalho");
	    }
	     printf("\n media:%f.2f>>> A media é:%f.2f",media,mediaprova,nt,np);     
	     getchar();
	     return 0;
}



