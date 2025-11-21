#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  
  int  testes;
  scanf("%d",&testes);
  
  for (int i=0;i<testes;i++){
   int x=0; // inicio de índice da nova frase 
    
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char letras[51];
    scanf("%s",letras);
    
    int tam = strlen(letras);
    char novo_texto[tam];
    
    int deslocamento;
    scanf("%d",&deslocamento);
    
    for ( int j=0 ; j<tam ; j++) {
    for (int alf=0; alf<26 ; alf++ ) {
      if (letras[j] == alfabeto[alf]) {
        int novo_numero = ( alf - deslocamento + 26 ) % 26; // posição da letra no alfabeto + 1 ( porque indice começa em 0) menos o deslocamento de letras;
        novo_texto[x] = alfabeto[novo_numero];
        x++;
      }
    }
    
    }
    
    for ( int j=0 ; j<tam ; j++ ) {
      printf("%c",novo_texto[j]);
    }
    printf("\n");
      }
      
  
    return 0;
}