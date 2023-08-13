#include <stdio.h>
int main (){
    int nome;
    int eleitores;
    int votos;
    int calculo;
    printf("Nome da cidade: \n");
    scanf ("%s", &nome);
    printf("Quantos eleitores?: ");
    scanf ("%d", &eleitores);
    printf ("Numero de votos: ");
    scanf ("%d", &votos);
    calculo = votos / eleitores * 100;
    printf ("%d%%", calculo);

    return 1;
}