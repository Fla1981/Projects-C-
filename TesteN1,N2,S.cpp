#include<stdio.h>
#include<conio.h>
main(){
	int N1,N2,S;
	printf("Digite o primeiro numero: ");
	scanf("%d",&N1);
	printf("Digite outro numero: ");
	scanf("%d",&N2);
	S=N1+N2;
	printf("\nA soma de:%d + %d eh igual a:%d", N1,N2,S);

	getchar();
	getch();// precisa do conio.h no include
}
