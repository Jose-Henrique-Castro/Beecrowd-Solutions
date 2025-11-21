#include <stdio.h>
int main()
{
  float matriz[12][12] , soma=0 , media;
  int cont=0;
  int linha;
  char escolha;
  scanf("%d",&linha);
  scanf(" %c",&escolha); 
  
  for (int i=0;i<12;i++) {
      for (int j=0;j<12;j++){
      scanf("%f",&matriz[i][j]);
    }
  }
  
  
  if ( escolha == 'S'){
    for (int i=0;i<12;i++) {
      for (int j=0;j<12;j++){
      if (j>i) soma += matriz[i][j];
    }
  }
    printf("%.1f\n",soma);
  }
  
  else if ( escolha =='M') {
     for (int i=0;i<12;i++) {
      for (int j=0;j<12;j++){
      if (j>i) { soma += matriz[i][j]; cont++; }
    }
  }
     media = soma/cont;
    printf("%.1f\n",media);
  }
  
  
  
    return 0;
}