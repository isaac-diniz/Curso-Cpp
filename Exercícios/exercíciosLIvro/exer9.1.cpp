/*
Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: Área = ((baseMaior+baseMenor) * altura)/2.
*/

#include <iostream>

using namespace std;

int main()
{
	double baseMai, baseMen, altura, area;
	
	cout << "insira a base maior: ";
	cin >> baseMai;
	cout << "insira a base menor: ";
	cin >> baseMen;
	cout << "insira a altura : ";
	cin >> altura;
	
	area=((baseMai+baseMen)*altura)/2;
	cout << "a area do trapezio e: " << area;
	
	return 0;
}
