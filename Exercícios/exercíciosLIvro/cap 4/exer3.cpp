/*
Faça um programa que receba dois números e mostre o menor.
*/

#include <iostream>
using namespace std;
int main(){
	double n1, n2;
	cin>>n1;
	cin>>n2;
	if(n1>n2){
		cout<<n2;
	}else if(n1<n2){
		cout<<n1;
	}else{
		cout<<"sao iguais.";
	}
	return 0;
}
