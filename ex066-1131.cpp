#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int gremio , inter , continuar , grenais=0 , empates=0 , inter_vit=0 , grem_vit=0 ;
  
  scanf("%d",&inter);
  scanf("%d",&gremio);
  grenais++;
  
  if (inter>gremio) {
    inter_vit++;
  }
  else if (inter<gremio) {
    grem_vit++;
  }
  else {
    empates++;
  }
  
  printf("Novo grenal (1-sim 2-nao)\n");
  scanf("%d",&continuar);
  
  while ( continuar == 1 ) {
    scanf("%d",&inter);
  scanf("%d",&gremio);
  grenais++;
  
  if (inter>gremio) {
    inter_vit++;
  }
  else if (gremio>inter) {
    grem_vit++;
  }
  else {
    empates++;
  }
  printf("Novo grenal (1-sim 2-nao)\n");
  scanf("%d",&continuar);
  }
  
  printf("%d grenais\n",grenais);
  printf("Inter:%d\n",inter_vit);
  printf("Gremio:%d\n",grem_vit);
  printf("Empates:%d\n",empates);
  
  
  if ( inter_vit>grem_vit) {
    printf("Inter venceu mais\n");
  }
  else if (grem_vit>inter_vit) {
    printf("Gremio venceu mais\n");
  }
  else {
     printf("Nao houve vencedor\n");
  }
    
  
  return 0;
}