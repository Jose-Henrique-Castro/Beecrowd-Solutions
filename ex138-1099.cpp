#include <stdio.h>

void num1_maior(int *x,int *y) {
    int aux;
   if (*y>*x) { aux=*x; *x=*y ; *y=aux;}
}

int main()
{
  
 int testes;
 scanf("%d",&testes);
 
 for ( int i=0 ; i<testes ; i++ ){
   int num1 , num2;
   int soma=0;
   scanf("%d%d",&num1,&num2);
   
   num1_maior(&num1,&num2);
   
   if ( num1+1 == num2  ) printf("0\n");
   else if ( num1 == num2 ) printf("0\n");
   
   else if (num1>num2) {
     for ( int i=num2+1 ; i<num1 ; i++ ) {
       if(i%2!=0) soma+= i;
     }
      printf("%d\n",soma);
   }
 }
  
    return 0;
}