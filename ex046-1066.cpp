#include <stdio.h>
int main()
{
  
  int x=0,y;
  int pares = 0 , impares = 0 , positivos = 0 , negativos = 0; 
  
  while ( x < 5 ) {
    scanf("%d",&y);
    x++;
  
  if ( y % 2 == 0 ) {
    pares++;
  }
  else {
    impares++;
  }
  
  if ( y > 0 ) {
    positivos++;
  }
  else if ( y < 0 ) {
    negativos++;
  }
  }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
  
return 0;
}