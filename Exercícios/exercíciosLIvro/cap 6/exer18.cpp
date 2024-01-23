/*
Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor. 
*/
#include <iostream>
#include <limits>
using namespace std;
int main(){
    int posiMai, posiMen, tam=15;
    float vet[tam], men=numeric_limits<float>::max()-1;;
    for(int i=0; i<tam; i++){
        cout<<"\nInsira o valor da "<<i+1<<" colocação do vetor: ";
        cin>>vet[i];
        if(vet[i]<men){
            men=vet[i];
            posiMen=i;
        }else{
            vet[0]=vet[i];
            posiMai=i;
        }
    }
    cout<<"\nO maior numero e: "<<vet[0]<<". Sua posicao e: "<<posiMai;
    cout<<"\nO menor numero e: "<<men<<". Sua posicao e: "<<posiMen;
    return 0;
}