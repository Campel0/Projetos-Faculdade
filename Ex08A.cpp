#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

main(){
	float dep, rend, juros, total;
	
	printf("Coloque o valor do deposito: R$\n");
	scanf("%f", &dep);
	
	printf("Coloque o valor dos juros:\n");
	scanf("%f", &rend);
	
	juros = dep * rend/100;
	
	total = juros + dep;
	
	printf("Esse é o valor total com o juros: R$%.2f", total);
	getch();
	return 0;
}
