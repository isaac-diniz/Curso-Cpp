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

int main() {
    string months[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    double value[12][4];
    double monthTotal[12] = {0};
    double yearTotal = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "\nInsira o valor vendido na semana " << j + 1 << " do mes de " << months[i] << ": ";
            cin >> value[i][j];
            monthTotal[i] += value[i][j];
        }
        yearTotal += monthTotal[i];
    }

    cout << "\nTotal vendido por mes:\n";
    for (int i = 0; i < 12; i++) {
        cout << months[i] << ": " << monthTotal[i] << endl;
    }

    cout << "\nTotal vendido por semana:\n";
    for (int j = 0; j < 4; j++) {
        double weekTotal = 0;
        for (int i = 0; i < 12; i++) {
            weekTotal += value[i][j];
        }
        cout << "Semana " << j + 1 << ": " << weekTotal << endl;
    }

    cout << "\nTotal vendido no ano inteiro: " << yearTotal << endl;

    return 0;
}