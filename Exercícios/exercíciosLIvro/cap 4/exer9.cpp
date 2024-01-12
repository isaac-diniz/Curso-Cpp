/*
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a 
seguir. Mostre o saldo médio e o valor do crédito
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
