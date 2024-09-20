#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float custo_cons, preco_fab, lucro_dist, imposto, imp1, venda;
	
	printf("Coloque o preço do carro novo:R$\n");
	scanf("%f", &preco_fab);
	
	printf("Coloque o percentual de lucro do distribuidor:%\n");
	scanf("%f", &lucro_dist);
	
	printf("Coloque o percentual de imposto:%\n");
	scanf("%f", &imposto);
	
	venda = preco_fab * lucro_dist /100;
	imp1 =preco_fab * imposto / 100;
	custo_cons = preco_fab + venda + imp1;
	
	printf("Esse é o valor do imposto:R$%.2f\n", imp1);
	printf("Esse é o lucro da distribuidora:R$%.2f\n", venda);
	printf("Esse é o valor final para a venda:\nR$%.2f", custo_cons);
	getch();
	return 0;
	
}
