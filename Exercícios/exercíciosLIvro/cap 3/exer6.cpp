/*
Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
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
