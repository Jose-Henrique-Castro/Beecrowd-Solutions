#include <stdio.h>
int main()
{
  
  int dia , mes , ano;
  while(scanf("%d/%d/%d",&dia,&mes,&ano) != EOF ) {
    int temp ; 
    
    temp = dia ; dia = mes ; mes = temp ;
    if ( dia<10 && mes<10 && ano<10) {
      printf("0%d/0%d/0%d\n",dia,mes,ano);
    }
    else if ( mes<10 && dia<10 ){
      printf("0%d/0%d/%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 && ano<10 ){
      printf("%d/0%d/0%d\n",dia,mes,ano);
    }
    
    else if ( dia<10 && ano<10 ){
      printf("0%d/%d/0%d\n",dia,mes,ano);
    }
    
     else if ( dia<10 ){
      printf("0%d/%d/%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 ){
      printf("%d/0%d/%d\n",dia,mes,ano);
    }
    
    else if ( ano<10 ){
      printf("%d/%d/0%d\n",dia,mes,ano);
    }
    
    else {
       printf("%d/%d/%d\n",dia,mes,ano);
    }
    
    temp = mes ; mes = dia ; dia = temp ;
    temp = dia ; dia = ano ; ano = temp ;
    
    if ( dia<10 && mes<10 && ano<10) {
      printf("0%d/0%d/0%d\n",dia,mes,ano);
    }
    else if ( mes<10 && dia<10 ){
      printf("0%d/0%d/%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 && ano<10 ){
      printf("%d/0%d/0%d\n",dia,mes,ano);
    }
    
    else if ( dia<10 && ano<10 ){
      printf("0%d/%d/0%d\n",dia,mes,ano);
    }
    
     else if ( dia<10 ){
      printf("0%d/%d/%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 ){
      printf("%d/0%d/%d\n",dia,mes,ano);
    }
    
    else if ( ano<10 ){
      printf("%d/%d/0%d\n",dia,mes,ano);
    }
    
    else {
       printf("%d/%d/%d\n",dia,mes,ano);
    }
    
    
    
    temp = ano ; ano = dia ; dia = temp ;
    
    if ( dia<10 && mes<10 && ano<10) {
      printf("0%d-0%d-0%d\n",dia,mes,ano);
    }
    else if ( mes<10 && dia<10 ){
      printf("0%d-0%d-%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 && ano<10 ){
      printf("%d-0%d-0%d\n",dia,mes,ano);
    }
    
    else if ( dia<10 && ano<10 ){
      printf("0%d-%d-0%d\n",dia,mes,ano);
    }
    
     else if ( dia<10 ){
      printf("0%d-%d-%d\n",dia,mes,ano);
    }
    
    else if ( mes<10 ){
      printf("%d-0%d-%d\n",dia,mes,ano);
    }
    
    else if ( ano<10 ){
      printf("%d-%d-0%d\n",dia,mes,ano);
    }
    
    else {
       printf("%d-%d-%d\n",dia,mes,ano);
    }
    
  }
  
  
   
}