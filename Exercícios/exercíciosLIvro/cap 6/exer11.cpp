/*
Fa�a um programa que receba dez n�meros inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os n�meros pares e o segundo, com os n�meros �mpares. 
*/
#include <iostream>
using namespace std;
int main(){
	int vet1[10], impa=0, imp[10], par=0, pa[10];
	for(int i=0; i<10; i++){
		cout<<"\nInsira o "<<i+1<<" numero:\n";
		cin>>vet1[i];
		if((vet1[i]%2)==0){
			pa[par]=vet1[i];
			par++;
		}else{
			imp[impa]=vet1[i];
			impa++;
		}
	}
	cout<<"\nNumeros pares:\n";
	for(int i=0; i<par; i++){
		cout<<pa[i]<<"\n";
	}
	cout<<"\nNumeros impares:\n";
	for(int i=0; i<impa; i++){
		cout<<imp[i]<<"\n";
	}
	return 0;
}
