/*
Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.
*/

#include <iostream>

using namespace std;

int main()
{
	float salario, imposto;
	
	cout << "Insira o salario abaixo: ";
	cin >> salario;
	
	imposto = salario * 0.1;
	
	salario = salario - imposto + 50;
	
	cout << "o salario a recer e: R$" << salario;
	
	return 0;
}
