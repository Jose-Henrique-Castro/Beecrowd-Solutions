#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
    int testes;
    cin >> testes;

    for ( int i=0;i<testes;i++){

        int qtd_produtos;
        cin >> qtd_produtos;
        map <string,float> produto_preço;
        for ( int j=0;j<qtd_produtos;j++) {
            string fruta;
            float preço;
            cin >> fruta >> preço;
            produto_preço.insert({fruta,preço});
        }

        int qtd_compras;
        cin >> qtd_compras;

        vector <float> soma;
        for ( int j=0;j<qtd_compras;j++){
            string fruta;
            int quantidade;
            cin >> fruta >> quantidade;
            produto_preço[fruta] *= quantidade;
            soma.push_back(produto_preço[fruta]);
        }

        float total=0;
        for ( float x : soma){
            total += x;
        }

        cout << "R$ " << fixed << setprecision(2) << total << endl;

    }

    return 0;
}