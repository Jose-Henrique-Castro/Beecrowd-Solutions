#include <stdio.h>

int troca_caractere(char c){
  
  switch(c){
    case 'j':
    case 'p':
    case 's':
    case 'v':
    case 'b':
    case 'f':
    case 'x':
    case 'z':
      return 'f';
    
    case 'J':
    case 'P':
    case 'S':
    case 'V':
    case 'B':
    case 'F':
    case 'X':
    case 'Z':
      return 'F';
      
  default:
  return c;
  }
  
}

int main()
{
  
char c1=' ';
char frase;

while((frase=getchar()) && frase != EOF){
  char caractere_novo = troca_caractere(frase);
  if((caractere_novo=='f' || caractere_novo=='F') && (c1=='f' || c1=='F')) {}
  else putchar(caractere_novo);
  c1 = caractere_novo;
}
  
  return 0;
}