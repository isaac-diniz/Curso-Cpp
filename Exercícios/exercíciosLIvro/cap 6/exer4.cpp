/*
Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos 
iguais a 30, mostrando as posições em que apareceram.
*/
#include <iostream>
using namespace std;
int main(){
	int tam=30, vet[tam], x=0, posi[x];
	for (int i=0; i<tam; i++){
		cout<<"Insira o "<<i+1<<" numero: ";
		cin>>vet[i];
		if(vet[i]==30){
			x++;
			posi[x-1]=i;
		}
	}
	cout<<"\n\nAs posicoes do vetor em que o numero inserido e igual a 30 sao:\n";
	for(int i=0; i<x; i++){
		cout<<posi[i]<<"\n";
	}
	return 0;
}
