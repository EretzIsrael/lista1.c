#include <stdio.h>
int main (){

	char nome;
	int salario;
	int percentual;
	int novo;
	printf("Digite o seu nome: \n");
	scanf ("%s", &nome);
	printf ("Digite seu salário:\n");
	scanf ("%d", &salario);
	printf ("Digite o indice percentual: \n");
	scanf ("%d", &percentual);
	novo = salario * percentual;
	printf ("O salário novo é  =  %d \n" , novo );
	return 0;
}
