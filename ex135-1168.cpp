#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  
  int testes;
  scanf("%d",&testes);
    getchar();
  
  for ( int i=0 ; i<testes ; i++ ) {
    int cont=0;
    
    char numero;
    while((numero=getchar()) && numero !='\n') {
      if (numero=='1') cont+=2;
      if (numero=='2') cont+=5;
      if (numero=='3') cont+=5;
      if (numero=='4') cont+=4;
      if (numero=='5') cont+=5;
      if (numero=='6') cont+=6;
      if (numero=='7') cont+=3;
      if (numero=='8') cont+=7;
      if (numero=='9') cont+=6;
      if (numero=='0') cont+=6;
    }
    
    printf("%d leds\n",cont);
    
  }
  
  
    return 0;
}