#include <iostream>
using namespace std;
int main()
{
	int op;
	double val1, val2;
	cout<<"digite o numero da figura que voce deseja calcular a area\n";
	cout<<"[1]quadrado, [2]triangulo, [3]circulo\n";
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"insira o lado do quadrado: ";
			cin>>val1;
			cout<<"a area e: "<<val1*val1;
			break;
		case 2:
			cout<<"insira a base do triangulo: ";
			cin>>val1;
			cout<<"insira a altura do triangulo: ";
			cin>>val2;
			cout<<"a area e: "<<val1*val2/2;
			break;
		case 3:
			cout<<"insira o raio da circunferencia: ";
			cin>>val1;
			cout<<"a area e: "<<val1*val1*3.14;
			break;
		default:
			cout<<"numero digitado invalido";
	}
	
	
	return 0;
}
