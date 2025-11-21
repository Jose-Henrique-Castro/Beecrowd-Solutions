#include <stdio.h>
int main()
{
  
  char letra;
  int i=0;
  
    while ( (letra = getchar()) && letra != EOF ) {
      
      if (letra == ' ') {putchar(letra); i=0;}
      else if (i%2==1) {putchar(letra); i++;}
      else i++;
      
    }
    printf("\n");
  
    return 0;
}