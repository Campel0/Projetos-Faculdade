#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float salario, deposito, cheque, retirada, saldo_inicial, saldo_atual, cpmf;
	
	printf("Coloque o seu deposito: R$");
	scanf("%f", &deposito);
	
	cheque = 2;
	saldo_inicial = 0;
	cpmf = deposito * 0.38/100;
	retirada = cheque / deposito * cpmf;
	saldo_atual = retirada - cpmf;
	
	printf("Esse é seu saldo atual:%.2f", saldo_atual);
	getch();
	return 0;}
