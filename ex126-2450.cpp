#include <stdio.h>
int main()
{
  int N,M;
  scanf("%d%d",&N,&M);
  
  
  int matriz[N][M];
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      scanf("%d",&matriz[i][j]); // ler toda matriz
    }
  }
  
  int coluna_2_dif0 = -1;
  
 for (int i=0;i<N;i++) { // descobrir o primeiro numero diferente de 0
   int coluna_1_dif0 = -1;
    for (int j=0;j<M;j++) {
    if (matriz[i][j]!=0) {
        coluna_1_dif0=j; // coloca j sendo a posição dele
        break;
    }
    }
  
  
  if(coluna_1_dif0==-1) { // se toda linha for 0 , o resto todo tem que ser zero
    for (int k=i+1;k<N;k++) {
      for (int j=0;j<M;j++) {
        if ( matriz[k][j] != 0 ) {
          printf("N\n");
          return 0;
        }
      }
    }
  }
  else {
    if (coluna_1_dif0<=coluna_2_dif0) { // comparando se está a direita ou não , apartir da segunda avaliação;
      printf("N\n");
      return 0;
    } 
  }
  coluna_2_dif0=coluna_1_dif0; // primeira coluna vira a ultima para ir comparando se está a direita
  
 }
 printf("S\n");
 
    return 0;
}