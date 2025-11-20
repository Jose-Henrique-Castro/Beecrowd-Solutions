#include <stdio.h>
int main()
{
  
  int N , i;
  long double raiz10 ;
  long double denominador = 6;
  scanf("%d",&N);
  
  
  if (N==0) {
    raiz10 = 3.0;
  }
  
  else if (N==1) {
    raiz10 = 3.0 + 1.0/denominador;
  }
  
  else  {
    for (i=1;i<N;i++) {
    denominador = 6.0 + (1.0/denominador);
  }
  raiz10 = 3.0 + 1.0/denominador;
  }
  
  
  printf("%.10Lf\n",raiz10);
  
  
  return 0;
}