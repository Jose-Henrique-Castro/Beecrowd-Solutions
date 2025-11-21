#include <stdio.h>
#include <string.h>

int main()
{
  char num[101];
  
 scanf("%s",num);
 
 int tam = strlen(num);
  int cont = 0;
  for ( int i=0 ; i<tam ; i++) {
    printf("%c",num[i]);
 if (num[i]=='1') cont++;
  }
  if(cont%2==0) printf("0\n");
  else printf("1\n");
  
    return 0;
}