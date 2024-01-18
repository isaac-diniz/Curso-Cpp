/*
Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos. 
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez 
alunos. Mostre o número das matrículas que aparecem nos dois vetores. 
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
