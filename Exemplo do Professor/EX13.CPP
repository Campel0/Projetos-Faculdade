#include <conio.h>
#include<stdlib.h>
#include <math.h>
#include <stdio.h>
main()
{ float pes, polegadas, jardas, milhas;
	// Limpa a tela
	system("cls");													
	// Mostra mensagem antes da leitura da medida em pes
	printf("\nDigite uma medida em pes: ");
	// Recebe a medida em p‚s
	scanf("%f",&pes);
	// Calcula a medida em polegadas
	polegadas = pes * 12;
	// Calcula a medida em jardas
	jardas = pes / 3;
	// Calcula a medida em milhas
	milhas = jardas / 1760;
	// Mostra a medida em polegadas
	printf("\nEm polegadas   = %.2f",polegadas);
	// Mostra a medida em jardas
	printf("\nEm jardas  = %.2f",jardas);
	// Mostra a medida em milhas
	printf("\nEm milhas  = %.2f",milhas);
	// P ra o programa a espera de um ENTER
	getch();
}											

