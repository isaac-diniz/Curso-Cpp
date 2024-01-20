/*
Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
¦¦ o nome do aluno com maior média (desconsiderar empates);
¦¦ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5. 
*/
#include <iostream>
using namespace std;
int main(){
    int tam=7, qnt=0;
    float med[tam], medapro[tam], nap[tam];
    string name[tam], napro[tam];
    for(int i=0; i<tam; i++){
        cout<<"Insira nome: ";
        cin>>name[i];
        cout<<"Insira a media: ";
        cin>>med[i];
        if(med[i]>med[0]){
            med[0]=med[i];
            name[0]=name[i];
        }
        if(med[i]<7){
            qnt++;
            napro[qnt-1]=name[i];
            nap[qnt-1]=0;
            medapro[qnt-1]=3;
            while(nap[qnt-1]<5){
                nap[qnt-1]=(med[i]+medapro[qnt-1])/2;
                medapro[qnt-1]++;
            }
        }
    }
    cout<<"\n\nA maior media (desconsiderando empates) e do: "<<name[0]<<"\nSua nota foi: "<<med[0];
    cout<<"\n\nAlunos que nao passaram e suas respectivas notas necessarias no exame final: ";
    for(int i=0; i<qnt; i++){
        cout<<"\n"<<napro[i]<<" : "<<medapro[i];
    }
    return 0;
}

