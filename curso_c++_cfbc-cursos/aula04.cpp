#include <iostream>

using namespace std;

int main(){
	
	//tipo nome da variável;
	//tipo nome = valor inicial da variável;
	
	//tipo inteiro: recebe inteiros - -35, 82, 0, -155 etc
	int vidas = 0;
	
	//tipo char: caractere, letra, simbolo
	char letra = 'b'; // 'B' > entre apostrofos
	
	//tipo double: numeros decimais de alta precisão
	double decimal = 5.2; //2,499999999
	
	//tipo float: numero decimal de precisão menor
	float decimal2 = 5.2; //2,5
	
	//tipo boolean: variável do tipo lógico, só aceita true ou false
	bool vivo = true; //true >  verdadeiro, false > falso
	
	//tipo string: variável que vai receber um texto
	string nome = "Jhony"; // "Bruno" > entre apostrofos
	
	//para um char receber mais caracteres posso transformar ele em um vetor
	char palavra[20];
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	cout << "Dinheiro: ";
	cin >> decimal;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "\n" << vidas << endl;
	cout << letra << endl;
	cout << decimal << endl;
	cout << decimal2 << endl;
	cout << vivo << endl;
	cout << nome << endl;
	//cout << palavra[20] << endl;
	
	
	return 0;
}

/*
	bloco de comentários
	bloco de comentários
	bloco de comentários
	...
	bloco de comentários
*/

// comentário de uma única linha
