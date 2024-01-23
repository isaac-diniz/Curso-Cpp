/*
Faça um programa que leia um vetor com dez posições para
números inteiros e mostre somente os números positivos
*/
#include <iostream>
using namespace std;
int main(){
    int tam=10, n=0;
    float vet[tam], pos[tam];
    for(int i=0; i<tam; i++){
        cin>>vet[i];
        if(vet[i]>0){
            n++;
            pos[n-1]=vet[i];
        }
    }
    for(int i=0; i<n; i++){
        cout<<pos[i]<<"\n";
    }
    return 0;
}