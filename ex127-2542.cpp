#include <stdio.h>
int main()
{
  
  // numero de atributos das cartas ( qtd_AT )
  // ler tamanho da linha dos dois (M e L)
  // matriz do tamanho do baralho de cartas de cada um (marcos[M][qtd_AT] leonardo[L][qtd_AT]) 
  // ler numeros do baralho dos dois (marcos[i][j] leonardo[i][j])
  // ler linha que eles escolheram (carta)
  // ler qual coluna foi usado (escolhido_AT)
  // if marcos[carta][escolhido_AT] > leonardo[carta][escolhido_AT] marcos ganha
  // else if ( marcos == leonardo ) empate 
  // else leonardo ganha 
  
  
  int qtd_AT;
 while(scanf("%d",&qtd_AT) == 1 ) { 
  
  int M , L;
  scanf("%d%d",&M,&L);
  
  int marcos[M][qtd_AT];
  int leonardo[L][qtd_AT];
  
  for (int i=0;i<M;i++) {
    for (int j=0;j<qtd_AT;j++) {
      scanf("%d",&marcos[i][j]);
    }
  }
  
  for (int i=0;i<L;i++) {
    for (int j=0;j<qtd_AT;j++) {
      scanf("%d",&leonardo[i][j]);
    }
  }
  
  int mar_linha , leo_linha;
  scanf("%d%d",&mar_linha,&leo_linha);
  
  mar_linha--;
  leo_linha--;
  
  int atr_usado;
  scanf("%d",&atr_usado);
  
  atr_usado--;
  
  if (marcos[mar_linha][atr_usado] > leonardo[leo_linha][atr_usado]) printf("Marcos\n");
  else if (marcos[mar_linha][atr_usado] == leonardo[leo_linha][atr_usado]) printf("Empate\n");
  else printf("Leonardo\n");
  
  
 }
    return 0;
}