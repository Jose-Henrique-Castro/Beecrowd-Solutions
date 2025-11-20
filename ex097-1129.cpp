#include <stdio.h>
#include <string.h>
int main()
{
  
  // while ate linhas=0 
  // ler numero de linhas 
  // for com numero de linhas 
  // ler cada nota 
  // condicionar ligando ou não luz caso seja <= 127(preto)(1) ou >=  127(branco)(0)
  // imprima se marcou algo ou não.
  
  
  int linhas , vetor[5];
  scanf("%d",&linhas);
  while ( linhas !=0 ) {
    
    for (int i=0;i<linhas;i++) {
      for (int x=0;x<5;x++) {
        scanf("%d",&vetor[x]);
      }
      if ( vetor[0] <= 127 && vetor[1] >= 127 && vetor[2] >= 127 && vetor[3] >= 127 && vetor[4] >= 127 ) printf("A\n");
 else if ( vetor[0] >= 127 && vetor[1] <= 127 && vetor[2] >= 127 && vetor[3] >= 127 && vetor[4] >= 127 ) printf("B\n");
 else if ( vetor[0] >= 127 && vetor[1] >= 127 && vetor[2] <= 127 && vetor[3] >= 127 && vetor[4] >= 127 ) printf("C\n");
 else if ( vetor[0] >= 127 && vetor[1] >= 127 && vetor[2] >= 127 && vetor[3] <= 127 && vetor[4] >= 127 ) printf("D\n");
 else if ( vetor[0] >= 127 && vetor[1] >= 127 && vetor[2] >= 127 && vetor[3] >= 127 && vetor[4] <= 127 ) printf("E\n");
 else printf("*\n");
    }
    scanf("%d",&linhas);
  }
  
  
 
  return 0;
}