#include <stdio.h>
int main()
{
  
  int casos , x ; // repetir até "casos" vezes
  
  scanf("%d", &casos);
  
  for (x=0;x<casos;x++) {
    
    int N , i , perfeito;
    
       scanf("%d",&N);
       
       perfeito=0;
    
    for (i=1;i<=N/2;i++) {
    if (N%i==0) {perfeito += i;} // O que for divisivel por N adiciona em perfeito
  }
  
  if (perfeito==N) {
    printf("%d eh perfeito\n",N);
  }
  else {
    printf("%d nao eh perfeito\n",N);
  }
    
  }
  
  
  return 0;
}