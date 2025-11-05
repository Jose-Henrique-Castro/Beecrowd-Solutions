#include <stdio.h>
#include <math.h>

int main()
{
    
double N;
int valor;
int nota100 , nota50 , nota20 , nota10 , nota5 , nota2;
int moeda1 , moeda050 , moeda025 , moeda010, moeda005 , moeda001;
   
   scanf("%lf",&N);
   
   valor = (int)(N*100+0.5);
   
   printf("NOTAS:\n");
   
   nota100 = valor / 10000;
   valor = valor % 10000;
   printf("%d nota(s) de R$ 100.00\n",nota100);
   
   nota50 = valor / 5000;
   valor = valor % 5000;
   printf("%d nota(s) de R$ 50.00\n",nota50);
   
   nota20 = valor / 2000;
   valor = valor % 2000;
   printf("%d nota(s) de R$ 20.00\n",nota20);
   
   nota10 = valor / 1000;
   valor = valor % 1000;
   printf("%d nota(s) de R$ 10.00\n",nota10);
   
   nota5 = valor / 500;
   valor = valor % 500;
   printf("%d nota(s) de R$ 5.00\n",nota5);
   
   nota2 = valor / 200;
   valor = valor % 200;
   printf("%d nota(s) de R$ 2.00\n",nota2);
   
   printf("MOEDAS:\n");
   
   moeda1 = valor / 100;
   valor = valor % 100;
   printf("%d moeda(s) de R$ 1.00\n",moeda1);
   
   moeda050 = valor / 50;
   valor = valor % 50;
   printf("%d moeda(s) de R$ 0.50\n",moeda050);
   
   moeda025 = valor / 25;
   valor = valor % 25;
   printf("%d moeda(s) de R$ 0.25\n",moeda025);
   
   moeda010 = valor / 10;
   valor = valor % 10;
   printf("%d moeda(s) de R$ 0.10\n",moeda010);
   
   moeda005 = valor / 5;
   valor = valor % 5;
   printf("%d moeda(s) de R$ 0.05\n",moeda005);
   
   moeda001 = valor / 1;
   valor = valor % 1;
   printf("%d moeda(s) de R$ 0.01\n",moeda001);
   
    return 0; 
}