/*
Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário.
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
