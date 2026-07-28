#include <iostream>

using namespace std;

int main(){

	int num1{0}, num2{0}, soma{0};
	
	cout << "Informe dois numeros inteiros: ";
	cin >> num1 >> num2;
	
	soma = num1 + num2;
	
	if(num1 % 2 == 0)
		cout << num1 << " e par." << endl;
	
	if(num2 % 2 == 0)
		cout << num2 << " e par." << endl;
		
	if(soma % 2 != 0)
		cout << "A soma de " << num1 << " e " << num2 << ", " << soma << " eh impar" << endl;
	
	return 0;
}