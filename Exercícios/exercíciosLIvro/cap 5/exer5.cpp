/*
Faça um programa que mostre as tabuadas dos números de 1 a 10.
*/
#include <iostream>
using namespace std;
int main(){
	for(int i=1; i<=10; i++){
		cout<<"\n\ntabuada do: "<<i<<"\n";
		for(int c=1; c<=10; c++){
			cout<<c<<" x "<<i<<" = "<<c*i<<"\n";
		}
	}
	return 0;
}
