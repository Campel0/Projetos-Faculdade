#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

main(){
	float area, base, altura;
	
	printf("Vamos calcular a área do triangulo:\n");
	
	printf("Coloque a base do triangulo:\n");
	scanf("%f", &base);
	
	printf("Coloque a altura do triangulo:\n");
	scanf("%f", &altura);
	
	area = (base*altura) / 2;
	
	printf("Essa é a area do seu triangulo:%.1f", area);
	
	getch();
	return 0;
}
