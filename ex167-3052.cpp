#include <bits/stdc++.h>
using namespace std;

int L,C;
vector<vector<char>> mapa;
vector<vector<bool>> vis;

void DFS(int x,int y){

if(x<0||x>=L||y<0||y>=C) return;
if(vis[x][y]) return;
if(mapa[x][y]=='#') return;

mapa[x][y] = 'o';
vis[x][y] = true;

if( x+1 < L){
    if(mapa[x+1][y]=='#') {
        DFS(x,y-1);
        DFS(x,y+1);
    }
    else DFS(x+1,y);
}



return;
}

int main() 
{
    int X,Y;

    cin >> L >> C;

    mapa.assign(L,vector<char>(C));
    vis.assign(L,vector<bool>(C,false));

    for(int i=0;i< L;i++){
        for(int j=0;j<C;j++){
            cin >> mapa[i][j];
        }
    }

    for(int j=0;j<C;j++){
        if(mapa[0][j]=='o') {
            X = 0;
            Y = j;
            break;
    }

    }

    DFS(X,Y);

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            cout << mapa[i][j];
        }
        cout << endl;
    }

    return 0;
}