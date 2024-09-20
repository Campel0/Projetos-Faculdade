#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float salbase, grat, novosal, imposto;
	
	printf("Qual seu salario base:\n");
	scanf("%f", &salbase);
	
	grat = salbase + (salbase * 5/100);
	
	imposto = salbase - (salbase * 7/100);
	
	novosal= salbase + grat - imposto;
	
	printf("Esse é seu salario liquido:%.2f\n", novosal);
	getch();
	return 0;
}
