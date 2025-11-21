#include <stdio.h>
#include <math.h> 

int main()
{
 
 int N;
 while ( scanf("%d",&N) && N != 0 ) { // tamanho da matriz ( linhas/colunas); // 4x4 
 
 int matriz[N][N];
 int y=1;
int x=1;

 for (int linhas=0;linhas<N;linhas++) {
   y=x; 
   for ( int colunas=0;colunas<N;colunas++) {
       matriz[linhas][colunas] = y;
   y *=2;
   }
   x*=2;
 }
 
 
int maior = matriz[N-1][N-1]; // maior numero da matriz

int largura = (int)log10(maior) + 1; // usar função log para n precisar usar while

for (int i=0;i<N;i++) {
  for (int j=0;j<N;j++) {
    printf("%*d",largura,matriz[i][j]); // com tamanho calculado , se tiver número o espaçamento diminui ate atingir o valor maximo de tamanho do numero maior
    
    if (j!= N-1) {printf(" ");} // para nao imprimir espaço extra depois da ultima coluna e colocar espaçamento normal para distanciar os numeros
  
  }
  printf("\n");
}
 printf("\n"); // para separar as matrizes 

 }
 
 
    return 0;
}