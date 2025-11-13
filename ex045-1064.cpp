#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   float x,y,z,a,b,c ,soma=0.0;
   int positivos = 0;
   
   scanf("%f%f%f%f%f%f\n",&x,&y,&z,&a,&b,&c);
   
  if ( x>0.0 ) {
    soma += x;
    positivos ++;
  }
   
   if ( y>0.0 ) {
    soma += y;
    positivos ++;
  }
  
  if ( z>0.0 ) {
    soma += z;
    positivos ++;
  }
  
  if ( a>0.0 ) {
    soma += a;
    positivos ++;
  }
  
  if ( b>0.0 ) {
    soma += b;
    positivos ++;
  }
  
  if ( c>0.0 ) {
    soma += c;
    positivos ++;
  }
  
  float media = soma/positivos;
  printf("%d valores positivos\n",positivos);
  printf("%.1f\n",media);
  
  return 0;
}