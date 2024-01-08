/*
Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. 
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50
*/
#include <iostream>
using namespace std;
int main()
{
	double n;
	cout<<"insira um numero: ";
	cin>>n;
	for(int i=1; i<=10; i++)
	{
		cout<<n<<" x "<<i<< " = "<<n*i<<"\n";
	}
	return 0;
}
