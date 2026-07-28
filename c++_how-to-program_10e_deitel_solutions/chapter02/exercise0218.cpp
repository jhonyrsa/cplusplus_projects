#include <iostream>

using namespace std;

int main(){
	
	int primeiro_numero{0};
	int segundo_numero = 0;
	
	cout << "Informe o primeiro numero: ";
	cin >> primeiro_numero;
	
	cout << "Informe o segundo numero: ";
	cin >> segundo_numero;
	
	if (primeiro_numero > segundo_numero)
		cout << primeiro_numero << " e o maior numero.\n";
		
	else if (primeiro_numero < segundo_numero)
		cout  << segundo_numero << " e o maior numero.\n";
	
	else
		cout << "Os dois numeros sao iguais." << endl;
		
	return 0;
}