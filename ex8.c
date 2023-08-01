#include <stdio.h>
int main (){
	int raio , altura;
	int area, volume;
	int x;
	int y;
	int pi = 3;
	
	printf("Digite o raio de um cilindro em cm:");
	scanf ("%d", &raio);
	printf("Digite a altura do cilindro em cm:");
	scanf ("%d", &altura);
	
	x = 2 * pi * raio * altura;
	y = pi * raio * raio * raio * altura;
	
	printf ("O raio é %d \n", raio);
	printf ("O raio é %d \n ", altura);
	printf("A area é igual = %d\n", y);
	printf ("O volume é igual = %d\n", x);
	return 0;
}
