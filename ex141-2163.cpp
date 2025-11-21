#include <stdio.h>

int matriz[1001][1001];

int main()
{
  int N,M;
  scanf("%d%d",&N,&M);
    int flag=0;
    
    for ( int i=0;i<N;i++){
      for (int j=0;j<M;j++){
        scanf("%d",&matriz[i][j]);
      }
    }
    
    for ( int i=1;i<N-1;i++){
      for (int j=1;j<M-1;j++){
        
        if (matriz[i][j]==42 && matriz[i-1][j-1]==7 && matriz[i-1][j]==7 && matriz[i-1][j+1]==7 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i+1][j-1]==7 && matriz[i+1][j]==7 && matriz[i+1][j+1]==7 ) {
          printf("%d %d\n",i+1,j+1);
          flag=1;
          return 0;
        }
        
        
      }
    }
    
    if(!flag) printf("0 0\n");
    
    
    
    return 0;
}