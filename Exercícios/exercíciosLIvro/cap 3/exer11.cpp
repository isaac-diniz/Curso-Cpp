/*
Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre: 
a) o n�mero digitado ao quadrado; 
b) o n�mero digitado ao cubo; 
c) a raiz quadrada do n�mero digitado; 
d) a raiz c�bica do n�mero digitado. 
*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double n1;
	cout<<"digite um n�mero maior que 0: ";
	cin>>n1;
	cout<<"o numero ao quadrado: "<<n1*n1<<"\n";
	cout<<"o numero ao cubo: "<<n1*n1*n1<<"\n";
	cout<<"a raiz quadrada do numero: "<<sqrt(n1)<<"\n";
	cout<<"a raiz cubica do numero: "<<cbrt(n1)<<"\n";
	return 0;
}
