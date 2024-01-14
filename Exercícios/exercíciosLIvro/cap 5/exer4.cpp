/*
Faça um programa que receba um número, calcule e mostre a tabuada desse número.
*/
#include <iostream>
using namespace std;
int main(){
	double n;
	cin>>n;
	for(int i=0; i<=10; i++){
		cout<<"\n"<<n<<" x "<<i<<" = "<<n*i<<"\n";
	}
	return 0;
}
