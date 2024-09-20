#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
main()
{ int ano_atual, ano_nasc, id_atual, id_2050;
  // Limpa a tela
  system("cls");
  // Mostra mensagem antes da leitura do ano de nascimento
  printf("\nDigite o ano de nascimento: ");
  // Recebe o ano de nascimento
  scanf("%i",&ano_nasc);
	// Mostra mensagem antes da leitura do ano atual
	printf("\nDigite o ano atual: ");
	// Recebe o ano atual
	scanf("%i",&ano_atual);
	// Calcula a idade atual
	id_atual = ano_atual - ano_nasc;
	// Calcula a idade em 2050
	id_2050 = 2050 - ano_nasc;
	// Mostra a idade atual
	printf("\nA idade atual ‚: %i",id_atual);
	// Mostra a idade em 2050
	printf("\nA idade em 2050 ser : %i",id_2050);
	// P ra o programa a espera de um ENTER
	getch();
}

