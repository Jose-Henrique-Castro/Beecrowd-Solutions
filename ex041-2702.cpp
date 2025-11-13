#include <stdio.h>
#include <stdlib.h>
int main()
{
    
  int Ca , Ba , Pa ;
  int Cr , Br , Pr , ref1 , ref2, ref3 , total=0;
  
  scanf("%d%d%d",&Ca,&Ba,&Pa);
  scanf("%d%d%d",&Cr,&Br,&Pr);
  
   ref1 = Cr - Ca ;
   if ( ref1 > 0 ) {
     total += ref1;
   }
  
  ref2 = Br - Ba;
  if (ref2 > 0 ){
    total += ref2;
  }
  
  ref3 = Pr - Pa ;
  if ( ref3 > 0 ){
    total += ref3;
  }
  
  printf("%d\n",total);
  
    return 0; 
}