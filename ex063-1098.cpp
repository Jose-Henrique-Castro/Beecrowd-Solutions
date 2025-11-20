#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int A=0  ;
   int i , d ;
   
   for (i=1;i<=3;i++) {
     printf("I=%d ",A);
     printf("J=%d\n",i);
   }
    float I=0.2 , J=1.2;
   for (i=1;i<=9;i++){
     
     for (d=0;d<3;d++){
       if ( I==1.0 || J==2.0 || J==3.0 || J==4.0 ){
         printf("I=%.0f ",I);
         printf("J=%.0f\n",J);
       }
       else {
         printf("I=%.1f ",I);
         printf("J=%.1f\n",J);
       }
      J++;
     }
     
       I += 0.2;
       J -= 3.0;
       J += 0.2;
     
   }
   int C=2, D=3;
   for (d=0;d<3;d++) {
     printf("I=%d ",C);
     printf("J=%d\n",D);
     D++;
   }
  
  return 0;
}