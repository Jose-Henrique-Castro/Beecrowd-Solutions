#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int N , i ;
float media , soma , maior , menor , GD , N1,N2,N3,N4,N5,N6,N7;
char nome[20] ;

scanf("%d",&N);
if ( N>=0 && N<=100) {
  for (i=0;i<N;i++) {
  scanf("%s",nome);
  scanf("%f",&GD);
  scanf("%f%f%f%f%f%f%f",&N1,&N2,&N3,&N4,&N5,&N6,&N7);
  if (GD>=1.2 && GD<=3.8 && N1>=0 && N1<=10.0 && N2>=0 && N2<=10.0 && N3>=0 && N3<=10.0 
  && N4>=0 && N4<=10.0 && N5>=0 && N5<=10.0 && N6>=0 && N6<=10.0 && N7>=0 && N7<=10.0 ) {
  maior = fmax(fmax(fmax(fmax(fmax(fmax(N1,N2),N3),N4),N5),N6),N7);
  menor = fmin(fmin(fmin(fmin(fmin(fmin(N1,N2),N3),N4),N5),N6),N7);
  soma = (N1+N2+N3+N4+N5+N6+N7) - (maior+menor);
  media = soma*GD;
printf("%s %.2f\n",nome,media);
  }
  
}
}


  return 0;
}