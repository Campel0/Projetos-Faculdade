#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float pole, pe, jarda, milha;
	
	printf("Coloque a quantidade de pes para conversão:\n");
	scanf("%f", &pe);
	

	pole =  pe * 12;
	jarda = pe / 3;
	milha = jarda / 1760;
	
	printf("Numero em polegadas:%.2f\n", pole);
	printf("Numero em jardas:%.2f\n", jarda);
	printf("Numero em milhas:%.2f\n", milha);
	
	getch();
	return 0;
}
