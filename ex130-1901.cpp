#include <stdio.h>
int main()
{
  
  int N;
  scanf("%d",&N);
  
  int floresta[N][N];
  int x=N*2;
  int especies[1001] = {0};
 
  
  for (int linha=0; linha<N ; linha++ ) {
    for ( int coluna=0 ; coluna<N ; coluna++ ) {
      scanf("%d",&floresta[linha][coluna]);
    }
  }
  
  for (int i=0; i<x ; i++ ) {
    int a;
    int b;
    scanf("%d%d",&a,&b);
    a--;
    b--;
    
    int animais_vistos = floresta[a][b];
    especies[animais_vistos] = 1;
    
  }
  
  int cont=0;
  
    for ( int k=0 ; k<1001 ; k++ ) {
     if (especies[k]==1) cont++;
    }
   
   printf("%d\n",cont);
  
    return 0;
}