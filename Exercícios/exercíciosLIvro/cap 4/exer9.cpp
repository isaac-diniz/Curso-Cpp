/*
Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no �ltimo ano. Fa�a
um programa que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de acordo com a tabela a 
seguir. Mostre o saldo m�dio e o valor do cr�dito
*/
#include <iostream>
using namespace std;
int main(){
	double saldM, cred;
	cout<<"insira o saldo medio: ";
	cin>>saldM;
	if(saldM>400){
		cred=saldM*1.3;
		cout<<cred;
	}else if(saldM>300){
		cred=saldM*1.25;
		cout<<cred;
	}else if(saldM>200){
		cred=saldM*1.2;
		cout<<cred;
	}else{
		cred=saldM*1.1;
		cout<<cred;
	}
	return 0;
}
