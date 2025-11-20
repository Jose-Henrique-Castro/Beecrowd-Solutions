#include <stdio.h>
int main()
{
    int N , i, voto ;
    
    while (scanf("%d",&N) != EOF ) {
      int cont=0;
    
  
  for (i=0;i<N;i++) {
    scanf("%d",&voto); 
    cont += voto;
  }
    
     if (cont*3 >= N*2 ) {
      printf("impeachment\n");
    }
    else {
      printf("acusacao arquivada\n");
    }
    
  }
    
   return 0;
}