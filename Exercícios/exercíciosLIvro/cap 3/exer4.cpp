/*
Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se
que este sofreu um aumento de 25%
*/

#include <iostream>

using namespace std;

int main()
{
	float salario;
	
	cout << "insira o salario autal: ";
	cin >> salario;
	salario=salario*1.25;
	cout << "o salaraio apos o aumento de 25% e: " << salario;
	
	return 0;
}
