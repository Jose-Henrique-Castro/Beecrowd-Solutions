#include <stdio.h>
int main()
{
   
   int hora_inicial , hora_final , minuto_inicial , minuto_final , total_horas , total_minutos ;
   scanf("%d%d%d%d",&hora_inicial,&minuto_inicial,&hora_final,&minuto_final);
   
  total_minutos = minuto_final - minuto_inicial;
  total_horas = hora_final - hora_inicial;
  
  if (total_minutos < 0) {
    total_minutos += 60;
    total_horas -= 1;
  }
  
  if (total_horas < 0 ) {
    total_horas += 24;
  }
  
  if ( hora_inicial == hora_final && minuto_inicial == minuto_final ) {
    total_horas = 24;
    total_minutos = 0;
  }
  
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_horas,total_minutos);
   
   return 0;

}