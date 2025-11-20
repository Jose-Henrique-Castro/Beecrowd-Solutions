#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   
   char sheldon[20] , raj[20];
   int T , i;
   scanf("%d",&T);
   
   if ( T<=100 ) {
     for(i=1;i<=T;i++){
       scanf("%s",sheldon);
       scanf("%s",raj);
       
       if ((strcmp(sheldon, "pedra") == 0) && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "lagarto") == 0)) {
         printf("Caso #%d: Bazinga!\n",i);
       }
       else if ((strcmp(raj, "pedra") == 0) && (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "lagarto") == 0)) {
         printf("Caso #%d: Raj trapaceou!\n",i);
       }
       else if ((strcmp(sheldon, "tesoura") == 0) && (strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)) {
         printf("Caso #%d: Bazinga!\n",i); 
     }
     else if ((strcmp(raj, "tesoura") == 0) && (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0)) {
         printf("Caso #%d: Raj trapaceou!\n",i);
   }
   
   else if ((strcmp(sheldon, "papel") == 0) && (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)) {
         printf("Caso #%d: Bazinga!\n",i);
   }
   else if ((strcmp(raj, "papel") == 0) && (strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "Spock") == 0)) {
         printf("Caso #%d: Raj trapaceou!\n",i);
   }
   else if ((strcmp(sheldon, "lagarto") == 0) && (strcmp(raj, "papel") == 0 || strcmp(raj, "Spock") == 0)) {
         printf("Caso #%d: Bazinga!\n",i);
   }
   else if ((strcmp(raj, "lagarto") == 0) && (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "Spock") == 0)) {
         printf("Caso #%d: Raj trapaceou!\n",i);
   }
   else if ((strcmp(sheldon, "Spock") == 0) && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0)) {
         printf("Caso #%d: Bazinga!\n",i);
   }
   else if ((strcmp(raj, "Spock") == 0) && (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0)) {
         printf("Caso #%d: Raj trapaceou!\n",i);
   }
   else {
     printf("Caso #%d: De novo!\n",i);
   }
   
   }
  
   }
  return 0;
}