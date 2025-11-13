#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int X , N , Y;
   int in=0 , out=0;
   scanf("%d",&N);
  
  for ( Y = 0 ; Y < N ; Y++ ) {
    scanf("%d",&X);
    if ( X >= 10 && X <= 20 ){
       in++;
    }
    else {
       out++;
    }
  }
  
  printf("%d in\n",in);
  printf("%d out\n",out);
  
  return 0;
}