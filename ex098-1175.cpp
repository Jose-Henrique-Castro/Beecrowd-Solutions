#include <stdio.h>
int main()
{
  
  int vetor[20] , num;

  for (int i=0;i<20;i++) { // loop de scanf 20 vezes para declarar cada espaço do vetor
    scanf("%d",&num);
    vetor[i] = num;
  }
  int x=20 , y=-1;
  int temp=0;
  
  while (y!=10) {
    x--;
  y++;
  temp = vetor[x] ; vetor[x] = vetor[y]; ; vetor[y] = temp;
  }
  
 temp = vetor[9]; vetor[9] = vetor[10]; vetor[10] = temp;
  
  for ( int z=0 ; z<20 ; z++) {
    printf("N[%d] = %d\n",z,vetor[z]);
  }
  
  
   return 0;
}