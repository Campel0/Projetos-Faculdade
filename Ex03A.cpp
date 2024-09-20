#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
	float n1, n2, n3, p1, p2, p3,s1, s2, s3, total_pesos, media;
	
	printf("Digite suas notas no semestre:\n");
	//defino as notas que serão usadas
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	printf("Qual peso de cada nota;\n");
	//defino os pesos que serão atribuidos em cada nota
	scanf("%f", &p1);
	scanf("%f", &p2);
	scanf("%f", &p3);
	
	//atribui o valor das somas para as notas e pesos
	s1 = n1 * p1;
	s2 = n2 * p2;
	s3 = n3 * p3;
	//define o valor final dos pesos
	total_pesos = p1 + p2 + p3;
	
	//faz a definição da media de acordo com cada nota colocado dividindo pelo total do peso
	media = (s1 + s2 + s3) / total_pesos;
	
	//mostra o resultado
	printf("Sua nota no semestre foi:%.2f", media);
	getch;
	return 0;
}
