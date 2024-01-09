/*
Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n1, n2;
	cout<<"insira n1 e n2 em sequencia: \n";
	cin>>n1;
	cin>>n2;
	cout<<"n1 elevado a n2 e: "<<pow(n1, n2)<<"\n";
	cout<<"n2 elevado a n1 e: "<<pow(n2, n1)<<"\n";
	return 0;
}
