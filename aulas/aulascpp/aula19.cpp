/*
exemplo:
int matriz[linhas:  5][colunas:  6];
    modelo gráfico:
                  colunas
             0  1  2  3  4  5
            ___________________
       0    |__|__|__|__|__|__| 
       1    |__|__|_5|__|__|__| 
Linhas 2    |__|__|__|__|__|__|  Linhas
       3    |__|__|__|__|__|__| 
       4    |__|__|__|__|__|10| 

                  colunas

    matriz[1][2] = 5;
    matriz[4][5] = 10;
*/
#include <iostream>
using namespace std;
int main(){
    int matriz[6][6];
    for(int linhas=0; linhas<6; linhas++){
        for(int colunas=0; colunas<6; colunas++){
            matriz[linhas][colunas]=linhas+colunas;
        }
    }
    for(int l=0; l<6; l++){
        for(int c=0; c<6; c++){
            cout<<matriz[l][c]<<",  ";
        }
        cout<<"\n";
    }
    return 0;
}