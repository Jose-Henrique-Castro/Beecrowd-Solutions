#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int N , a=0 , b=1 , c , i;
   
   scanf("%d",&N);
   
   if (N>0 && N<46) {
     for(i=0;i<N;i++){
       if ( i==0 ){
         printf("%d",a);
       }
       else if (i==1){
         printf(" %d",b);
       }
       else {
         c = a+b;
         printf(" %d",c);
         a = b;
         b = c;
       }
     }
   }
   printf("\n");
   
   
  return 0;
}