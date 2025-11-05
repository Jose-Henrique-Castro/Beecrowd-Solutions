#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
int horas , kmh;
double distancia ,litros;
scanf("%d%d",&horas,&kmh);
distancia = horas*kmh;
litros = distancia/12;
printf("%.3lf\n",litros);

}