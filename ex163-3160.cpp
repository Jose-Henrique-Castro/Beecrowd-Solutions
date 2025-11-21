#include <bits/stdc++.h>
using namespace std;

int main() 
{

   string atual;
   getline(cin,atual);

   int pos;
   vector <string> atuais;
   while((pos = atual.find(' '))!= string::npos) {
    string palavra = atual.substr(0,pos);
    atuais.push_back(palavra);
    atual.erase(0,pos+1);
   }

   if(!atual.empty()){
    atuais.push_back(atual);
   }

   vector <string> novos_amigos;

   string novos;
   getline(cin,novos);

   stringstream ss(novos);
   string nome;


   while ( ss >> nome ){
    novos_amigos.push_back(nome);
   }

   string escolhido;
   cin >> escolhido;

   if(escolhido=="nao"){
    for ( auto x : atuais ) {
        cout << x << " ";
    }
    int ult = novos_amigos.size()-1;
    for (int i=0;i<novos_amigos.size();i++){
        if(i!=ult) cout << novos_amigos[i] << " ";
        else cout << novos_amigos[i] << endl;
    }
   }

   else {
     auto posisao_escolhido = find(atuais.begin(),atuais.end(),escolhido);

   vector <string> escolhidos;

   if(posisao_escolhido != atuais.end()){

    escolhidos.insert(escolhidos.end(),posisao_escolhido,atuais.end());

    atuais.erase(posisao_escolhido,atuais.end());

   for ( auto x : atuais ) {
        cout << x << " ";
    }

    for ( auto x : novos_amigos ) {
        cout << x << " ";
    }
    int ult = escolhidos.size()-1;
    for (int i=0;i<ult+1;i++){
        if(i!=ult) cout << escolhidos[i] <<  " ";
        else cout << escolhidos[i] << endl;
    }

   }

   else {
    for ( auto x : atuais ) {
        cout << x << " ";
    }

    int ult = novos_amigos.size()-1;
    for (int i=0;i<novos_amigos.size();i++){
        if(i!=ult) cout << novos_amigos[i] << " ";
        else cout << novos_amigos[i] << endl;
    }

   }

   }


     return 0;
}