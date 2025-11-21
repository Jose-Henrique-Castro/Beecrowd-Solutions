#include <bits/stdc++.h>
using namespace std;

int l , c;
char matriz[55][55];
using P = pair<int,int>;

void flood_fill(int x ,int y){

    if(matriz[x][y]!='A' || x<0||x>=l || y<0||y>=c || matriz[x][y]!='A' ){
        return;
    }
    matriz[x][y] = 'T';

    flood_fill(x+1,y); // embaixo
    flood_fill(x-1,y); // emcima
    flood_fill(x,y+1); // direta
    flood_fill(x,y-1); // esquerda

        
}

int main() {

     cin >> l >> c;
     bool flag = 0;
     int k,n;

while(l>0 && c>0){

    vector <P> contaminaçao;

for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
        cin >> matriz[i][j];
if(matriz[i][j]=='T'){
    contaminaçao.push_back({i,j});
}
    }
}

for (auto pair : contaminaçao){
    int k = pair.first;
    int n = pair.second;

    flood_fill(k+1,n);
    flood_fill(k-1,n);
    flood_fill(k,n+1);
    flood_fill(k,n-1);
}

for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
        cout << matriz[i][j];
    }
    cout << endl;
}
cout << endl;

cin >> l >> c;
  
    }



     return 0;
}