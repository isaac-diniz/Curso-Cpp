/*
Fa�a um programa que calcule e mostre a tabuada de um n�mero digitado pelo usu�rio. 
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
