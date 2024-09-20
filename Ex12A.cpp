#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float x, y, quad1, quad2;
	
	printf("Coloque um numero x:\n");
	scanf("%f", &x);
	
	printf("Coloque outro numero y:\n");
	scanf("%f", &y);
	
	quad1 = pow (x, y);
	quad2 = pow (y, x);
	
	printf("x elevado a y:%.2f\n", quad1);
	printf("y elevado a x:%.2f\n", quad2);
	
	getch();
	return 0;
}
