#include <bits/stdc++.h>
using namespace std;

void numeros(vector <int>& pilha , int x ){

    if(x<1) return;
    else {
        numeros(pilha,x-1);
        pilha.push_back(x);
    }

}

int main(){

int cartas;
cin >> cartas;

while(cartas>0){
    vector <int> descartados;

    vector <int> baralho;
   numeros(baralho,cartas);

   while(baralho.size()>1){
    
    descartados.push_back(baralho.front());
    baralho.erase(baralho.begin());

    int element_topo = baralho.front();

    baralho.erase(baralho.begin()); // apaga o topo 
    baralho.insert(baralho.end(),element_topo); // coloca o topo no ultimo 
    

   }

int x=0;
cout << "Discarded cards:";
   while(x<descartados.size()){
    if (x==descartados.size()-1) cout << " " << descartados[x] << endl;
   else {
    cout  << " " << descartados[x] << ',';
   } 
    x++;
 }

 cout << "Remaining card: " << baralho.back() << endl; 


cin >> cartas;
}

return 0;
}