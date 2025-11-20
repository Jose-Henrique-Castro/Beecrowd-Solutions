#include <stdio.h>
int main()
{
    int T , PA , PB , i ;
    double G1 , G2;
    
    scanf("%d",&T);
    
    for ( i=0 ; i<T ; i++ ) {
        int cont=0;
      scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);
      while (PB>=PA) {
        PA += PA*(G1/100);
        PB += PB*(G2/100);
        cont++;
        if (cont>100) {
            break;
        }
      }
      if (cont>100) {
       printf("Mais de 1 seculo.\n");
    }
    else {
      printf("%d anos.\n",cont);
    }
    }
    
   return 0;
}