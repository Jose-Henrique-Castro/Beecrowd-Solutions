#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int I=1 , J=7 , x;
   
     for (x=1;x<=3;x++){
       printf("I=%d J=%d\n",I,J);
      J--;
     if ( x == 3) {
       J += 5;
       I += 2;
       x=0;
     }
     if ( I==11 ){
       break;
     }
   }
   
   
  return 0;
}