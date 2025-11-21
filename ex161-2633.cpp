#include <bits/stdc++.h>
using namespace std;



int main() 
{

    int carnes;

    while (cin >> carnes) {
    cin.ignore();
    vector <pair<int,string>> num_carne;
        for ( int i=0;i<carnes;i++) {
            string carne;
            int validade;
            cin >> carne;
            cin >> validade;
            num_carne.push_back({validade,carne});
        }

        sort(num_carne.begin(),num_carne.end());

        for (int i=0;i<num_carne.size();i++) {
            if (i<num_carne.size()-1) cout << num_carne[i].second << " ";
            else cout << num_carne[i].second << endl;
        }
    }


      return 0;
}