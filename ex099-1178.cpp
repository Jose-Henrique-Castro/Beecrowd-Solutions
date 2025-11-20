#include <stdio.h>
int main()
{ 
  
 double vetor[100];
 double num;
 
 scanf("%lf",&num);
 
 for (int i=0;i<100;i++) {
   vetor[i] = num;
   printf("N[%d] = %.4lf\n",i,num);
   num = num/2.0;
 }
  
   return 0;
}


