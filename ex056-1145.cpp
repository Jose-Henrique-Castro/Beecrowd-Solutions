#include <stdio.h>
int main()
{
   
int X , Y, add , add2 ;
scanf("%d%d",&X,&Y);

if ( X > 1 && X < 20 ) {
  if ( Y > X && Y < 100000 ){
    for ( add=1;add<=Y;add++) {
          printf("%d",add);
          if ( add % X == 0 ){
            printf("\n");
          }
          else {
            printf(" ");
          }
      }
    }
  }
   
   return 0;
}