#include "stdio.h"
main(){
	float P1,P2,P3,P4,media;
	printf("Digite a Nota da P1: ");
	scanf("%f",&P1);
	printf("Digite a Nota da P2: ");
	scanf("%f",&P2);
	printf("Digite a Nota da P3: ");
	scanf("%f",&P3);
	printf("Digite a Nota da P4: ");
	scanf("%f",&P4);
	media=(P1+P2+P3+P4)/4;
	printf("\nP1: %.1f || P2: %.1f || P3: %.1f || P4: %.1f >>> Media: %.1f"
	,P1,P2,P3,P4,media);
	getchar();
}
