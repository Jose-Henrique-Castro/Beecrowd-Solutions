#include <stdio.h>
#include <math.h>

int main()
{
    
    int horas , minutos , segundos ,N;
    scanf("%d",&N);
    
    horas = N / 3600;
    N = N % 3600;
    
    minutos = N / 60;
    N = N % 60;
    
    segundos = N / 1;
    N = N % 1;
    
    printf("%d:%d:%d\n",horas,minutos,segundos);
    
    return 0; 
}