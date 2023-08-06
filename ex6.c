#include <stdio.h>
int main (){
    int distancia;
    int kmh = 900;
    float horas;
    printf("Velocidade 900 km/h...\n" , kmh);
    printf ("Digite a distancia em kilometros (km): ");
    scanf ("%d", &distancia);
    horas =  distancia/ 900;
    printf ("O cruzeiro do aviao levara %.2f horas pra chegar no destino" , horas);
}