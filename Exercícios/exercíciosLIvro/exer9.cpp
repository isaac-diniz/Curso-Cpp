/*
Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.
*/

#include <iostream>

using namespace std;

int main()
{
	double base, altura, area;
	
	cout << "insira a base do triangulo: ";
	cin >> base;
	cout << "insira a altuea do triangulo: ";
	cin >> altura;
	
	area=base*altura/2;
	cout << "a area do triangulo e: " << area;
	
	return 0;
}
