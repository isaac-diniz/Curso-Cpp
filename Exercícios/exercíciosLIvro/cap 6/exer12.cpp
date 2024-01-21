/*
Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/
#include <iostream>
using namespace std;
int main(){
	int var[5], soma=0;
	for(int i=0; i<5; i++){
		cout<<"\nDigite o "<<i+1<<" numero: ";
		cin>>var[i];
		soma+=var[i];
	}
	cout<<"\n\nOs numeros digitados foram: ";
	for(int i=0; i<5; i++){
		if(i==4){
			cout<<var[i]<<" = ";
		}else{
			cout<<var[i]<<" + ";
		}
	}
	cout<<soma;
	return 0;
}
