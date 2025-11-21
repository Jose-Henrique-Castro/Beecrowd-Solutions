#include <stdio.h>

int soma(int x,int y){
  
  int s=x+y;
  return s;
  
}


int main()
{
  
  int par=0;
  int impar=0;
  int escolha; // jogador1 decide se quer par(1) ou ímpar(0)
  int jogador1; // numero escolhido do jogador 1
  int jogador2; // numero escolhido do jogador 2
  int roubo; // jogador1 decidade se rouba(1) ou não rouba(0)
  int acuso; // jogador2 decide se acusa o jogador1 de roubo(1) ou não acusa(0)
  
  scanf("%d %d %d %d %d",&escolha,&jogador1,&jogador2,&roubo,&acuso);
  
  int total = soma(jogador1,jogador2);
  
  if(roubo && !acuso) printf("Jogador 1 ganha!\n");
  else if(roubo && acuso) printf("Jogador 2 ganha!\n");
  else if (!roubo && acuso) printf("Jogador 1 ganha!\n");
  else { // !roubo && !acuso
    if((total%2==0 && escolha ) || (total%2!=0 && !escolha)) printf("Jogador 1 ganha!\n");
    else printf("Jogador 2 ganha!\n"); 
  }
  
    return 0;
}