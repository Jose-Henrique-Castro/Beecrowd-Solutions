#include <stdio.h>

void numero_ao_contrario(long long *numero,long long array[10],int *indice) {
  while(*numero>0) {
  array[*indice] = *numero%10;
  (*indice)++;  
  *numero/=10;
}
}

int main()
{

long long num;
scanf("%llu",&num);
int i=0;
long long vetor[10];

numero_ao_contrario(&num,vetor,&i);
  
  for ( int j=0;j<i;j++) {
    printf("%llu",vetor[j]);
  }
  printf("\n");
  
    return 0;
}