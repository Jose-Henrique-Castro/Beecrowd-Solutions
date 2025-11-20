#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int altura_pulo , num_canos , anterior , altura_cano , i ;

scanf("%d%d",&altura_pulo,&num_canos); // 5 - 5
scanf("%d",&anterior); // altura do primeiro cano 


// 3
// 5 8 5 8

for (i=1;i<num_canos;i++) { // loop com o numero de canos menos o primeiro ( totalizando 1 no começo e 4 no loop = 5 )
  scanf("%d",&altura_cano);
  
  if(abs(anterior-altura_cano) > altura_pulo) {printf("GAME OVER\n"); return 0;}
  
  anterior = altura_cano;
}
printf("YOU WIN\n");

  return 0;
}

