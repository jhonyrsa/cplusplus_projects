#include <iostream>

using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout << "Informe tres numeros inteiros: ";
	
	cin >> num1 >> num2 >> num3;
	
	if(num1 % num3 == 0)
		cout << num1 << " eh divisivel por " << num3 << endl;
	else
		cout << num1 << " nao eh divisivel por " << num3 << endl;
		
	if(num2 % num3 == 0)
		cout << num2 << " eh divisivel por " << num3 << endl;
	else
		cout << num2 << " nao e divisivel por " << num3 << endl << endl;
		
	system("pause");
	
	return 0;
}