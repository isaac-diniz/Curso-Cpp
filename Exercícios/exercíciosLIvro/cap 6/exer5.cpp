/*
Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas L�gica e Linguagem de
Programa��o. Coloque os n�meros das matr�culas dos alunos que cursam L�gica em um vetor, quinze alunos. 
Coloque os n�meros das matr�culas dos alunos que cursam Linguagem de Programa��o em outro vetor, dez 
alunos. Mostre o n�mero das matr�culas que aparecem nos dois vetores. 
*/
#include <iostream>
using namespace std;
int main(){
	int tL=15, tP=10, log[tL], ling[tP], y=0, temp[y];
	cout<<"Alunos de logica:\n";
	for(int i=0; i<tL; i++){
		cin>>log[i];
	}
	cout<<"\n\nAlunos de linguagem010:\n";
	for(int i=0; i<tP; i++){
		cin>>ling[i];
	}
	for(int i=0; i<tL; i++){
		for(int z=0; z<tP; z++){
			if(log[i]==ling[z]){
				y++;
				temp[y-1]=ling[z];
				break;
			}
		}
	}
	cout<<"as matriculas dos alunos que estao nos dois cursos sao:\n";
	for(int i=0; i<y; i++){
		cout<<temp[i]<<"\n";
	}
	return 0;
}
