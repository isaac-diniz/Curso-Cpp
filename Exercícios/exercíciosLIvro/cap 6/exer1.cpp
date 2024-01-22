/*
Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros. Calcule e mostre: 
�� todos os n�meros pares; 
�� a quantidade de n�meros pares; 
�� todos os n�meros �mpares; 
�� a quantidade de n�meros �mpares.
*/
#include <iostream>
using namespace std;
int main(){
	int x=6, y=0, z=0;
	int n[x], p[y], im[z];
	for(int i=0; i<x; i++){
		cout<<"insira o "<<i+1<<" numero: ";
		cin>>n[i];
		if((n[i]%2)==0){
			y++;
			p[y-1]=n[i];
		}else{
			z++;
			im[z-1]=n[i];
		}
	}
	cout<<"\nos numeros pares inseridos sao:\n";
	for(int i=0; i<y; i++){
		cout<<p[i]<<"; ";
	}
	cout<<"\na quantidade de numeros pares digitados e: "<<y<<"\n";
	cout<<"\nos numeros impares inseridos sao:\n";
	for(int i=0; i<z; i++){
		cout<<im[i]<<"; ";
	}
	cout<<"\na quantidade de numeros impares digitados e: "<<z<<"\n";
	return 0;
}
