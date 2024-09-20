#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float hora, salminimo, salbruto, hora_trab, imposto, salario;
	
	printf("Coloque o seu salario bruto: R$\n");
	scanf("%f", &salminimo);
	
	printf("Coloque as suas horas trabalhadas:");
	scanf("%f", &hora);
	
	hora_trab = salminimo /2;
	salbruto = hora * hora_trab;
	imposto = salbruto * 3/100;
	salario = salbruto - imposto;
	
	
	printf("Esse é seu contracheque:%.2f", salario);
	
	getch();
	return 0;
}
