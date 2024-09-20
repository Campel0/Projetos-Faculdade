#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
main()
{ float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
	system("cls");
	// Mostra mensagem antes da leitura do pre‡o de f brica
	printf("\nDigite o pre‡o de f brica: ");
	// Recebe o pre‡o de f brica
	scanf("%f",&p_fab);
	// Mostra mensagem antes da leitura do percentual do distribuidor
	printf("\nDigite o percentual de lucro do distribuidor: ");
	// Recebe o percentual de lucro do distribuidor
	scanf("%f",&perc_d);
	// Mostra mensagem antes da leitura do percentual de impostos
	printf("\nDigite o percentual de impostos: ");
	// Recebe o percentual de impostos
	scanf("%f",&perc_i);
	// Calcula o valor do lucro do distribuidor
	vlr_d = p_fab * perc_d / 100;
	// Calcula o valor dos impostos
	vlr_i  = p_fab * perc_i / 100;
	// Calcula o pre‡o final do ve¡culo
	p_final = p_fab + vlr_d + vlr_i;
	// Mostra o lucro do distribuidor calculado
	printf("\nO lucro do distribuidor ‚ %.2f",vlr_d);
	// Mostra o valor calculado dos impostos
	printf("\nO valor dos impostos ‚ %.2f",vlr_i);
	// Mostra o pre‡o final do ve¡culo ao consumidor
	printf("\nO pre‡o final do ve¡culo ao consumidor ‚%.2f",p_final);
	// P ra o programa a espera de um ENTER
	getch();
}
