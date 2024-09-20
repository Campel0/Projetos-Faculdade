#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{ float dep, taxa, rend, total;
// Limpa a tela
system("cls");
// Mostra mensagem antes da leitura do valor do dep¢sito
printf("\nDigite o valor do dep¢sito: R$ ");
// Recebe o valor do dep¢sito
scanf("%f",&dep);
// Mostra mensagem antes da leitura da taxa de juros
printf("\nDigite a taxa de juros: ");
// Recebe a taxa de juros
scanf("%f",&taxa);
// Calcula o rendimento
rend = dep * taxa/100;
// Calcula o total
total = dep + rend;
// Mostra o rendimento
printf("\nRendimento = R$ %.2f",rend);
// Mostra o total
printf("\nTotal = R$ %.2f",total);
// P ra o programa a espera de um ENTER
getch();
}

