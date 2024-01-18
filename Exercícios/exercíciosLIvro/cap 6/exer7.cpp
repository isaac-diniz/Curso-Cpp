/*
Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números 
negativos e a soma dos números positivos desse vetor.
*/
#include <iostream>
using namespace std;
int main(){
	int tam=10, qnt, i;
	double nr[tam], som=0;
	for(i=0; i<tam; i++){
		cin>>nr[i];
		if(nr[i]>=0){
			som+=nr[i];
		}else{
			qnt++;
		}
	}
	cout<<"\n\nA quantidade de numeros negativos e: "<<qnt<<"\nA soma dos positivos e: "<<som;
	return 0;
}
