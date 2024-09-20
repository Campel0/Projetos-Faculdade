#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
	float n1, n2, n3, media;
	
	printf("Declare as notas do semestre:\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media = n1 + n2 + n3 /3;
	
	printf("Essa foi sua nota no semestre atual:%.1f", media);
	getch;
	return 0;
}
