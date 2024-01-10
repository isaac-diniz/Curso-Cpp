/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a 
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include <iostream>
using namespace std;
int main()
{
 	double n1, n2, n3, n4, med;
	 
	cout<<"insira 4 notas em sequencia:\n";
 	cin>>n1;
 	cin>>n2;
 	cin>>n3;
 	cin>>n4;
 	med = (n1+n2+n3+n4)/4;
 	if(med>=7)
 	{
 		cout<<"aprovado";
	}else
	{
		cout<<"reporovado";
	}
 	return 0;
}
