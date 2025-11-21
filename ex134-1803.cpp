#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  
  char matring[4][83]; // le 4 strings de ate 82 caracteres cada por garantia
  int F,L,M; // primeira , ultima e colunas do meio;

  for ( int i=0 ; i<4 ; i++) { // ler as 4 colunas com o codigo
    scanf("%s",matring[i]);
  }
  
  int numero_colunas = strlen(matring[0]);
  char coluna_temp[5];
  
  int k=0;
  for ( int i=0;i<4;i++) {
    coluna_temp[k] = matring[i][0];
    k++;
  }
  coluna_temp[4] = '\0';
  F = atoi(coluna_temp);
  
  int j=0;
  for ( int i=0;i<4;i++) {
    coluna_temp[j] = matring[i][numero_colunas-1];
    j++;
  }
  coluna_temp[4] = '\0';
  L = atoi(coluna_temp);
  
  for ( int i=1 ; i<numero_colunas-1;i++) { // ler as colunas do meio ( tira a primeira[0] e a última[3] )
  
  for ( int a=0 ; a<4 ; a++ ) { // copiar colunas do meio
    coluna_temp[a] = matring[a][i];
  }
  coluna_temp[4] = '\0';
  M = atoi(coluna_temp);
  
  char C = (F*M+L)%257; // mod para n ultrapassar o maximo de elementos da tabela ASCII
  
  
  printf("%c", C);
  
  }
  
 printf("\n");
  
    return 0;
}