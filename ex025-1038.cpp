#include <stdio.h>
int main()
{
    
    int N , X ; 
    float hotdog , xsalada , xbacon , torrada , refri , soma=0;
    
    scanf ("%d%d",&N,&X);
    
    hotdog = 4.00 ;
    xsalada = 4.50 ; 
    xbacon = 5.00 ;
    torrada = 2.00 ;
    refri = 1.50 ;
    
    
    if (N==1) {
      soma += (hotdog*X);
    }
    
    if (N==2) {
      soma += (xsalada*X);
    }
    
    if (N==3) {
      soma += (xbacon*X);
    }
    
    if (N==4) {
      soma += (torrada*X);
    }
    
    if (N==5) {
      soma += (refri*X);
    }
    
    printf("Total: R$ %.2f\n",soma);
    
    
    
    return 0; 
}