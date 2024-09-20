#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
main()
{ float sal, salreceber, grat, imp;
// Limpa a tela
system("cls");
// Mostra mensagem antes da leitura do sal rio
printf("\nDigite o sal rio: ");
// Recebe o sal rio
scanf("%f",&sal);
// Calcula a gratifica‡ao
grat = sal * 5/100;
// Calcula o imposto
imp = sal * 7/100;
// Calcula o sal rio a receber
salreceber = sal + grat - imp;
// Mostra o sal rio a receber
printf("\nSal rio a receber: %.2f",salreceber);
// P ra o programa a espera de um ENTER
getch();
}

