#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

 
 int ordem;
 while (scanf("%d",&ordem) != EOF) {
   long long int a=1 , b=1 , c , trib_atual;
   int cont=0;
   int condiçao=0;
   while (cont!=ordem) {
  c=a+b;
  a=b;
  b=c;
  condiçao=0;
  if ( c%3==0 ) { condiçao = 1;}
  
  if (condiçao==0) {
      long long int temporario = c;
      while (temporario>0) {
      if(temporario%10==3) {
          condiçao = 1;
          break;
      }
     temporario /= 10 ;
  }
      
  }
  
  if (condiçao==1) {
      cont++;
      trib_atual = c;
  }
 }
 printf("%lld\n",trib_atual);
}
  return 0;
}

