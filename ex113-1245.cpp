#include <stdio.h>
int main()
{
  
  int qtd_tenis;
  
  while(scanf("%d",&qtd_tenis)==1) {
   
   int tamanho;
   char pe;
   int direito[61];
   int esquerdo[61];
   int pares=0;
   
   for(int i=0;i<61;i++) {
     direito[i] = 0;
     esquerdo[i] = 0;
   }
   
   for (int i=0;i<qtd_tenis;i++) {
     scanf("%d %c",&tamanho,&pe);
     
     if (pe=='E') esquerdo[tamanho]++;
     if (pe=='D') direito[tamanho]++;
     
   }
   
   for ( int i=30;i<61;i++) {
     if ( direito[i] > 0 && esquerdo[i] > 0 && direito[i] >= esquerdo[i]) { 
       pares+=esquerdo[i];
     }
     else if ( direito[i] > 0 && esquerdo[i] > 0 && direito[i] <= esquerdo[i]) {
       pares+=direito[i];
     }
   }
   
   printf("%d\n",pares);
   
  }
  
    return 0;
}