#include <stdio.h>
#include <stdlib.h>
int main() {

int N , i; // N=0 , L=1 , S=2 , O=3 
char c ;

while (scanf("%d",&N) && N != 0 ) {
    int direçao=0 ;
  
  for (i=0;i<N;i++){
    scanf(" %c",&c);
  
  if (c=='D') {
    direçao++;
  } 
  if (c=='E') {
      direçao--;
  }
   if (direçao==4) {direçao=0;}
   if (direçao==-1) {direçao=3;}
  }
  
  if (direçao==0) {
  printf("N\n");
}
if (direçao==1) {
  printf("L\n");
}
if (direçao==2) {
  printf("S\n");
}
if (direçao==3){
  printf("O\n");
}
  
}




  return 0;
}