/*
Faça um programa que preencha uma matriz 20  10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da 
matriz pela soma da coluna e mostrar a matriz resultante. 
*/
#include <iostream>
using namespace std;
int main(){
    float num[20][10]={0}, col[20]={0}, result[20][10]={0};
    for(int i=0; i<20; i++){
        for(int z=0; z<10; z++){
            cin>>num[i][z];
            col[i]+=num[i][z];
        }
        for(int z=0; z<10; z++){
            result[i][z]=num[i][z]*col[i];
        }
    }
    for(int i=0; i<20; i++){
        for(int z=0; z<10; z++){
            cout<<"\na linha: "<<z<<" da coluna "<<i<<": "<<result[i][z]<<endl;
        }
        cout<<"\n\n";
    }
}