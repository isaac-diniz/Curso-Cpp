/*
Faça um programa que receba um número positivo e maior que zero, calcule e mostre: 
a) o número digitado ao quadrado; 
b) o número digitado ao cubo; 
c) a raiz quadrada do número digitado; 
d) a raiz cúbica do número digitado. 
*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double n1;
	cout<<"digite um número maior que 0: ";
	cin>>n1;
	cout<<"o numero ao quadrado: "<<n1*n1<<"\n";
	cout<<"o numero ao cubo: "<<n1*n1*n1<<"\n";
	cout<<"a raiz quadrada do numero: "<<sqrt(n1)<<"\n";
	cout<<"a raiz cubica do numero: "<<cbrt(n1)<<"\n";
	return 0;
}
