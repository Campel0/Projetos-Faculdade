#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int ano_nasc, ano_atual, idade, idade_atual;
	
	printf("Coloque seu ano de nascimento:\n");
	scanf("%i", &ano_nasc);
	
	printf("Coloque o ano atual:\n");
	scanf("%i", &ano_atual);
	
	idade = ano_atual - ano_nasc;
	idade_atual = 2050 - ano_nasc;
	
	printf("Essa é sua idade:%i\n", idade);
	printf("Essa será sua idade em 2050:%i", idade_atual);
	
	getch();
	return 0;
}
