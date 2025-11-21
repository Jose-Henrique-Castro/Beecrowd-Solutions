#include <bits/stdc++.h>
using namespace std;

bool compara(int a,int b){
    return a>b;
}

int main(){

    int testes,alunos;
    cin >> testes;

    for (int i=0;i<testes;i++){
        cin >> alunos;
        int nota;
        vector <int> notas;
        for (int j=0;j<alunos;j++){
            cin >> nota;
            notas.push_back(nota);
        }
        
        vector <int> notas2 = notas;

        sort(notas2.begin(),notas2.end(),compara);

        int cont=0;

        for (int i=0;i<notas.size();i++){
            if(notas[i]==notas2[i]) cont++;
        }
    
    cout << cont << endl;
    
        }

    

return 0;
}