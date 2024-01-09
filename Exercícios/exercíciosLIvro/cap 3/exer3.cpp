/*
Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada
*/

#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, nota3, mediaPond;
	int peso1, peso2, peso3;
	
	cout << "insira as notas: \n";
	cin >> nota1;
	cin >> nota2;
	cin >> nota3;
	
	cout << "insira o peso de cada nota em sequencia: \n";
	cin >> peso1;
	cin >> peso2;
	cin >> peso3;
	
	mediaPond = (nota1*peso1)+(nota2*peso2)+(nota3*peso3)/(nota1+nota2+nota3);
	
	cout << "a media ponderada e: " << mediaPond;
	return 0;
}
