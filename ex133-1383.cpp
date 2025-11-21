#include <stdio.h>
int main()
{
  int num_testes;
  scanf("%d",&num_testes);
  
  for ( int a=0 ; a<num_testes; a++ ) {
    
    int matriz[9][9];
    int vetor_linhas[81];
    int vetor_colunas[81];
    int vetor31[9] , vetor32[9],vetor33[9],vetor34[9],vetor35[9],vetor36[9],vetor37[9],vetor38[9],vetor39[9];
    int k=0;
    int l=0;
    int a1=0 , a2=0 , a3=0 , a4=0 , a5=0 , a6=0 , a7=0 , a8=0 , a9=0 ;
    int tem_repetido=0;
    
    for ( int i=0 ; i<9 ; i++ ) {
      for ( int j=0 ; j<9 ; j++ ) {
        scanf("%d",&matriz[i][j]);
        vetor_linhas[k] = matriz[i][j];
        k++;
      }
    }
    
   for ( int i=0 ; i<9;i++){
     for ( int j=i+1 ; j<9 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=9 ; i<18;i++){
     for ( int j=i+1 ; j<18 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=18 ; i<27;i++){
     for ( int j=i+1 ; j<27 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=27 ; i<36;i++){
     for ( int j=i+1 ; j<36 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=36 ; i<45;i++){
     for ( int j=i+1 ; j<45 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=45 ; i<54;i++){
     for ( int j=i+1 ; j<54 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=54 ; i<63;i++){
     for ( int j=i+1 ; j<63 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=63 ; i<72;i++){
     for ( int j=i+1 ; j<72 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=72 ; i<81;i++){
     for ( int j=i+1 ; j<81 ; j++) {
       if ( vetor_linhas[i] == vetor_linhas[j] ) tem_repetido=1;
     }
   }
   
   //------------------------------------------------------------------------------------------
   
   
  for ( int i=0 ; i<9 ; i++ ) {
      for ( int j=0 ; j<9 ; j++ ) {
        vetor_colunas[l] = matriz[j][i];
        l++;
      }
    }
   
    for ( int i=0 ; i<9;i++){
     for ( int j=i+1 ; j<9 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=9 ; i<18;i++){
     for ( int j=i+1 ; j<18 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=18 ; i<27;i++){
     for ( int j=i+1 ; j<27 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=27 ; i<36;i++){
     for ( int j=i+1 ; j<36 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=36 ; i<45;i++){
     for ( int j=i+1 ; j<45 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=45 ; i<54;i++){
     for ( int j=i+1 ; j<54 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=54 ; i<63;i++){
     for ( int j=i+1 ; j<63 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=63 ; i<72;i++){
     for ( int j=i+1 ; j<72 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   for ( int i=72 ; i<81;i++){
     for ( int j=i+1 ; j<81 ; j++) {
       if ( vetor_colunas[i] == vetor_colunas[j] ) tem_repetido=1;
     }
   }
   
   //------------------------------------------------------------------------------------------
   
   for (int i=0;i<3;i++){
     for (int j=0;j<3;j++){
       vetor31[a1] = matriz[i][j];
       a1++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor31[i] == vetor31[j]) tem_repetido=1;
     }
   }
   
   
   for (int i=0;i<3;i++){
     for (int j=3;j<6;j++){
       vetor32[a2] = matriz[i][j];
       a2++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor32[i] == vetor32[j]) tem_repetido=1;
     }
   }
   
   
   for (int i=0;i<3;i++){
     for (int j=6;j<9;j++){
       vetor33[a3] = matriz[i][j];
       a3++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor33[i] == vetor33[j]) tem_repetido=1;
     }
   }
   
   for (int i=3;i<6;i++){
     for (int j=0;j<3;j++){
       vetor34[a4] = matriz[i][j];
       a4++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor34[i] == vetor34[j]) tem_repetido=1;
     }
   }
   
   for (int i=3;i<6;i++){
     for (int j=3;j<6;j++){
       vetor35[a5] = matriz[i][j];
       a5++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor35[i] == vetor35[j]) tem_repetido=1;
     }
   }
   
   for (int i=3;i<6;i++){
     for (int j=6;j<9;j++){
       vetor36[a6] = matriz[i][j];
       a6++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor36[i] == vetor36[j]) tem_repetido=1;
     }
   }
   
   for (int i=6;i<9;i++){
     for (int j=0;j<3;j++){
       vetor37[a7] = matriz[i][j];
       a7++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor37[i] == vetor37[j]) tem_repetido=1;
     }
   }
   
   for (int i=6;i<9;i++){
     for (int j=3;j<6;j++){
       vetor38[a8] = matriz[i][j];
       a8++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor38[i] == vetor38[j]) tem_repetido=1;
     }
   }
   
   for (int i=6;i<9;i++){
     for (int j=6;j<9;j++){
       vetor39[a9] = matriz[i][j];
       a9++;
     }
   }
   
   for (int i=0;i<9;i++){
     for (int j=i+1;j<9;j++){
       if (vetor39[i] == vetor39[j]) tem_repetido=1;
     }
   }
   
   
    printf("Instancia %d\n",a+1);
    if (tem_repetido==1) printf("NAO\n");
    else printf("SIM\n");
   printf("\n");
  
  }
   return 0;
}