#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
/*5. 2. Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica
entre elas.*/
main()
{ 
 float nota1, nota2, nota3, media; //vari�veis do programa
 //Limpa a tela
 system("cls");
 // Recebe as tres notas
 printf("Digite as tres notas:\n");
 scanf("%f",&nota1);
 scanf("%f",&nota2);
 scanf("%f",&nota3);
 // Calcula a media
 media = (nota1 + nota2 + nota3)/3; //realiza o processamento das vari�veis
 //Formata a mensagem de sa�da para duas casas decimais
 //printf("Valor da media: %.2f",media);
 printf("Valor da media: %.1f",media);
 // Mostra o resultado da m�dia
 // P�ra o programa a espera de um ENTER
 getch();
}
