/*
Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tamb�m sobre o sal�rio base.
*/

#include <iostream>

using namespace std;

int main()
{
	float salario, grat, imposto;
	
	cout << "Insira o salario recebido: ";
	cin >> salario;
	
	grat = salario*0.05;
	imposto = salario*0.07;
	
	cout << "o salario a receber e: R$" << (salario+grat-imposto);
	
	return 0;
}
