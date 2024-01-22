/*
Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito. 
*/

#include <iostream>
using namespace std;
int main(){
    string clients[8];
    int dvds[8];
    for(int i=0; i<8; i++){
        cout<<"\nInforme o nome do cliente: ";
        cin>>clients[i];
        cout<<"\nInforme a quantidade de DVDs locados: ";
        cin>>dvds[i];
    }
    for(int i=0; i<8; i++){
        cout<<"\nQuantidade de discos que o(a) "<<clients[i]<<" tem direito gratuitamente: "<<dvds[i]/10;
    }
    return 0;
}