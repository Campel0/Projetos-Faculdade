#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
	float salario, perc, aumento, novosal;
	
	printf("Coloque seu salario:\n");
	scanf("%f", &salario);
	
	printf("Coloque o aumento desejado:\n");
	scanf("%f", &perc);
	
	aumento = salario * perc/100;
	
	novosal = salario + aumento;
	
	printf("Esse é o aumento:%.2f\n", aumento);
	
	
	printf("Esse é seu novo salario:%.2f\n", novosal);
	getch();
	return 0;
}
