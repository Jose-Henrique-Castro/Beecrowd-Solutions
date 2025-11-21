#include <stdio.h>
int main()
{
    
    // contar quantas notas iguais 
    // em caso de empate na quantidade imprima o numero maior 
    
    int alunos ;
    scanf("%d",&alunos);
    int notas[alunos];
    int cont_max = 0 ;
    int nota_frequente;
    
    for (int i=0;i<alunos;i++) {
      scanf("%d",&notas[i]);
    }
    
    for (int i=0;i<alunos;i++) { // laço para contar cada nota 
      
      int cont=0;
      
      for (int j=0;j<alunos;j++) { // contar quantas vezes a nota aparece ( laço dentro de outro )
        if (notas[j] == notas[i]) cont++; // exemplo: 3
      }
      
      
      if (cont > cont_max) { // comparar os conts e descobrir qual tem mais frequencia
        cont_max = cont;
        nota_frequente = notas[i]; // determina que a nota mais frequente é a atual
      }
      else if ( cont==cont_max && notas[i] > nota_frequente ) nota_frequente = notas[i]; 
      // se 2 conts forem iguais a nota mais frequente a ser impressa é a maior.
      // so precisa colocar nota_frequente = notas[i] caso a nota atual seja maior que a ultima.
    }
    
    printf("%d\n",nota_frequente);
    
    
    return 0;
}