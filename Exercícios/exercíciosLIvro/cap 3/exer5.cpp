/*
Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre
o valor do aumento e o novo sal�rio.
*/

#include <iostream>

using namespace std;

int main()
{
	float salario, aumento, per100;
	
	cout << "Insira abaixo o salario atual: ";
	cin >> salario;
	cout << "Insira o percentual de aumento: ";
	cin >> per100;
	
	aumento = salario*(per100/100);
	cout << "O valor aumentado e de: " << aumento;
}
