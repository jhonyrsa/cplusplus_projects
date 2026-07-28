#include <iostream>

#define PI 3.14159265

using namespace std;

int main(){
	
	cout << "Informe o raio do circulo: ";
	float raio;
	cin >> raio;
	
	float diametro = raio * 2;
	float comprimento = PI * raio * 2;
	float area = PI * raio * raio;
	
	cout << "Dados da circunferencia\n";
	cout << "Diametro: " << diametro << " u.c." << endl;
	cout << "Comprimento: " << comprimento << " u.c." << endl;
	cout << "Area: " << area << " u.a." << endl;
		
	return 0;
}