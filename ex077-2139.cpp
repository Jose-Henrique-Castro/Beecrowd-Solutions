#include <stdio.h>
int main()
{
    
    int mes , dia , dia_ano , falta ;
    
    while (scanf("%d%d",&mes,&dia) != EOF){
      dia_ano = dia;
      if (mes>1) {dia_ano += 31;}
      if (mes>2) {dia_ano += 29;}
      if (mes>3) {dia_ano += 31;}
      if (mes>4) {dia_ano += 30;}
      if (mes>5) {dia_ano += 31;}
      if (mes>6) {dia_ano += 30;}
      if (mes>7) {dia_ano += 31;}
      if (mes>8) {dia_ano += 31;}
      if (mes>9) {dia_ano += 30;}
      if (mes>10) {dia_ano += 31;}
      if (mes>11) {dia_ano += 30;}
      falta = 360 - dia_ano;
      if(dia_ano==359) {printf("E vespera de natal!\n");}
      if(dia_ano==360) {printf("E natal!\n");}
      if(dia_ano>360) {printf("Ja passou!\n");}
      if(dia_ano<359) {printf("Faltam %d dias para o natal!\n",falta);}
      
      }
    
    
    return 0;
}