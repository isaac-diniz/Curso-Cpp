/*
Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre: 
¦¦ a quantidade de pessoas com idade superior a 50 anos; 
¦¦ a média das alturas das pessoas com idade entre 10 e 20 anos; 
¦¦ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
*/

#include <iostream>
using namespace std;
int main(){
	double meda=0, h, p;
	int id, count=0, count1=0, p100p40=0;
	for(int i=0; i<5; i++){
		cout<<"insira idade da pessoa "<<i+1<<" :\n";
		cin>>id;
		cout<<"insira altura da pessoa "<<i+1<<" :\n";
		cin>>h;
		cout<<"insira peso da pessoa "<<i+1<<" :\n";
		cin>>p;
		cout<<"\n\n\n";
		if(id>=10 && id <=20){
			count1+=1;
			meda+=h;
		}
		if(p<40){
			p100p40+=20;
		}
		if(id>50){
			count+=1;
		}
	}
	cout<<"quantidade de pessoas com idade superior a 50 anos: ";
	cout<<count<<"\n";
	cout<<"media das alturas das pessoas com idade entre 10 e 20 anos: ";
	cout<<meda/count1<<"\n";
	cout<<"porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas: ";
	cout<<p100p40<<"%\n";
	return 0;
}
