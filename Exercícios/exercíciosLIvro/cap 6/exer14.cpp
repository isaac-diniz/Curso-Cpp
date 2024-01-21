/*
Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas: 
ALUNO 1a
 PROVA 2a
 PROVA MÉDIA SITUAÇÃO
Carlos 8,0 9,0 8,5 Aprovado
Pedro 4,0 5,0 4,5 Reprovado
¦¦ média da classe = ? 
¦¦ percentual de alunos aprovados = ?% 
¦¦ percentual de alunos de exame = ?% 
¦¦ percentual de alunos reprovados = ?% 
*/

#include <iostream>
using namespace std;
int main(){
	int i;
	float nota1[6], nota2[6], media[6], soma=0, apr=0, rec=0, rep=0;
	string name[6], sit[6];
	for(i=0; i<6; i++){
		cout<<"\nInsira o nome do "<<i+1<<" aluno: ";
		cin>>name[i];
		cout<<"\nInsira a nota na 1 prova do(a) "<<name[i]<<": ";
		cin>>nota1[i];
		cout<<"\nInsira a nota na 2 prova do(a) "<<name[i]<<": ";
		cin>>nota2[i];
		cout<<"\n\n";
		media[i]=(nota1[i]+nota2[i])/2;
		if(media[i]>6){
			sit[i]="aprovado";
			apr++;
		}else if(media[i]>3){
			sit[i]="recuperacao";
			rec++;
		}else{
			sit[i]="reprovado";
			rep++;
		}
		soma+=media[i];
	}
	cout<<"\n\nrelatorio de notas\n\n";
	for(i=0; i<6; i++){
		cout<<"\n"<<name[i]<<": nota 1 = "<<nota1[i]<<" nota 2 = "<<nota2[i]<<" Media = "<<media[i]<<". Situacao: "<<sit[i];
	}
	cout<<"\nMedia da classe: "<<soma/6;
	cout<<"\npercentual de alunos aprovados: "<<apr/6<<"%";
	cout<<"\npercentual de alunos de recupercao: "<<rec/6<<"%";
	cout<<"\npercentual de alunos reprovados: "<<rep/6<<"%";	
	return 0;
}
