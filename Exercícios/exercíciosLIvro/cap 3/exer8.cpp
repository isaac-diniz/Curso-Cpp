/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.
*/

#include <iostream>

using namespace std;

int main()
{
	float deposito, juros, tempo;
	
	cout << "insira o deposito inicial: ";
	cin >> deposito;
	cout << "insira a taxa de juros: ";
	cin >> juros;
	juros = (juros/100)+1;
	cout << "insira a quantidade de meses ate o saque: ";
	cin >> tempo;
	
	for (int i; i <= tempo; i++)
	{
		deposito *=juros;

	}
	
	cout << "o valor total depois de " << tempo << " meses e de: R$" <<deposito;
	
	return 0;
}
