/*
ALGORITMO
DECLARE n1, n2, n3, n4, soma NUM�RICO
LEIA n1, n2, n3, n4
soma ? n1 + n2 + n3 + n4
ESCREVA soma
FIM_ALGORITMO.
*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3, n4, soma;
	
	cout << "digite os 4 valores inteiros em sequecia: \n";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	soma = n1+n2+n3+n4;
	
	cout << "A soma dos valores e: " << soma;
	
	return 0;
}
