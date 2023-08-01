# include <stdio.h>
int main (){
	int x;
	int y;
	int z;
	printf("Digite a distancia percorrida em km/h:");
	scanf ("%d", &x);
	printf ("Digite o intervalo de tempo em horas (h):");
	scanf ("%d", &y);
	z = (x / y );
	printf ("Será necessário = %d horas (h) para chegar até o destino informada",z);
}
