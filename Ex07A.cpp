#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

main(){
	float salbase, novosal, grat, imposto;
	
	printf("Coloque seu salario:\n");
	scanf("%f", &salbase);
	
	imposto = salbase - (salbase * 10/100);
	novosal = salbase + 50 - imposto;
	
	printf("Esse é seu novo salario:%.2f", novosal);
	getch();
	return 0;
}
