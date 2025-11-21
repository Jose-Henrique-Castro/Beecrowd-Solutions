#include <bits/stdc++.h>
using namespace std;

int main() 
{
   vector <char> parenteses;
   string S;
   getline(cin,S);

   for ( char c : S) {
    if(c=='(') parenteses.push_back(c);
    if(!parenteses.empty() && c==')') parenteses.pop_back();
   }

   int tam = parenteses.size();
   
   if (tam==0) cout << "Partiu RU!\n";
   else cout << "Ainda temos " << tam << " assunto(s) pendente(s)!\n";

    return 0;
}