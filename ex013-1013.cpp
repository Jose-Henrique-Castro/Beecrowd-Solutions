#include <stdio.h>
#include <stdlib.h>
int main()
{
    
int maior_ab , maior_final , a , b , c;
scanf("%d%d%d",&a,&b,&c);
maior_ab = ( a + b + abs(a - b))/2;
maior_final = ( maior_ab + c + abs(maior_ab - c))/2;
printf("%d eh o maior\n",maior_final);

}