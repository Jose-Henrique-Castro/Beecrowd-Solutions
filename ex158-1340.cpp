#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int testes;

    while(cin  >> testes){
    int coloca_ou_tira , num;
   
        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;

        bool ehstack = true;
        bool ehqueue = true;
        bool ehPqueue = true;

        for( int i=0;i<testes;i++){
            int coloca_ou_tira , num;
            cin >> coloca_ou_tira >> num;
            
            if(coloca_ou_tira==1) {
                s.push(num);
                q.push(num);
                pq.push(num);
            }
            else {
                if (s.empty()) {
                ehstack = false;
                ehqueue = false;
                ehPqueue = false;
                continue;
            }

            if(ehstack) {
                if (s.top() == num) s.pop();
                else ehstack = false;
                }
            if(ehqueue) {
                if (q.front() == num) q.pop();
                else ehqueue = false;
                }
            if (ehPqueue) {
                if (pq.top() == num ) pq.pop();
                else ehPqueue = false;
            }

        }
    }
    
        int cont=0;
        if (ehstack) cont++;
        if (ehqueue) cont++;
        if (ehPqueue) cont++;

        if (cont==0) cout << "impossible\n";
        else if (cont>1) cout << "not sure\n";
        else if (ehstack) cout << "stack\n";
        else if (ehqueue) cout << "queue\n";
        else cout << "priority queue\n";
             
    
    
}
    return 0;
}