/*
Fa�a um programa que preencha um vetor com dez n�meros reais, calcule e mostre a quantidade de n�meros 
negativos e a soma dos n�meros positivos desse vetor.
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
