/*
Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário. 
EsCoLhA do usuári o oPErAção
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa. 
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/

#include <iostream>
using namespace std;
int main(){
	double n1, n2;
	int esc;
	cout<<"insira numero 1 e numero 2 respactivamente:\n";
	cin>>n1;
	cin>>n2;
	cout<<"escolha uma das operações abaixo:\n";
	cout<<"[1] média, [2] diferença do maior pelo menor, [3] produto entre os numeros, [4] divisão de n1 por n2\n";
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
