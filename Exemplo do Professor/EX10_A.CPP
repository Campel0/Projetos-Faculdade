#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <stdio.h>
main()
{ float area, raio;
	// Limpa a tela
	system("cls");
	// Mostra mensagem antes da leitura do raio
	printf("\nDigite o raio: ");
	// Recebe o raio
	scanf("%f",&raio);
	// Calcula a  rea
	area = 3.1415 * raio * raio;
	// Mostra a  rea
	printf("\nA  rea ‚: %.2f",area);
	// P ra o programa a espera de um ENTER
	getch();
}
