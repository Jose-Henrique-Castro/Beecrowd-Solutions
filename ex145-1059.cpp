#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void imprimir(int x) {
	if(x==100) cout<<x<<endl;
	else{
		cout << x << endl;
		imprimir(x+2);
	}
}

int main(int argc, char** argv) {
int n=2;

imprimir(n);

	system("pause");
	return 0;
}