#include <stdio.h>
int main()
{
  
  double vol_mel;
  
  while(scanf("%lf\n",&vol_mel) != EOF ){ // volume de mel em m**3 
  double diametro ;
  scanf("%lf",&diametro); // diametro do recipiente
  
  double raio = diametro/2;
  double altura = vol_mel / (3.14*raio*raio);
  double area = 3.14*raio*raio;
  
  printf("ALTURA = %.2lf\n",altura);
  printf("AREA = %.2lf\n",area);
  
  }
  
   
  return 0;
}