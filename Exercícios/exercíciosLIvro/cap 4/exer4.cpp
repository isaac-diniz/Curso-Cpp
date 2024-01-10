/*
Faça um programa que receba três números e mostre o maior
*/
#include <iostream>
using namespace std;
int main(){
	double n1, n2, n3;
	cout<<"insira 3 numeros a seguir:\n";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	if(n1>n2){
		if(n1>n3){
			cout<<"maior numero: "<<n1;
		}else{
			cout<<"maior numero: "<<n3;
		}
	}else if(n3>n2){
		cout<<"maior numero: "<<n3;
	}else{
		cout<<"maior numero: "<<n2;
	}
	return 0;
}
