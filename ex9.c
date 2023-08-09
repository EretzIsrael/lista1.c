#include <stdio.h>

/*Desenvolva um programa que leia o nome e o preço de uma mercadoria.
 O programa deverá calcular um aumento de 5% no preço da mercadoria e mostrar o nome da mercadoria e o seu novo preço.*/

int main (){
    // Declarando as Variáveis n -> nome e p -> preço
    char nome; 
    int p;
    float novo;
    //Input
    printf("Nome do produto: ");
    scanf ("%c", &nome);
    printf ("Preco do produto: ");
    scanf ("%p", &p);
    //Calculation 
    novo = p * 1.05;
    printf("Preço novo: %.1f" , nome , novo);
    return 0;
}

