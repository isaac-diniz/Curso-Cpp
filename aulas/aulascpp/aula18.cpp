#include <iostream>
using namespace std;
int main(){
	
	//vetores (array
	//cria uma variavel com 10 posições "índicies" (ex: 0...9)
	
	int tam=5;
	
	int vetorEx[tam];
	vetorEx[0]=10;
	
	/*
	vetorEx[1]=20;
	vetorEx[2]=30;
	vetorEx[3]=40;
	*/
	
	for (int i=1; i<tam; i++){
		vetorEx[i]=vetorEx[(i-1)]+10;
	}
	
	//vetorEx[10] é um erro, o vetor tem 10 posições, mas não vai até o 10, ja que começa em 0	
	/*
						cada variavel em inteiro vale 4 bytes
						e a função sizeof retorna o espaço ocupado em memoria
						logo, se cada variavel vale 4 bytes, dividimos
						por 4 para achar a quantidade de variaveis
						 
	for(int c=0; c<sizeof(vetorEx)/4; c++){
		cout<<"\n"<<vetorEx[c]<<"\n";
	}
	
	*/
	
	for(int c=0; c<tam; c++){
		cout<<"\n"<<vetorEx[c]<<"\n";
	}
	
	return 0;
}
