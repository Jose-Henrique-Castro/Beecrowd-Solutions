#include <bits/stdc++.h>
using namespace std;

int main () {
    
    int testes;
    cin >> testes;
    
    for ( int i=0;i<testes;i++) {
    
    string diamantes;
    cin >> diamantes;
    
    stack<char> parte;
    int total=0;
    
    for ( char c : diamantes) {
    	if (c=='<') {
    		parte.push('<');
		}
		else if (c=='>') {
			if (!parte.empty()) {
				parte.pop();
				total++;
			}
		}
	}
    cout << total << endl;
	}
    
 return 0;   
}