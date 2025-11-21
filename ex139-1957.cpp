#include <stdio.h>
#include <math.h>

void decimal_para_hexadecimal (long long *x) {
    
    long long resto;
 
 char hexadecimal[100];
 
 int i=0;
 
 while ( *x>0 ) {
     resto = *x%16;
     
     if (resto<10){
         hexadecimal[i] = resto + '0';
     }
     
     else hexadecimal[i] = (resto - 10) + 'A';
     *x/=16;
     i++;
 }
 for ( int j=i-1; j>=0 ; j--) {
     printf("%c",hexadecimal[j]);
 }
    
}

int main()
{
  
 long long num;
 scanf("%lld",&num);

decimal_para_hexadecimal(&num);
printf("\n");
    return 0;
}