/*
Faça um programa que preencha dois vetores de dez posições cada,
determine e mostre um terceiro contendo os elementos dos dois vetores
anteriores ordenados de maneira decrescente.
*/
#include <iostream>
using namespace std;
int main(){
    int i, tam=10;
    float vet1[tam], vet2[tam], vet3[tam*2];
    for(i=0; i<tam; i++){
        cout<<"\nInsira o valor "<<i+1<<" do vetor 1: ";
        cin>>vet1[i];
        cout<<"\nInsira o valor "<<i+1<<" do vetor 2: ";
        cin>>vet2[i];
        vet3[i]=vet1[i];
        vet3[tam+i]=vet2[i];
    }
    for(i=0; i<tam*2-1; i++){
        for(int z=i+1; z<tam*2; z++){
            if(vet3[i]<vet3[z]){
                float aux=vet3[i];
                vet3[i]=vet3[z];
                vet3[z]=aux;
            }
        }
    }
    cout<<"\nOs numeros em ordem decrescente:\n";
    for(i=0; i<2*tam; i++){
        cout<<vet3[i]<<"\n";
    }
    return 0;
}