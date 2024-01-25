/*
Elabore um programa que preencha uma matriz 6  3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna; 
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna. 
*/
#include <iostream>
#include <limits>
using namespace std;
int main(){
    float vet[7][4], posma[2]={0}, posme[2]={0};
    vet[6][3]=numeric_limits<float>::max()-1;
    for(int i=0; i<6; i++){
        for(int o=0; o<3; o++){
            cin>>vet[i][o];
            if(vet[i][o]>=vet[0][0]){
                vet[0][0]=vet[i][o];
                posma[0]=i;
                posma[1]=o;
            }
            if(vet[i][o]<vet[6][3]){
                vet[6][3]=vet[i][o];
                posme[0]=i;
                posme[1]=o;
            }
        }
        cout<<endl;
    }
    cout<<"\nO maior elemento da matriz e: "<<vet[0][0]<<" e sua posicao e: "<<posma[0]<<", "<<posma[1]<<endl;
    cout<<"\nO menor elemento da matriz e: "<<vet[6][3]<<" e sua posicao e: "<<posme[0]<<", "<<posme[1]<<endl;
    return 0;
}
