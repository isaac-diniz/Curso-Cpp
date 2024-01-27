/*
Elabore um programa que preencha uma matriz 12  4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular 
e mostrar: 
■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso; 
■■ o total vendido em cada semana durante todo o ano; 
■■ o total vendido pela loja no ano.
*/
#include <iostream>
using namespace std;
int main(){
    string month1;
    double value[12][4], month[12]={0}, year=0;
    for(int i=0; i<12; i++){
        for(int z=0; z<4; z++){
            cout<<"\nInsira o valor vendido na semana: "<<z+1<<", do Mes: "<<i+1<<endl;
            cin>>value[i][z];
            month[i]+=value[i][z];
        }
        year+=month[i];
    }
    for(int i=0; i<12; i++){
        switch(i)
        {
        case 0:
            month1="Janeiro";
            break;
        case 1:
            month1="Fervereiro";
            break;
        case 2:
            month1="Marco";
            break;
        case 3:
            month1="Abril";
            break;
        case 4:
            month1="Maio";
            break;
        case 5:
            month1="Junho";
            break;
        case 6:
            month1="Julho";
            break;
        case 7:
            month1="Agosto";
            break;
        case 8:
            month1="Setembro";
            break;
        case 9:
            month1="Outubro";
            break;
        case 10:
            month1="Novembro";
            break;
        case 11:
            month1="Dezembro";
            break;

        }
        cout<<"\nO valor vendido no mes de "<<month1<<" foi de: "<<month[i];
        for(int z=0; z<4; z++){
            cout<<"\nO valor vendido na semana "<<z+1<<" de "<<month1<<" e de: "<<value[i][z];
        }
    }
    cout<<"\n\nO valor vendido no ano inteiro e de: "<<year;
    return 0;
}