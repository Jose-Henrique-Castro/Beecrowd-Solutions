#include <stdio.h>
int main()
{

  
  int rodadas;
  
  scanf("%d",&rodadas);
  int num_joga;
  int pulos;
  
  for (int i=0;i<rodadas;i++) {
    scanf("%d",&num_joga);
    scanf("%d",&pulos);
    
   
    int pos_sobrevivente=0;
    int j;
    for (j=2;j<=num_joga;j++) { // sem precisar eliminar 
        pos_sobrevivente = (pos_sobrevivente+pulos) % j;  // uso do % para atualizar a posição do sobrevivente de forma circular
        
    }

       printf("Case %d: %d\n",i+1,pos_sobrevivente+1);
  
  }
  
    return 0;
}