/*
Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do 
programa. As opções são: 
a) O primeiro número elevado ao segundo número. 
b) Raiz quadrada de cada um dos números. 
c) Raiz cúbica de cada um dos números. 
*/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main(){
	double n1, n2;
	int esc;
	cout<<"insira numero 1 e numero 2 respactivamente:\n";
	cin>>n1;
	cin>>n2;
	cout<<"escolha uma das operacoes abaixo:\n";
	cout<<"[1] n1 elevado a n2, [2] raiz quadrada de n1 e n2, [3] raiz cubida de n1 e n2";
	cin>>esc;
	if (esc==1){
		cout<<pow(n1, n2);
	}else if(esc==2){
		cout<<sqrt(n1)<<"  "<<sqrt(n2);
	}else if(esc==3){
		cout<<cbrt(n1)<<"  "<<cbrt(n2);
	}else{
		cout<<"erro";
	}
	return 0;
}
