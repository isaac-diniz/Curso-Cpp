/*
Crie um programa que preencha duas matrizes 3  8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3  8; 
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3  8. 
*/
#include <iostream>
using namespace std;
int main(){
    float matr1[3][8], matr2[3][8], result1[3][8], result2[3][8];
    for(int i=0; i<3; i++){
        for(int z=0; z<8; z++){
            cin>>matr1[i][z];
            cin>>matr2[i][z];
            result1[i][z]=matr1[i][z]+matr2[i][z];
            if(matr1[i][z]>=matr2[i][z]){
                result2[i][z]=matr1[i][z]-matr2[i][z];
            }else{
                result2[i][z]=matr2[i][z]-matr1[i][z];
            }
        }
    }
    cout<<"resultante 1:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            cout<<result1[i][j]<<", ";
        }
        cout<<endl;
    }
    cout<<"resultante 2:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            cout<<result2[i][j]<<", ";
        }
        cout<<endl;
    }
    return 0;
}