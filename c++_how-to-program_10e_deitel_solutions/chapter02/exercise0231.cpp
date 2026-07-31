#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Informe a quantidade de km viajados por dia: ";
	double km_diarios{0.0};
	cin >> km_diarios;
	
	cout << "Informe a media de km/L: ";
	double km_litro{0.0};
	cin >> km_litro;
	
	cout << "Informe o valor do litro da gasolina: ";
	double preco_litro_gasolina{0.0};
	cin >> preco_litro_gasolina;
	
	double litro_dia = km_diarios / km_litro;
	
	cout << "Informe o valor do pedagio diario: ";
	double pedagio{0.0};
	cin >> pedagio;
	
	cout << "Informe o valor do estacionamento diario: ";
	double estacionamento_diario{0.0};
	cin >> estacionamento_diario;
	
	double gasto_diario = pedagio + estacionamento_diario + preco_litro_gasolina * litro_dia;
	
	double gasto_diario2 = gasto_diario / 2.0;
	double gasto_diario3 = gasto_diario / 3.0;
	double gasto_diario4 = gasto_diario / 4.0;
	
	cout << fixed << setprecision(2) << endl;
	
	cout << "Seu gasto diario sozinho eh de R$ " << gasto_diario << endl;
	cout << "Em 2 pessoas seu gasto diario eh de R$ " << gasto_diario2 << endl;
	cout << "Em 3 pessoas seu gasto diario eh de R$ " << gasto_diario3 << endl;
	cout << "Em 4 pessoas seu gasto diario eh de R$ " << gasto_diario4 << endl;
	
	
	return 0;
}