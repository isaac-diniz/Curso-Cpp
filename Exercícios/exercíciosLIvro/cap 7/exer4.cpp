/*
Faça um programa que receba: 
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15  5; 
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições. 
O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado 
ou exame); 
■■ a média da classe.
*/
#include <iostream>
using namespace std;
int main(){
    string name[15]={" "}, sit[15];
    float nota[15][5], media[15]={0}, tot=0;
    for(int i=0; i<15; i++){
        cout<<"\nInsira o nome do aluno: ";
        cin>>name[i];
        cout<<"\n\nAluno: "<<name[i];
        for (int z=0; z<5; z++){
            cout<<"\nInsira a "<<z+1<<" nota do aluno: ";
            cin>>nota[i][z];
            media[i]+=nota[i][z];
        }
        media[i]=media[i]/5;
        if(media[i]>=7){
            sit[i]="Aprovado";
        }else if(media[i]>=3){
            sit[i]="Exame";
        }else{
            sit[i]="Reprovado";
        }
        tot+=media[i];
    }
    for(int i=0; i<15; i++){
        cout<<"\nSITUACAO DO ALUNO: "<<name[i]<<endl;
        cout<<"Media: "<<media[i]<<"\nSituacao: "<<sit[i]<<endl;
    }
    cout<<"\n\nMedia da turma: "<<tot/15;
    return 0;
}