/*
Verificar Número Par ou Ímpar:

Peça ao usuário para inserir um número e informe se é par ou ímpar.
*/

#include <iostream>
using namespace std;
int main(){
	int n, n1;
	cin>>n1;
	n=n1%2;
	if(n==0){
		cout<<"e par";
	}else{
		cout<<"e impar";
	}
	return 0;
}
