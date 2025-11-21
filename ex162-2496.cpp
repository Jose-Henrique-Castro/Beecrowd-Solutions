#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int testes;
    cin >> testes;
vector <char> alfabeto;
    for (char c = 'A'; c <= 'Z'; c++) {
    alfabeto.push_back(c);
    }

    for (int i=0;i<testes;i++) {
        vector <char> alfabeto_teste;
        int tam_alfabeto;
        cin >> tam_alfabeto;
        for ( int j=0;j<tam_alfabeto;j++) {
            char c;
            cin >> c;
            alfabeto_teste.push_back(c);
        }
        int cont=0;
         for ( int j=0;j<tam_alfabeto;j++) {
            if(alfabeto_teste[j]!=alfabeto[j]) cont++;
         }
         if (cont!=2) cout << "There aren't the chance.\n";
         else cout << "There are the chance.\n";

    }

    return 0;
}