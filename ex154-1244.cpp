#include <bits/stdc++.h>
using namespace std;

bool compara ( pair<string,int> a,pair<string,int> b){
    return a.second > b.second;
}

int main() 
{
   int testes;
   cin >> testes;
   cin.ignore();

for ( int i=0;i<testes;i++) {

    string S;
    getline(cin,S);

    
     vector<pair<string, int>> nome_tam;

    int pos=0;

    while((pos=S.find(' ')) != string::npos) {
            string palavra = S.substr(0,pos);
            int tamanho = palavra.length();
            nome_tam.push_back({palavra,tamanho});
            S.erase(0,pos+1);
        }  

        if (!S.empty()){
            int tamanho = S.length();
            nome_tam.push_back({S,tamanho});
        }
    
        vector <pair<string,int>> vec(nome_tam.begin(),nome_tam.end());

        stable_sort(vec.begin(),vec.end(),compara);


    for ( int i=0;i<vec.size();i++){
        cout << vec[i].first;
        if (i != vec.size()-1) cout << " ";
        else cout << endl;
    }

}

    return 0;
}