#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI
main(){
	float area, raio;
	
	printf("Vamos calcular a �rea de um circulo:\n");
	printf("Coloque o raio:\n");
	scanf("%f", &raio);
	
	area = 3.1415 * pow(raio,2);
	
	printf("Essa � a �rea do seu circulo:%.2f", area);
	getch();
	return 0;
}
