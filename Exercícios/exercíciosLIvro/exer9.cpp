/*
Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.
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
