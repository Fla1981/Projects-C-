#include <stdio.h>
#include <conio.h>
main(){
   int A,B,X;
   printf("Informe um valor A: ");
   scanf("%d",&A);
   printf("Informe um valor B: ");
   scanf("%d",&B);
   if(A> B){
   	    X=A;
   	    A=B;
   	    B=X;
   }
   printf("\n em Ordem são: %d e %d",A,B);
   getch();
}
