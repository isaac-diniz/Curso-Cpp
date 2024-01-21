#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    const int tam2 = 5;
    int vet1[tam], vet2[tam2];
    int vet21[tam] = {0};  // Inicializa com zeros
    int vet22[tam] = {0};  // Inicializa com zeros

    // Preenchendo o primeiro vetor
    for (int i = 0; i < tam; i++) {
        cout << "\nInsira o valor " << i + 1 << " do 1 vetor: ";
        cin >> vet1[i];
    }

    // Preenchendo o segundo vetor
    for (int i = 0; i < tam2; i++) {
        cout << "\nInsira o valor " << i + 1 << " do 2 vetor: ";
        cin >> vet2[i];
    }

    // Calculando os vetores resultantes
    for (int i = 0; i < tam; i++) {
        if (vet1[i] % 2 == 0) {
            for (int z = 0; z < tam2; z++) {
                vet21[i] += vet1[i] + vet2[z];
            }
        }
    }

    for (int i = 0; i < tam; i++) {
        if (vet1[i] % 2 != 0) {
            for (int z = 0; z < tam2; z++) {
                if (vet1[i] % vet2[z] == 0) {
                    vet22[i]++;
                }
            }
        }
    }

    // Imprimindo os vetores resultantes
    cout << "\n\nPrimeira saida (vetor 1): ";
    for (int i = 0; i < tam; i++) {
        cout << "\nvalor: " << vet21[i];
    }

    cout << "\n\nSegunda saida (vetor 2): ";
    for (int i = 0; i < tam; i++) {
        cout << "\nvalor: " << vet22[i];
    }

    return 0;
}

