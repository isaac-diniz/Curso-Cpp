/*
Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra 
na tabela a seguir: 
*/

#include <iostream>
using namespace std;
int main()
{
	double n1, n2, med;
	 
	cout<<"insira 2 notas em sequencia:\n";
 	cin>>n1;
 	cin>>n2;
 	med = (n1+n2)/2;
 	cout<<med<<"\n";
 	if(med>=7)
 	{
 		cout<<"aprovado";
	}else if(med>=3)
	{
		cout<<"exame";
	}else
	{
		cout<<"reprovado";
	}
	
	
	return 0;
}
