#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<stdlib.h>
main()
{ float base, altura, area;
	// Limpa a tela
	system("cls");
	// Mostra mensagem antes da leitura da base
printf("\nDigite a base do tri�ngulo:  ");
	// Recebe a base
	scanf("%f",&base);
	// Mostra mensagem antes da leitura da altura
	printf("\nDigite a altura do tri�ngulo: ");
	// Recebe a altura
	scanf("%f",&altura);
	// Calcula a �rea
	area = (base * altura)/2;
	// Mostra a �rea
	printf("\nA �rea do tri�ngulo %.2f",area);
	// P�ra o programa a espera de um ENTER
getch();
}
