#include <stdio.h>
int main (){
     int caminhao = 18;
     int alqueires = 250;
     int viagens;
    printf ("Quantos caminhoes?:");
    scanf ("%d", caminhao);
    printf ("E quantos alqueires?");
    scanf ("%d", alqueires);
    viagens = alqueires / caminhao;
     printf ("Serao necessarias %.f viagens para transportar toda a colheita de laranjas", viagens);




}