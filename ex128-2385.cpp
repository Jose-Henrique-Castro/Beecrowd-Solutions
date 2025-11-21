#include <stdio.h>
int main()
{
  // ler numero das matrizes A , B , C (N)
  // ler parametros das matrizes ( P , Q , R , S) e o valor dos modulos de cada matriz ( X , Y )
  // descobrir matriz A e B pela formula 
  // multiplicar A*B para descobrir matriz C 
  // ler 2 numeros ( I , J ) que são as coordenadas de algum valor de C 
  // imprima esse valor da coordenada 
  
  // longlong para n dar problema com numero grande
  
  long long N;
  scanf("%lld",&N);
  long long A,B;
  long long C=0;
  long long I,J;
  
 long long P , Q , R , S , X , Y;
 scanf("%lld%lld%lld%lld%lld%lld",&P,&Q,&R,&S,&X,&Y);
 
 scanf("%lld%lld",&I,&J);
 
   for (int k=1;k<=N;k++) {
     A = (P*I+Q*k) % X; // usar o I , J e K para resolver apenas o caso especifico sem ter que montar matriz grande
     B = (R*k+S*J) % Y;
     C+= A*B;
   }
 
 printf("%lld\n",C);
 
 
    return 0;
}