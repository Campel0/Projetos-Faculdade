#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<stdio.h>
/*3. Fa�a um programa que receba tr�s notas e seus respectivos pesos, calcule e
mostre a m�dia ponderada dessas notas.*/
main()
{ 
 float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total_pesos, media;
 //Limpa a tela
 system("cls");
 //Formata a sa�da para mostrar apenas duas casas decimais
 //Mostra mensagem antes da leitura das notas
 printf("\nDigite as tr�s notas\n");
 // Recebe as tr�s notas
 scanf("%f",&nota1); 
 scanf("%f",&nota2);
 scanf("%f",&nota3);
 //Mostra mensagem antes da leitura dos pesos
 printf("\nDigite os tr�s pesos\n");
 // Recebe os tr�s pesos
 scanf("%f",&peso1);
 scanf("%f",&peso2);
 scanf("%f",&peso3);

 soma1 = nota1 * peso1;
 soma2 = nota2 * peso2;
 soma3 = nota3 * peso3;
 total_pesos = peso1 + peso2 + peso3;
 // Calcula a m�dia
 media = (soma1 + soma2 + soma3)/total_pesos;
 // Mostra o resultado da m�dia
 printf("Valor da media ponderada: %.2f",media);
 // P�ra o programa a espera de um ENTER 
 getch();
}
