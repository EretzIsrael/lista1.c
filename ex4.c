#include <stdio.h>
int main (){
   char nome;
   int vitorias;
   int empates;
   int pontos;
   printf ("Digite o nome do time de futebol \n");
   scanf ("%s" , &nome);
   printf ("Quantas vitorias? \n");
   scanf("%d", &vitorias);
   printf("Quantos empates? \n");
   scanf("%d", &empates);
     pontos = (vitorias + 3 + empates + 1);
   printf ("O total de pontos e = %d" , pontos);
    return 0;
}