#include <stdio.h>
int main()
{
  
  int N,M;
  while(scanf("%d%d",&N,&M)  && N!=0 && M!=0) {
    
    int matriz[N][M];
    int  x=250001;
    int vetor[x];
    int numero;
    
    for (int i=0;i<x;i++){
        vetor[i] = 0;
    }
    
    for (int i=0;i<N;i++){
      for (int j=0;j<M;j++) {
        scanf("%d",&matriz[i][j]);
      numero = matriz[i][j];
      vetor[numero]++;
      }
    }
    
    
    int maior=0;
    int segundo_maior=0;
    int posiçao_maior;
    int posiçao_segundo_maior;
    for (int i=0;i<x;i++) {
      if ( vetor[i]>maior ) {
        segundo_maior = maior;
        posiçao_segundo_maior=posiçao_maior;
        maior=vetor[i];
        posiçao_maior=i;
    }
    else if ( vetor[i]<maior && vetor[i]>segundo_maior) {
      segundo_maior = vetor[i];
      posiçao_segundo_maior = i;
    }
  }
  
for (int i = 0; i < x; i++) {
    if (vetor[i] == segundo_maior) {
        printf("%d ", i); 
    }
}
printf("\n");
  }
    return 0;
    
}