/*
Faça um programa que preencha uma matriz 3  5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.
*/
#include <iostream>
using namespace std;
int main(){
    int vet[3][5], result=0;
    for(int i=0; i<3; i++){
        for(int z=0; z<5; z++){
            cin>>vet[i][z];
            if(vet[i][z]>=15 && vet[i][z]<=20){
                result++;
            }
        }
    }
    cout<<result;
    return 0;
}