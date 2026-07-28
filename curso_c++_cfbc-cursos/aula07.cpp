#include <iostream>

using namespace std;

int main(){
	
	//incremento e decremento
	
	int n1 = 3;
	int n2 = 2;
	
	cout << n1 << endl << endl;
	
	//incremento
	n1 = n1 + 1;
	
	cout << n1 << " incremento de 1 unidade.\n";
	
	n1 += 5;
	
	cout << n1 << " incremento de 5 unidades.\n";
	
	n1++;
	
	cout << n1 << " incremento de 1 unidade.\n";
	
	n1--;
	
	cout << n1 << " decremento de 1 unidade.\n";
	
	n1 /= 3;
	
	cout << n1 << " decremento de 1/3 unidades.\n";
	
	n1 *= 2;
	
	cout << n1 << " incremento do dobro de unidades.\n";
	
	n1 -= n2;
	
	cout << n1 << " decremento de " << n2 << " unidades.\n";
	
	return 0;
}