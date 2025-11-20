#include <stdio.h>
#include <string.h>
int main()
{

// ler quantidade de jogadores "linhas" ---------------
// ler nome do jogador -------------------
// ler tenteSBA[linhas]
// ler pontosSBA[linhas]
// somar total de tentativas tenteSBA[linhas]
// soma total de pontos pontosSBA[linhas]
// obs: acumular numeros a cada leitura dentro dos vetores
// regra de tres para descobrir porcentagem ( (total_B1*100)/total_B )
// imprimir porcentagens 

int linhas;
scanf("%d",&linhas); // ler quantos jogadores participarão da porcentagem
int tenteSBA[3]; // ler tentativas de cada jogador
int pontosSBA[3] ; // ler pontos feitos nas tentativas de cada jogador
float somatent0 = 0 ;
float somatent1=0 ;
float somatent2=0 ; // acumular tentativas 
float somapontos0 = 0;
float somapontos1 = 0 ;
float somapontos2 = 0; // acumular os pontos
char nome[10]; // declaração para ler nome

for(int i=0;i<linhas;i++) { 
  scanf("%s",nome);
  
  scanf("%d",&tenteSBA[0]);
  somatent0 += tenteSBA[0];
  scanf("%d",&tenteSBA[1]);
  somatent1 += tenteSBA[1];
  scanf("%d",&tenteSBA[2]);
  somatent2 += tenteSBA[2];
  
  scanf("%d",&pontosSBA[0]);
  somapontos0 += pontosSBA[0];
  scanf("%d",&pontosSBA[1]);
  somapontos1 += pontosSBA[1];
  scanf("%d",&pontosSBA[2]);
  somapontos2 += pontosSBA[2];
  
}
double porcen_S , porcen_B , porcen_A; 

porcen_S = (somapontos0*100) / somatent0;
porcen_B = (somapontos1*100) / somatent1;
porcen_A = (somapontos2*100) / somatent2;

printf("Pontos de Saque: %.2lf %%.\n",porcen_S);
printf("Pontos de Bloqueio: %.2lf %%.\n",porcen_B);
printf("Pontos de Ataque: %.2lf %%.\n",porcen_A);

  return 0;
}




