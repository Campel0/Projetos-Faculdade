#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
/*5. Faça um programa que receba o salário de um funcionário e o percentual de
aumento, calcule e mostre o valor do aumento e o novo salário.*/
main()
{ float sal, perc, aumento, novosal;
// Limpa a tela
system("cls");
// Mostra mensagem antes da leitura do sal rio
printf("\nDigite o sal rio do funcion rio: ");
// Recebe o sal rio
scanf("%f",&sal);
// Mostra mensagem antes da leitura do percentual de aumento
printf("\nDigite o percentual de aumento: ");
// Recebe o percentual de aumento
scanf("%f",&perc);
// Calcula o aumento
aumento = sal * perc/100;
// Mostra o aumento
printf("Valor do aumento: R$ %.2f\n",aumento);
// Calcula o novo sal rio
novosal = sal + aumento;
// Mostra o novo sal rio
printf("O novo salario: R$ %.2f",novosal);
// P ra o programa a espera de um ENTER
getch();
}
