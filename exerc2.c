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
	printf ("Ser� necess�rio = %d horas (h) para chegar at� o destino informada",z);
}
