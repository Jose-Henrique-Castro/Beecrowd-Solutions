#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

int T , i , B ; 
int Ai1 , Di1 , Li1 , ValorGolpe1 ;
int Ai2 , Di2 , Li2 , ValorGolpe2 ;

scanf("%d",&T);

for (i=0;i<T;i++) {
    scanf("%d",&B);
  if( B>=0 && B<=100 ) {
  scanf("%d%d%d",&Ai1,&Di1,&Li1);
  if ( Ai1>=0 && Ai1<=100 && Di1>=0 && Di1<=100 && Li1>=1 && Li1<=50 ) {
    ValorGolpe1 = (Ai1+Di1)/2;
    if (Li1 % 2 == 0){
      ValorGolpe1 += B;
    }
  }
  scanf("%d%d%d",&Ai2,&Di2,&Li2);
  if ( Ai2>=0 && Ai2<=100 && Di2>=0 && Di2<=100 && Li2>=1 && Li2<=50 ) {
    ValorGolpe2 = (Ai2+Di2)/2;
    if (Li2 % 2 == 0){
      ValorGolpe2 += B;
    }
  }
}
if(ValorGolpe1>ValorGolpe2) {
  printf("Dabriel\n");
}
else if(ValorGolpe2>ValorGolpe1) {
  printf("Guarte\n");
}
else {
  printf("Empate\n");
}
}





  return 0;
}