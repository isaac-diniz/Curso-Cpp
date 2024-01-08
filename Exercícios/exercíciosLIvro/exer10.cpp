/*
Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2
*/

#include <iostream>
#define pi 3.14159
using namespace std;
int main()
{
	double area, raio;
	cout<<"Insira o raio da circunferencia: ";
	cin>>raio;
	area=pi*(raio*raio);
	cout<<"a area da cirfunferencia e: "<<area;
	return 0;
}
