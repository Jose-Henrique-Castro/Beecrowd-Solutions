#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
double x1 , y1 , x2 , y2 ,resultado, distancia;
scanf("%lf%lf",&x1,&y1);
scanf("%lf%lf",&x2,&y2);
resultado = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
distancia = sqrt(resultado);
printf("%.4lf\n",distancia);
}