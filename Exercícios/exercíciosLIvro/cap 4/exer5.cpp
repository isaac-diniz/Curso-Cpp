/*
Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio. 
1 M�dia entre os n�meros digitados
2 Diferen�a do maior pelo menor
3 Produto entre os n�meros digitados
4 Divis�o do primeiro pelo segundo
Se a op��o digitada for inv�lida, mostre uma mensagem de erro e termine a execu��o do programa. 
Lembre-se de que, na opera��o 4, o segundo n�mero deve ser diferente de zero.
*/

#include <iostream>
using namespace std;
int main(){
	double n1, n2;
	int esc;
	cout<<"insira numero 1 e numero 2 respactivamente:\n";
	cin>>n1;
	cin>>n2;
	cout<<"escolha uma das operacoes abaixo:\n";
	cout<<"[1] media, [2] diferenca do maior pelo menor, [3] produto entre os numeros, [4] divisao de n1 por n2\n";
	cin>>esc;
	if (esc==1){
		cout<<(n1+n2)/2;
	}else if(esc==2){
		if(n1>n2){
			cout<<n1-n2;
		}else{
			cout<<n2-n1;
		}
	}else if(esc==3){
		cout<<n1*n2;
	}else if(esc==4){
		if(n2==0){
			cout<<"erro";
		}else{
			cout<<n1/n2;
		}
	}else{
		cout<<"erro";
	}
	return 0;
}
