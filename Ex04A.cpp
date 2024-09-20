#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
	float salario, aumento;
	
	printf("Coloque o salario do funcionario:\n");
	scanf("%f", &salario);
	
	aumento = salario * 25/100 + salario;
	
	printf("Esse é o salario com o aumento de 25 porcento: %.2f", aumento);
	getch();
	return 0;
}
