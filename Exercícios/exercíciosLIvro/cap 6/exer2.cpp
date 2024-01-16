/*
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre: 
¦¦ os números múltiplos de 2; 
¦¦ os números múltiplos de 3; 
¦¦ os números múltiplos de 2 e de 3. 
*/
#include <iostream>
using namespace std;
int main(){
	int x=7, n[x], y=0, m2[y], z=0, m3[z], a=0, m23[a];
	for(int i=0; i<x; i++){
		cin>>n[i];
		if((n[i]%2)==0){
			y++;
			m2[y-1]=n[i];
		}
		if((n[i]%3)==0){
			z++;
			m3[z-1]=n[i];
		}
		if((n[i]%2)==0 && (n[i]%3)==0){
			a++;
			m23[a-1]=n[i];
		}
	}
	cout<<"\nos multiplos de 2 sao:\n";
	for(int i=0; i<y; i++){
		cout<<m2[i]<<"; ";
	}
	cout<<"\nos multiplos de 3 sao:\n";
	for(int i=0; i<z; i++){
		cout<<m3[i]<<"; ";
	}
	cout<<"\nos multiplos de 2 e 3 sao:\n";
	for(int i=0; i<a; i++){
		cout<<m23[i]<<"; ";
	}
	return 0;
}
