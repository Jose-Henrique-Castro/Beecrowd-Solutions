#include <stdio.h>
int main()
{
  
  long fat1 , fat2 , soma;
  
  while ( scanf("%ld%ld",&fat1,&fat2) != EOF ) {
    
    if(fat1==0) {
     fat1++;
    }
    
    if (fat2==0) {
      fat2++;
    }
    
    long conta1 = fat1-1 ;
    while ( conta1>0) {
       fat1 *= conta1 ;
    conta1--;
    }
    
    long conta2 = fat2-1 ;
    while ( conta2>0) {
       fat2 *= conta2 ;
    conta2--;
    }
    
    soma = fat1+fat2;
    printf("%ld\n",soma);
    
  }
  
    return 0;
}