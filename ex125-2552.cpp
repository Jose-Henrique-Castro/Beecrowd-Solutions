#include <stdio.h>
int main()
{
  int N,M;
  while(scanf("%d%d",&N,&M) == 2) { 
    int matriz[N][M];
    int resultado[N][M];
    
    for (int i=0;i<N;i++) {
      for (int j=0;j<M;j++) {
        scanf("%d",&matriz[i][j]);
      }
    }
    
    for (int i=0;i<N;i++) {
      for (int j=0;j<M;j++) {
        if(matriz[i][j]==1) resultado[i][j] = 9;
        if(matriz[i][j]==0) {
      int cont=0;
          if (j < M-1 && matriz[i][j+1]==1) cont++;
          if (j>0 && matriz[i][j-1]==1) cont++;
          if (i < N-1 && matriz[i+1][j]==1) cont++;
          if (i>0 && matriz[i-1][j]==1) cont++;
          resultado[i][j] = cont;
        }
      }
    }
    
     for (int i=0;i<N;i++) {
      for (int j=0;j<M;j++) {
        printf("%d",resultado[i][j]);
      }
      printf("\n");
    }
    
  }
  
  
  
  
    return 0;
}