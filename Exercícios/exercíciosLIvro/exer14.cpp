/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa; 
b) quantos anos ela terá em 2050. 
*/

#include <iostream>
using namespace std;
int main()
{
	int nasc;
	cout<<"insira o ano de nascimento: ";
	cin>>nasc;
	cout<<"sua idade esse ano e: "<<2024-nasc<<"\n";
	cout<<"sua idade em 2050 e: "<<2050-nasc<<"\n";
	return 0;
}
