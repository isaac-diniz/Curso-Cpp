/*
questão 1 OBI 2023
contas a pagar, devo receber 4 valores, o saldo disponível, e os valores das 3 dívidas
deve retornar, o maior numero de contas que consegue pagar
*/
#include <iostream>
using namespace std;
int main (){
	int valor;
	cin >> valor;
	int contas [3];
	for (int& val : contas)
		cin >> val;
	/*teste:
	for (int val : contas)
		cout << val << endl;
	*/
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			if (contas [j] > contas [j+1]){
				int temp = contas [j];
				contas [j] = contas [j+1];
				contas [j+1] = temp;
			}
		}
	}
	int pagas = 0;
	for (int conta : contas){
		if (valor - conta >= 0){
			valor -= conta;
			pagas += 1;
		}
	}
	cout << pagas <<endl;
	return 0;
}
