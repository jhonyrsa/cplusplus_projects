#include <iostream>

using namespace std;

//variável global: fora das funções, pode ser utilizada em qualquer parte do programa
//variável local: criada dentro das funções, é utilizada somente dentro do programa que foi criada

int n1, n2; // variáveis globais

int main(){
	
	int n3, n4; //variáveis locais
	
	cin >> n1;
	cout << n1 << endl;
	
	return 0;
}