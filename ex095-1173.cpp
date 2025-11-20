#include <stdio.h>
#include <string.h>
int main()
{
  
 int vetor[10];
 
 scanf("%d",&vetor[0]);
 
 for (int i=0; i<10; i++) {
   if (i>0) vetor[i] = vetor[i-1]*2;
   printf("N[%d] = %d\n",i,vetor[i]);
 }
 
  return 0;
}