#include <iostream>

using namespace std;

int main(){
	
	cout << "Informe um caractere: ";
	
	char caractere;
	
	cin >> caractere;
	
	cout << "Inteiro equivalente: " << static_cast<int>(caractere) << endl;
	
	return 0;
}