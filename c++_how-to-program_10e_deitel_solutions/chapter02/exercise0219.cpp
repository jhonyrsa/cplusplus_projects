#include <iostream>

using namespace std;

int main(){
	
	string text = "Insira tres numeros inteiros diferentes: ";
	
	cout << text;
	
	int numero1, numero2, numero3;
	
	cin >> numero1 >> numero2 >> numero3;
	
	int soma = numero1 + numero2 + numero3;
	cout << "A soma e: " << soma << endl;
	
	int media = soma / 3;
	cout << "A media e: " << media << endl;
	
	int produto = numero1 * numero2 * numero3;
	cout << "O produto e: " << produto << endl;
	
	if (numero1 > numero2 && numero1 > numero3)
		cout << "O maior e: " << numero1 << endl;
	else if (numero2 > numero1 && numero2 > numero3)
		cout << "O maior e: " << numero2 << endl;
	else
		cout << "O maior e: " << numero3 << endl;
		
	if (numero1 < numero2 && numero1 < numero3)
		cout << "O menor e: " << numero1 << endl;
	else if (numero2 > numero1 && numero2 > numero3)
		cout << "O menor e: " << numero2 << endl;
	else
		cout << "O menor e: " << numero3 << endl;
	
		
	return 0;
}