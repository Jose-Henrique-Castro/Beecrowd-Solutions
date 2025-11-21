#include <stdio.h>
int main()
{
  
 int par[6];
 int impar[6];
 int num;
 int contpar=0;
 int contimpar=0;
 
 for (int i=0;i<15;i++) {
   scanf("%d",&num);
   
   if (num%2==0) {
     par[contpar] = num;
     contpar++;
   }
   else {
     impar[contimpar] = num;
     contimpar++;
   }
   
   if (contpar==5) {
     for (int j=0;j<5;j++) printf("par[%d] = %d\n",j,par[j]);
     for (int j=0;j<5;j++) par[j] = 0;
     contpar=0;
   }
   
   if (contimpar==5) {
     for (int j=0;j<5;j++) printf("impar[%d] = %d\n",j,impar[j]);
     for (int j=0;j<5;j++) impar[j] = 0;
     contimpar=0;
   }
   
   
 }
 
 for(int i=0;i<5;i++) {
   if(impar[i]==0) break;
   printf("impar[%d] = %d\n",i,impar[i]);
 }
 
 
 for(int i=0;i<5;i++) {
   if(par[i]==0) break;
   printf("par[%d] = %d\n",i,par[i]);
 }
 
  
    return 0;
}