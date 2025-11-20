#include <stdio.h>
#include <stdlib.h>
int main()
{
  int linhas , i=0;
  
  scanf("%d",&linhas);
  
  while ( linhas > i) {
    int ano , pos;
    scanf("%d",&ano);
    int tempo2015=0;
    
    tempo2015 = ano - 2015;
    
    if (tempo2015<0) {
      pos = abs(tempo2015);
      printf("%d D.C.\n",pos);
    }
    
    else {
      tempo2015++;
      printf("%d A.C.\n",tempo2015);
    }
    
    i++;
  }
  
    return 0;
}