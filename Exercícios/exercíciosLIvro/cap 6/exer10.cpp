/*
Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros,
calcule e mostre dois vetores resultantes.

O primeiro vetor resultante será composto pela soma de cada número par do primeiro vetor somado a todos os números do segundo vetor.

O segundo vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor tem no segundo vetor

*/
#include <iostream>
using namespace std;
int main(){
	int i, tam=10, tam2=5, vet1[tam]={0}, vet2[tam2]={0};
	int vet21[tam], vet22[tam];
	for(i=0; i<tam; i++){
		cout<<"\ninsira o valor "<<i+1<<" do 1 vetor: ";
		cin>>vet1[i];
	}
	for(i=0; i<tam2; i++){
		cout<<"\ninsira o valor "<<i+1<<" do 2 vetor: ";
		cin>>vet2[i];
	}
	for(i=0; i<tam; i++){
		if((vet1[i]%2)==0){
			for(int z=0; z<tam2; z++){
				vet1[i]+=vet2[z];
                vet21[i]=vet1[i];
			}
		}
	}
	for(i=0; i<tam; i++){
		if((vet1[i]%2)!=0){
			for(int z=0; z<tam2; z++){
				if(vet1[i]%vet2[z]==0){
					vet22[i]++;
				}
			}
		}
	}
	cout<<"\n\nPrimeira saida (vetor 1): ";
	for(i=0; i<tam; i++){
		cout<<"\nvalor: "<<vet21[i];
	}
	
	cout<<"\n\nSegunda saida (vetor 2): ";
	for(i=0; i<tam; i++){
		cout<<"\nvalor: "<<vet22[i];
	}
	return 0;
}
