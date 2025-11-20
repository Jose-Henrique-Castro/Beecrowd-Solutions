#include <stdio.h>
int main()
{
  float nota1 , nota2 ;

  
  while ( scanf("%f",&nota1) != EOF ) {
      
      float soma=0 , media ;
      int continua ;
      
      while (nota1<0 || nota1>10) {
      printf("nota invalida\n");
      scanf("%f",&nota1);
    }
    
    soma += nota1;
    
    scanf("%f",&nota2);
    
    while (nota2<0 || nota2>10) {
      printf("nota invalida\n");
      scanf("%f",&nota2);
    }
    
    soma+= nota2;
    
    media = soma/2.0;
    printf("media = %.2f\n",media);
    
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&continua);
    if (continua==2) {
      break;
    }
        while (continua<1 || continua>2) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&continua);
        if (continua==2) {
      break;
    }
        }
  }
  
    return 0;
}