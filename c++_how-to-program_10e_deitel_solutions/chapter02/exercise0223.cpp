#include <iostream>

using namespace std;

int main(){
	
	cout << "Informe cinco numeros inteiros separados por espaco: ";
	int num1, num2, num3, num4, num5;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	if(num1 > num2 and num1 > num3 and num1 > num4 and num1 > num5)
		cout << "O maior e: " << num1 << endl;
		
	if(num2 > num1 and num2 > num3 and num2 > num4 and num2 > num5)
		cout << "O maior e: " << num2 << endl;
		
	if(num3 > num1 and num3 > num2 and num3 > num4 and num3 > num5)
		cout << "O maior e: " << num3 << endl;
		
	if(num4 > num1 and num4 > num2 and num4 > num3 and num4 > num5)
		cout << "O maior e: " << num4 << endl;
	
	if(num5 > num1 and num5 > num2 and num5 > num3 and num5 > num4)
		cout << "O maior e: " << num5 << endl;
		
		
	if(num1 < num2 and num1 < num3 and num1 < num4 and num1 < num5)
		cout << "O menor e: " << num1 << endl;
		
	if(num2 < num1 and num2 < num3 and num2 < num4 and num2 < num5)	
		cout << "O menor e: " << num2 << endl;
		
	if(num3 < num1 and num3 < num2 and num3 < num4 and num3 < num5)
		cout << "O menor e: " << num3 << endl;
		
	if(num4 < num1 and num4 < num2 and num4 < num3 and num4 < num5)
		cout << "O menor e: " << num4 << endl;
		
	if(num5 < num1 and num5 < num2 and num5 < num3 and num5 < num4)
		cout << "O menor e: " << num5 << endl;
	
	return 0;
}