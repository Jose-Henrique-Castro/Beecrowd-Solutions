#include <bits/stdc++.h>
using namespace std;

using P = pair<long long,int>; // tempo pro caixa ficar livre , id 

int main() 
{

    int caixas,clientes; cin >> caixas >> clientes; // numero de caixas e de clientes
    vector <int> v(caixas);

    for(int i=0;i<caixas;i++){
        cin >> v[i]; // tempo dos caixas em cada produto
    }

    priority_queue <P,vector<P>,greater<P>> fila_compras; // transformando de decrescente para crescente ( min-heap )

    for(int i=0;i<caixas;i++){
        fila_compras.push({0,i}); // tempo inicial para ficar livre  , id 
    }

    long long tempo_total = 0; // tempo total gasto no final;

    for(int i=0;i<clientes;i++){
        int items; cin >> items; // qtd de items por cliente;

        P caixa_atual = fila_compras.top(); // tira o {0,0} 
        fila_compras.pop();

        long long tempo_atual = caixa_atual.first; // salva o tempo pro caixa0 ficar livre
        int id = caixa_atual.second; // salva id , caixa0

        long long tempo_cliente = (long long)v[id] * items; // tempo do caixa0 * qtd itens do cliente = tempo gasto no cliente

        long long novo_tempo = tempo_atual + tempo_cliente; // novo tempo pro caixa0 ficar livre (0+tempo_cliente)

        fila_compras.push({novo_tempo,id}); // adiciona de novo , porem ele vai pro final da fila; acumula o tempo do ultimo cliente que atendeu

        if(novo_tempo>tempo_total) tempo_total = novo_tempo; // o funcionario com a maior quantidade de tempo acumulado , terá o tempo total gasto;

    }

    cout << tempo_total << endl; 

    return 0;
}