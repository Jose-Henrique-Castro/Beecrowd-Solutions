#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int testes; cin >> testes; cin.ignore();
    
    for(int i=0;i<testes;i++){
        vector <string> mochila;
      string item;getline(cin,item);
      
      stringstream ss(item);
      string palavra;
      
        while(ss>>palavra){
         mochila.push_back(palavra);
        }
        
        set <string> compras(mochila.begin(),mochila.end());
    
    
    vector <string> final(compras.begin(),compras.end());
    
    for(int j=0;j<final.size();j++){
      if(j!=final.size()-1) cout << final[j] << " ";
      else cout << final[j] << endl;
    }
        compras.clear();
        final.clear();
    }
    
    
    
    
    
    
    return 0;
}