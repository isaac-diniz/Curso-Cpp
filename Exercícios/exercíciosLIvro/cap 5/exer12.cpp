/*
Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os 
números que foram digitados.
*/
#include <iostream>
#include <cmath>
using namespace std;

bool primo (int n){
	if(n<1){
		return false;
	}
	for (int i=2; i<=sqrt(n); i++){
		if((n%i)==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n, cont=0;
	for(int i=0; i<10; i++){
		cout<<"insira o "<< i+1 <<" numero para continuar o programa:\n";
		cin>>n;
		if(primo(n)){
			cont+=1;
		}
	}
	cout<<"a quantidade de numeros primos digitados e: "<<cont;
	return 0;
}
