#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
main()
{ float num1, num2, r1, r2;
	// Limpa a tela
    system("cls");
	// Mostra mensagem antes da leitura do 1§ n£mero
	printf("\nDigite um n£mero: ");
	// Recebe o 1§ n£mero
	scanf("%f",&num1);
	// Mostra mensagem antes da leitura do 2§ n£mero
	printf("\nDigite outro n£mero: ");
	// Recebe o 2§ n£mero
	scanf("%f",&num2);
	// Calcula o 1§ n£mero elevado ao 2§
	r1 = pow (num1, num2);
	// Calcula o 2§ n£mero elevado ao 1§
	r2 = pow (num2, num1);
	// Mostra o 1§ n£mero elevado ao 2§
	printf("\nResposta 1 = %.2f",r1);
	// Mostra o 2§ n£mero elevado ao 1§
	printf("\nResposta 2 = %.2f",r2);
	// P ra o programa a espera de um ENTER
	getch();
}
