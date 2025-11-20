#include <stdio.h>
#include <stdlib.h>
int main()
{
  
  int rena1 , rena2 , rena3 , rena4 , rena5 ;
  int rena6 , rena7 , rena8 , rena9 , total ;
  
  scanf("%d%d%d%d%d",&rena1,&rena2,&rena3,&rena4,&rena5);
  scanf("%d%d%d%d",&rena6,&rena7,&rena8,&rena9);
  
  total = rena1+rena2+rena3+rena4+rena5+rena6+rena7+rena8+rena9;
  
  while ( total >= 0 ) {
    
    total--;
    if (total==0) {printf("Dasher\n"); break;}
    
    total--;
    if (total==0) {printf("Dancer\n"); break;}
    
    total--;
    if (total==0) {printf("Prancer\n"); break;}
    
    total--;
    if (total==0) {printf("Vixen\n"); break;}
    
    total--;
    if (total==0) {printf("Comet\n"); break;}
    
    total--;
    if (total==0) {printf("Cupid\n"); break;}
    
    total--;
    if (total==0) {printf("Donner\n"); break;}
    
    total--;
    if (total==0) {printf("Blitzen\n"); break;}
    
    total--;
    if (total==0) {printf("Rudolph\n"); break;}
    
  }

    return 0;
}