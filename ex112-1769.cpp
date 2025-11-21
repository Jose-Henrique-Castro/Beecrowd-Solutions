#include <stdio.h>
int main()
{
  
  int cpf[11];
  while (scanf(" %1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",
&cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4], &cpf[5],
&cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]) == 11) { // enquanto scanf conseguir ler 11 numeros

   
    int soma_b1 = 0;
    int soma_b2 = 0;
    int b1,b2;
    int aprovado1 = 0;
    int aprovado2 = 0;
     
  
 for (int i=0,x=1;i<9;i++,x++) {
      soma_b1 += cpf[i]*x;
  }
  
  b1 = soma_b1%11;
  if (b1==10) b1=0;
  if (b1==cpf[9]) aprovado1=1;
    
    soma_b2=0;
    for (int i=0,x=9;i<9;i++,x--) {
      soma_b2 += cpf[i]*x;
  }
    
  b2 = soma_b2%11;
  if (b2==10) b2=0;
  if (b2==cpf[10]) aprovado2=1;
  
  if (aprovado1==1 && aprovado2==1 ) printf("CPF valido\n"); 
  else printf("CPF invalido\n");
  
 
  }
  
    return 0;
}