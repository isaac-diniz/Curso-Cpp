/*
Fa�a um programa que receba cinco n�meros e mostre a sa�da a seguir:
Digite o 1� n�mero 5
Digite o 2� n�mero 3
Digite o 3� n�mero 2
Digite o 4� n�mero 0
Digite o 5� n�mero 2
Os n�meros digitados foram: 5 + 3 + 2 + 0 + 2 = 12
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
