#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string expressao;
    while (cin >> expressao) {
     
     vector <char> parenteses;
     bool correto = true;
     for (char c : expressao ) {
       
       if (c=='(') {
         parenteses.push_back('(');
       }
       else if (c==')') {
         if (!parenteses.empty()) parenteses.pop_back();
         else {
           correto = false;
           break;
         }
       
       }
     } // ( ( ( ) 
      
      if(!correto || !parenteses.empty()) cout << "incorrect\n";
      else cout << "correct\n";
      
      
    }
    
    
    
    return 0;
}