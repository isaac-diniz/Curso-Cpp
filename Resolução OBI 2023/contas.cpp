//questão 1 OBI 2023
//contas a pagar, devo receber 4 valores, o saldo disponível, e os valores das 3 dívidas
//deve retornar, o maior numero de contas que consegue pagar

#include <iostream>
using namespace std;
int main(){
	int valor;
	cin>>valor;
	int contas[3];
	for (int& val : contas)
		cin>>val;
	//teste:
	for (int val : contas){
		cout<<val<<endl;
	}
	
}
