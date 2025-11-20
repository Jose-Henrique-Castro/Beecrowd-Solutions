#include <stdio.h>
int main()
{
    int C , Y , X , i ;
    int soma ;
    
    scanf("%d",&C);
    
    for ( i=0 ; i<C ; i++ ) {
      scanf("%d%d",&Y,&X);
      soma = Y+X;
      if (soma==0) {
        printf("PROXYCITY\n");
      }
      if (soma==1) {
        printf("P.Y.N.G.\n");
      }
      if (soma==2) {
        printf("DNSUEY!\n");
      }
      if (soma==3) {
        printf("SERVERS\n");
      }
       if (soma==4) {
        printf("HOST!\n");
      }
       if (soma==5) {
        printf("CRIPTONIZE\n");
      }
      if (soma==6) {
        printf("OFFLINE DAY\n");
      }
      if (soma==7) {
        printf("SALT\n");
      }
       if (soma==8) {
        printf("ANSWER!\n");
      }
      if (soma==9) {
        printf("RAR?\n");
      }
      if (soma==10) {
        printf("WIFI ANTENNAS\n");
      }
      
    }
    
    
   return 0;
}