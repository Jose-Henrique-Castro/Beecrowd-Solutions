#include <stdio.h>
#include <string.h>
int main()
{
// 1- ler quantas linhas tem o teste 
// 2- ler cada linha 
// 3- printf posição do vetor+1 da primeira linha menor que a anterior


int linhas;
scanf("%d",&linhas);
int num[linhas] , encontrou=0;
scanf("%d",&num[0]);

for (int i=1;i<linhas;i++) { // linhas do teste
int anterior = num[i-1];
scanf("%d",&num[i]);
if (num[i]<anterior && !encontrou ) {printf("%d\n",i+1); encontrou=1;}
  }
  if (!encontrou) printf("0\n");
  return 0;
}