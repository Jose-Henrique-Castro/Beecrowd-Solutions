#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int soma_impares(int x,int y) { // 15 12
	
	if (x==y) return 0;
		else if ((x>y) && (x%2!=0)) 
		return x + soma_impares(x-1,y);
		
		else {
		     return soma_impares(x-1,y);
		}
	}
	

int main(int argc, char** argv) {

int inicio , fim;
cin >> inicio >> fim;
if (inicio-fim==1 || inicio==fim) cout << "0\n";
else cout << soma_impares(inicio-1,fim);
cout << endl;

	system("pause");
	return 0;
}