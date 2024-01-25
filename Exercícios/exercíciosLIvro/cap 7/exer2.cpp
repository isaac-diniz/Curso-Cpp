/*
elementos entre 15 e 20. 
2. Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha; 
■■ a média dos elementos pares da matriz.
*/
#include <iostream>
using namespace std;
int main(){
    int vet[2][4], ln[2]={0}, qnt=0, par=0;
    for(int i=0; i<2; i++){
        for(int y=0; y<4; y++){
            cin>>vet[i][y];
            if(vet[i][y]>=12 && vet[i][y]<=20){
                ln[i]++;
            }
            if(vet[i][y]%2==0){
                par+=vet[i][y];
                qnt++;
            }
        }
        cout<<endl;
    }
    for(int i=0; i<2; i++){
        cout<<"\nA quantidade de numeros entre 12 e 20 na linha "<<i<<" e de: "<<ln[i];
    }
    cout<<"\nA media dos elementos pares da matriz e: "<<par/qnt;
    return 0;
}