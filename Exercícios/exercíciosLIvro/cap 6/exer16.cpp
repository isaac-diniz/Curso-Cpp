/*
Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;
■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■■ a média dos preços dos produtos com preço superior a R$ 100,00. 
*/
#include <iostream>
using namespace std;
int main(){
    int tam=5, i, x=0, y=0, z=0;
    string name[tam]={" "}, nameMed[tam];
    float price[tam]={0}, medPrec;
    //receber
    for(i=0; i<tam; i++){
        cout<<"\nInsira o nome do "<<i+1<<" produto: ";
        cin>>name[i];
        cout<<"\nInsira o preco desse produto: ";
        cin>>price[i];
        if(price[i]<50){
            z++;
        }else if(price[i]<=100){
            y++;
            nameMed[y-1]=name[i];
        }else{
            x++;
            medPrec+=price[i];
        } 
    }
    //mostrar
    cout<<"\nA quantidade de produtos com preco inferior a 50 e: "<<z;
    cout<<"\nO nome dos produtos com preco inferior a 100 e superior a 50 e:";
    for (i=0; i<y; i++){
        cout<<"\n     "<<nameMed[i];
    }
    cout<<"\nA media de preco dos protudos acima de RS 100 e de: "<<medPrec/x;
    return 0;
}