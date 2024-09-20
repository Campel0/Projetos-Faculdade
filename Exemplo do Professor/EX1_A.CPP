#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
 int n1, n2, n3, n4, soma;
 //Limpa a tela
 system("cls");
 // Recebe as quatro notas
 printf("Digite quatro numeros inteiros: \n");
 scanf("%d",&n1);
 scanf("%d",&n2);
 scanf("%d",&n3);
 scanf("%d",&n4);
 // Calcula a media
 soma = n1 + n2 + n3 + n4;
 //Formata a mensagem de sa¡da para duas casas decimais
 //printf("Valor da media: %.2f",media);
 printf("Valor da soma: %d",soma);
 // Mostra o resultado da m‚dia
 // P ra o programa a espera de um ENTER
 getch();
 return 0;
}

