/*
Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário
*/
#include <iostream>
using namespace std;
int main(){
	double sal;
	cout<<"insira salario: ";
	cin>>sal;
	if(sal<300){
		cout<<sal*1.15;
	}else if(sal<600){
		cout<<sal*1.1;
	}else if(sal<=900){
		cout<<sal*1.05;
	}else{
		cout<<sal;
	}
	return 0;
}
