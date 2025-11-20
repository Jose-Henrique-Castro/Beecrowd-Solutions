#include <stdio.h>
#include <stdlib.h>
int main()
{
   
  int N , y ;
  int X , Y ;
  float divisao;
  
  scanf("%d",&N);
  
  for (y=0;y<N;y++) {
    scanf("%d%d",&X,&Y);
    if ( Y == 0 ) {
      printf("divisao impossivel\n");
    }
    else {
    divisao = (float)X / Y;
      printf("%.1f\n",divisao);
    }
  }
   
  return 0;
}