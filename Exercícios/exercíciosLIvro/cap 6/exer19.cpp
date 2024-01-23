/*
Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
#include <iostream>
using namespace std;
int main(){
    int tam=10;
    float vet1[tam], vet2[tam], result[tam];
    for(int i=0; i<tam; i++){
        cout<<"\nInsira o numero "<<i+1<<" do primeiro vetor: ";
        cin>>vet1[i];
        cout<<"\nInsira o numero "<<i+1<<" do primeiro vetor: ";
        cin>>vet2[i];
        result[i]=vet1[i]*vet2[i];
    }
    for(int i=0; i<tam; i++){
        cout<<"\nPosicao "<<i<<" do vetor resultante: "<<result[i];
    }
    return 0;
}