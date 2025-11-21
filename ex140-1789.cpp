#include <stdio.h>
#include <stdlib.h>
int nivel(int x){
    if (x<10) return 1;
    else if(x>=10 && x<20) return 2;
    else return 3;
}

int main()
{
  
  int testes;
  
  while(scanf("%d",&testes) !=EOF) {
    int velocidade , maior=0;
    
    for (int i=0;i<testes;i++){
      scanf("%d",&velocidade);
      if (velocidade>maior) {
       maior = velocidade;
      }
    }
    int nivel_final = nivel(maior);
    printf("%d\n",nivel_final);
  }
  
    return 0;
}