#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    int A , B , C;
    scanf("%d%d%d",&A,&B,&C);
    
    if (A>=B && A>=C && B>=C){
      printf("%d\n%d\n%d\n",C,B,A);
      
    }
    if (A>=B && A>=C && C>=B){
      printf("%d\n%d\n%d\n",B,C,A);
      
    }
    if (B>=A && B>=C && A>=C){
      printf("%d\n%d\n%d\n",C,A,B);
      
    }
    if (B>=A && B>=C && C>=A){
      printf("%d\n%d\n%d\n",A,C,B);
      
    }
    if (C>=A && C>=B && A>=B){
      printf("%d\n%d\n%d\n",B,A,C);
      
    }
    if (C>=A && C>=B && B>=A){
      printf("%d\n%d\n%d\n",A,B,C);
      
    }
    
    printf("\n%d\n%d\n%d\n",A,B,C);
    
    return 0;
}