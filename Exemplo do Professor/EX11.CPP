#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
main()
{ float num, quad, cubo, r2, r3;
	// Limpa a tela
	system("cls");													
	// Mostra mensagem antes da leitura do n£mero
	printf("\nDigite um n£mero: ");
	// Recebe o n£mero
	scanf("%f",&num);
	// Calcula o n£mero ao quadrado
	quad = pow(num,2);
	// Calcula o n£mero ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do n£mero
	r2 = sqrt(num);
	// Calcula a raiz c£bica do n£mero
	//r3 = exp(log(num) * 1/3);
	r3 = powf(num,1.0/3.0);
	// Mostra o n£mero ao quadrado
	printf("\nN£mero ao quadrado  = %.2f",quad);
	// Mostra o n£mero ao cubo
	printf("\nN£mero ao cubo  = %.2f",cubo);
	// Mostra a raiz quadrada do n£mero
	printf("\nRaiz quadrada   = %.2f",r2);
	// Mostra a raiz c£bica do n£mero
	printf("\nRaiz c£bica  = %.2f",r3);
	// P ra o programa a espera de um ENTER
	getch();
}

