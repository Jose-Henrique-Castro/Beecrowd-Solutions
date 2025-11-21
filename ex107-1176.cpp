#include <stdio.h>
int main()
{
  
  long long int testes , num;
  long long int fib[61];
  scanf("%lld",&testes);
  fib[0] = 0;
  fib[1] = 1;
  fib[2] = 1;
  for(int i=3;i<=60;i++) {
    fib[i] = fib[i-1] + fib[i-2]; // fib3 = fib2 + fib1;
  }
  for (int i=0;i<testes;i++) {
    scanf("%lld",&num);
    printf("Fib(%lld) = %lld\n",num,fib[num]);
  }
  
  
    return 0;
}