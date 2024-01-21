/*
Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o
 aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o
 aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??
*/
#include <iostream>
#include <limits>
using namespace std;
int main(){
	int i=0, numi[2]={0};
	string name[8]={" "};
	float nota[8]={0}, soma=0, men=numeric_limits<float>::max()-1;
	for(i=0; i<8; i++){
		cout<<"\nInsira o nome do "<<i+1<<" aluno: ";
		cin>>name[i];
		cout<<"\nDigite a nota do(a) "<<name[i]<<": ";
		cin>>nota[i];
		if(nota[i]>nota[0]){
			nota[0]=nota[i];
			numi[0]=i;
			//nota[0] é a maior nota;
		}
		if(nota[i]<=men){
			men=nota[i];
			numi[1]=i;
		}
		soma+=nota[i];
	}
	cout<<"\n\nRelatorio de notas:";
	cout<<"\nMaior nota: "<<nota[0]<<". Aluno: "<<name[numi[0]];
	cout<<"\nMenor nota: "<<men<<". Aluno: "<<name[numi[1]];
	cout<<"\nMedia da classe: "<<soma/8;
	return 0;
}
