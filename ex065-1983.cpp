#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int n , m , mmaior, i ;
   float nota , maior=0 ;
   
   scanf("%d",&n);
   
   if (n>=3 && n<= 100) {
     for (i=1;i<=n;i++) {
       scanf("%d",&m);
       if (m>0 && m<1000000) {
         scanf("%f",&nota);
         if (nota>=0 && nota<=10.0) {
           if (nota>maior) {
             maior = nota;
             mmaior = m;
           }
           }
         }
       }
     }
     if (maior<8.0) {
       printf("Minimum note not reached\n");
     }
     else {
       printf("%d\n",mmaior);
     }
     
     return 0;
   }
   
   
 