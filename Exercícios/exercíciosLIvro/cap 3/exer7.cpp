/*
Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
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
