#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int cont , p , N , D , dia , mes , ano , i , i_ , encontrou ;
while (scanf("%d%d",&N,&D) != EOF) { 
    encontrou=0; 
    for(i=0;i<D;i++) {
    cont=0;
   scanf("%d/%d/%d",&dia,&mes,&ano);
  for (i_=0;i_<N;i_++) {
    scanf(" %d",&p); 
    if ( p == 1 ) {cont++;}
  }
  if (!encontrou && cont == N) {
  printf("%d/%d/%d\n",dia,mes,ano);
  encontrou = 1;
  }
}
if (!encontrou) {
    printf("Pizza antes de FdI\n");
}
} 
  return 0;
}