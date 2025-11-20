#include <stdio.h>
#include <string.h>
int main()
{
  
 int vetor[1000] , num , temp=0;
 
 scanf("%d",&num);
 vetor[0] = 0;
 for (int i=0;i<1000;i++) {
   
   if (i>0) {
     temp++;
   vetor[i] = temp;
   }
   
   if (temp==num) {
       vetor[i]=0;
       temp=0;
   }
   printf("N[%d] = %d\n",i,vetor[i]);
  
 }
 
  return 0;
}