#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

int QT , N , M , i , soma ;
char nome1[100] , nome2[100] , escolha1[10] , escolha2[10];

scanf("%d",&QT);

if ( QT >= 1 && QT <= 100 ) {
  for ( i=0 ; i<QT ; i++ ) {
    scanf("%s %s %s %s",nome1,escolha1,nome2,escolha2);
    scanf("%d%d",&N,&M);
    
      soma = N+M;
    if ( soma % 2 == 0 ) {
      if(strcmp (escolha1,"PAR") == 0 ){
        printf("%s\n",nome1);
      }
      else {
      printf("%s\n",nome2);
    }
    }
    else {
      if(strcmp(escolha1,"IMPAR") == 0 ) {
        printf("%s\n",nome1);
      }
      else {
        printf("%s\n",nome2);
      }
    }
    }
  }


  return 0;
}