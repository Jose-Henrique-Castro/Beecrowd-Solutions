#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int A1,A2,A3;
    scanf("%d%d%d",&A1,&A2,&A3);

    int maquina_andar1 = A2*2 + A3*4;
    int maquina_andar2 = A1*2 + A3*2;
    int maquina_andar3 = A2*2 + A1*4;
    
    if ( maquina_andar1 == maquina_andar2 || maquina_andar1 == maquina_andar3 ) {
      printf("%d\n",maquina_andar1);
    }
    
    else if ( maquina_andar2 == maquina_andar3 ) {
      printf("%d\n",maquina_andar2);
    }
    
    else {
      
      if ( maquina_andar1 <= maquina_andar2 && maquina_andar1 <= maquina_andar3 ) {
      printf("%d\n",maquina_andar1);
    }
    
    if ( maquina_andar2 <= maquina_andar1 && maquina_andar2 <= maquina_andar3 ) {
      printf("%d\n",maquina_andar2);
    }
      
    if ( maquina_andar3 <= maquina_andar2 && maquina_andar3 <= maquina_andar1 ) {
      printf("%d\n",maquina_andar3);
    }
      
    }
    
      
  return 0;
}