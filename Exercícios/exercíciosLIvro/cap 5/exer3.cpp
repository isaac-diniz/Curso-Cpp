/*
Faça um programa que receba a idade de oito pessoas, calcule e mostre: 
a) a quantidade de pessoas em cada faixa etária; 
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas. 
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

1a Até 15 anos
2a De 16 a 30 anos
3a De 31 a 45 anos
4a De 46 a 60 anos
5a Acima de 60 anos
*/
#include <iostream>
using namespace std;
int main(){
	double first, last, idd, fx[5];
	for(int i=0; i<5; i++){
		fx[i]=0;
	}
	for(int i=0; i<8; i++){
		cout<<"insira a idade de numero "<<i+1<<": ";
		cin>>idd;
		if(idd<=15){
			fx[0]++;
		}else if(idd<=30){
			fx[1]++;
		}else if(idd<=45){
			fx[2]++;
		}else if(idd<=60){
			fx[3]++;
		}else{
			fx[4]++;
		}
	}
	for(int i=0; i<5; i++){
		cout<<"a quantidade de pessoas na faixa etaria "<<i+1<<" e de: "<<fx[i]<<"\n";
	}
	first=(fx[0]/8)*100;
	last=(fx[4]/8)*100;
	
	cout<<"a porcentagem de pessoas na faixa 1 e: "<<first<<"\n";
	cout<<"a porcentagem de pessoas na faixa 5 e: "<<last<<"\n";
	
	return 0;
}
