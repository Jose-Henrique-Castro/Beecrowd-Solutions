#include <bits/stdc++.h>
using namespace std;

bool compara(int a,int b) {
    return a>b;
}

int main() 
{
    
    int testes;
    cin >> testes;
    int num;
    vector <int> par;
    vector <int> impar;
    for (int i=0;i<testes;i++){
        cin >> num; 
        if(num%2==0) par.push_back(num);
        else impar.push_back(num);
    }

    sort(par.begin(),par.end()); // crescente
    sort(impar.begin(),impar.end(),compara);

    vector <int> resposta;
    
    for ( auto x : par) {
        resposta.push_back(x);
    }

    for ( auto x : impar) {
        resposta.push_back(x);
    }

    for (auto x : resposta) {
        cout << x << endl;
    }

    return 0;
}