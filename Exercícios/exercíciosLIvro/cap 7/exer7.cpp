#include <iostream>
using namespace std;

int main() {
    float m[4][6], n[6][4], coluM[4] = {0}, liN[6] = {0};

    // Preenchendo a matriz M
    cout << "Matriz M:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> m[i][j];
            coluM[i] += m[i][j];
        }
    }

    // Preenchendo a matriz N
    cout << "\nMatriz N:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> n[i][j];
            liN[i] += n[i][j];
        }
    }

    // Calculando e imprimindo a soma das linhas de M com as colunas de N
    cout << "\nSoma das linhas de M com as colunas de N:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << coluM[i] + liN[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
