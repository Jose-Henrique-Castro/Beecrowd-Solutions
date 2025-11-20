#include <stdio.h>

int main() {
  
  // 1- ler quantos mata matas tera 
  // 2- ler partida 1 ( time1 mandante ) e partida 2 ( time2 mandante )
  // 3- ver quem venceu com base as condições 
  
  
  int loop ;
  scanf("%d",&loop);
  
  for (int i=0; i<loop ; i++ ) { // 1-Quantos mata matas irei ler 
    int time1 , time2 , pontos_time1=0 , pontos_time2=0 , gols_time1=0 , gols_time2=0 , gols_adver_time2, gols_adver_time1 ;
    
    scanf("%d x %d",&time1,&time2); // 2- ler partida 1
    
    gols_adver_time2 = time2; // calculando gols fora de casa do time 2
    gols_time1 += time1; // somando os gols do time 1
    gols_time2 += time2; // somando os gols do time 2
    
    if (time1>time2) { // time 1 venceu
      pontos_time1 += 3;
    }
    else if (time2>time1) { // time 2 venceu 
      pontos_time2 += 3;
    }
    else { // jogo 1 deu empate
      pontos_time1 +=1;
      pontos_time2 +=1;
    }
    
    scanf("%d x %d",&time2,&time1); // 2- ler partida 2
    
    gols_adver_time1 = time1; // calculando gols fora de casa do time1
    gols_time1 += time1; // somando os gols do time 1
    gols_time2 += time2; // somando os gols do time 2
    
    if (time1>time2) { // time 1 venceu
      pontos_time1 += 3;
    }
    else if (time2>time1) { // time 2 venceu 
      pontos_time2 += 3;
    }
    else { // jogo 1 deu empate
      pontos_time1 +=1;
      pontos_time2 +=1;
    }
    
    if ( pontos_time1 > pontos_time2 ) { // time 1 tem mais pontos e vence 
      printf("Time 1\n");
    }
    
    else if ( pontos_time2 > pontos_time1 ) { // time 2 tem mais pontos e vence 
      printf("Time 2\n");
    }
    
    else { // mesma quantidade de pontos ( verifique a nova condição )
      
      if (gols_time1>gols_time2) { // time 1 fez mais gols no total e vence
        printf("Time 1\n");
      }
      
      else if ( gols_time2>gols_time1) { // time 2 fez mais gols no total e vence
         printf("Time 2\n");
      }
      
      else { // mesma quantidade de gols no total ( verifique a nova condição )
        
        if ( gols_adver_time2>gols_adver_time1) { // time2 fez mais gols jogando fora de casa e vence
          printf("Time 2\n");
        }
        else if (gols_adver_time1>gols_adver_time2) { // time1 fez mais gols jogando fora de casa e vence
          printf("Time 1\n");
        }
        else { // Ainda empatados o mata mata termina em penaltis
          printf("Penaltis\n"); 
        }
        
      }
      
    }
    
    
  }
  
    return 0;
}
