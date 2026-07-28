#include <iostream>

using namespace std;

int main(){
	
	int n1 = 0;
	int n2 = 0;
	
	cout << "Informe o primeiro numero nao nulo: ";
	cin >> n1;
	
	cout << "Informe o segundo numero nao nulo: ";
	cin >> n2;
	
	int soma = n1 + n2;
	int diferenca = n1 - n2;
	int quociente = n1 / n2;
	int produto = n1 * n2;
	
	cout << n1 << " + " << n2 << " = " << soma << endl;	
	cout << n1 << " - " << n2 << " = " << diferenca << endl;	
	cout << n1 << " / " << n2 << " = " << quociente << endl;	
	cout << n1 << " x " << n2 << " = " << produto << endl;
	
	return 0;
}