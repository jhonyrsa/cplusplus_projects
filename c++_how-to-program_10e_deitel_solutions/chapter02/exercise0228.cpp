#include <iostream>

using namespace std;

int main(){
	
	cout << "Informe um numero inteiro entre 1000 e 9999: ";
	int numero{0};
	cin >> numero;
	
	int unidade_milhar = (numero / 1000);
	int centena = (numero % 1000) / 100;
	int dezena = ((numero % 1000) % 100) / 10;
	int unidade = ((numero % 1000) % 100) % 10;
	
	cout << unidade_milhar << " " << centena << " " << dezena << " " << unidade << endl;
	
	return 0;
}