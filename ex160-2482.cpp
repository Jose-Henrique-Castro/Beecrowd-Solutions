#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int qtd_traduçoes;
    cin >> qtd_traduçoes;
    cin.ignore();

map <string,string> linguagens;

    for (int i=0;i<qtd_traduçoes;i++){
        string lingua , traduçao;
        getline(cin,lingua);
        getline(cin,traduçao);
        linguagens.insert({lingua,traduçao});
    }

    int pessoas;
    cin >> pessoas;
    cin.ignore();

vector <pair<string,string>> nomes;

    for (int i=0;i<pessoas;i++){
        string nome; getline(cin,nome);
        string lingua; getline(cin,lingua);
        nomes.push_back({nome,lingua});
    }

    for ( auto pair : nomes) {
        string real = pair.second;
        cout << pair.first << endl;
        cout << linguagens[real] << endl;
        cout << endl;
    }


    return 0;
}