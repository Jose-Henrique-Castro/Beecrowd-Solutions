#include <bits/stdc++.h>
using namespace std;

bool maior(pair<int,char> a ,pair<int,char> b){
    return a.first > b.first;
}

int main() 
{

    int N , M;
    cin >> N >> M;
     
    int nivel;
    char tipo;
    vector <pair<int,char>> nivel_D;
    vector <pair<int,char>> nivel_V;

    for ( int i=0;i<N;i++) {
        for ( int j=0;j<M;j++){
            cin >> nivel >> tipo;
            
            if(tipo =='D')
            nivel_D.push_back({nivel,tipo});

            else if(tipo =='V') nivel_V.push_back({nivel,tipo});

        }
    }

        sort(nivel_D.begin(),nivel_D.end(),maior);
        sort(nivel_V.begin(),nivel_V.end(),maior);

        for ( auto pair : nivel_V){
            cout << pair.first << pair.second << endl;
        }
        for ( auto pair : nivel_D) {
            cout << pair.first << pair.second << endl;
        }


    
     return 0;
}