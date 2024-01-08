/*
Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para 
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem 
estar em metros.
*/

#include <iostream>
using namespace std;
int main()
{
	double hEscada, hDegrau;
	cout<<"insira a altura para ser subida e a altura de cada degrau respectivamente:\n";
	cin>>hEscada;
	cin>>hDegrau;
	cout<<"a quantidade de degraus para subir e: "<<hEscada/hDegrau;
	return 0;
}
