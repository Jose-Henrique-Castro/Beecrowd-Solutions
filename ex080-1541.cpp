#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int L , A , B , C;
scanf("%d%d%d",&A,&B,&C);
L = sqrt(A*B*100/C);

while(A!=0) {
  printf("%d\n",L);
  scanf("%d%d%d",&A,&B,&C);
  L = sqrt(A*B*100/C);
}
  

  return 0;
}