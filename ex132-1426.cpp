#include <stdio.h>
int main()
{
  int numer_testes;
  scanf("%d",&numer_testes);
  
  for ( int a=0;a<numer_testes;a++) {
    
    int matriz[9][9];
    
    for (int i=0; i<9;i++) {
      for (int j=0;j<9;j++) {
        if ( j>i ) matriz[i][j] = 0;
      }
    }
    
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&matriz[0][0],&matriz[2][0],&matriz[2][2],&matriz[4][0],&matriz[4][2],&matriz[4][4],&matriz[6][0],&matriz[6][2],&matriz[6][4],&matriz[6][6],&matriz[8][0],&matriz[8][2],&matriz[8][4],&matriz[8][6],&matriz[8][8]);

    
    for ( int j=1 ; j<9 ; j+=2) {
      matriz[8][j] = (matriz[6][j-1] - matriz[8][j-1] - matriz[8][j+1])/2;
    }
    
    for ( int i=7 ; i>=0 ; i-- ) {
      for ( int j=0;j<8;j++) {
        if (i>=j) matriz[i][j] = matriz[i+1][j]+matriz[i+1][j+1];
      }
    }
    
    for (int i=0; i<9;i++) {
      for (int j=0;j<9;j++) {
        if ( i>=j ) printf("%d",matriz[i][j]);
        if (j<i) printf(" ");
      }
      printf("\n");
    }
    
  }
  
    return 0;
}