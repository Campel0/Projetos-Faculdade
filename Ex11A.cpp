#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float x, quad, cubo, r2, r3;
	
	printf("Coloque um numero positivo e maior que zero:\n");
	scanf("%f", &x);
	
	quad = pow(x,2);
	cubo = pow(x,3);
	r2 = sqrt(x);
	r3 = powf(x,1.0/3.0);
	printf("Numero ao quadrado:%.1f\n", quad);
	printf("Numero ao quadrado:%.1f\n", cubo);
	printf("Numero ao quadrado:%.1f\n", r2);
	printf("Numero ao quadrado:%.1f\n", r3);
	getch();
	return 0;
}
