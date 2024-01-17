#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int cod[tam], tEst[tam], codC, contadorW = 0, codP[tam], qntP[tam], exis = 0;
    char desicao;

    cout << "=====================";
    cout << "\nParte do Proprietario\n";
    cout << "=====================\n";

    for (int i = 0; i < tam; i++) {
        cout << "Insira o codigo do " << i + 1 << " produto (proibido produto com codigo 0): ";
        cin >> cod[i];
        cout << "Insira a quantidade em estoque do " << i + 1 << " produto: ";
        cin >> tEst[i];
    }

    cout << "=====================";
    cout << "\n  Parte do cliente\n";
    cout << "=====================";
    cout << "\nInsira o codigo do cliente: ";
    cin >> codC;

    if (codC == 0) {
        cout << "Programa encerrado";
        return 0;
    }

    cout << "Começando as compras!\n\n";

    while (true) {
        cout << "Insira o codigo do produto " << contadorW + 1 << "\n";
        cout << "OBS: Inserir 0 nessa parte do programa encerra as compras\n";
        cin >> codP[contadorW];

        if (codP[contadorW] == 0) {
            cout << "Compras encerradas!\n\n\n";
            break;
        }

        for (int i = 0; i < tam; i++) {
            if (codP[contadorW] == cod[i]) {
                exis = i + 1;
                break;
            }
        }

        if (exis != 0) {
            cout << "Produto em estoque!\nQuantidade: " << tEst[exis - 1] << "\n";
            cout << "Insira a quantidade desejada do produto cujo codigo foi inserido atras: ";
            cin >> qntP[contadorW];

            if (qntP[contadorW] <= tEst[exis - 1]) {
                tEst[exis - 1] -= qntP[contadorW];
                contadorW++;
            } else {
                cout << "Nao temos essa quantidade!\n\n";
            }
        } else {
            cout << "Produto não existe\nDeseja continuar? [s]sim / [n]nao\n";
            cin >> desicao;

            if (desicao != 's' && desicao != 'S') {
                break;
            }
        }

        cout << "\nEstoque atualizado:\n";
        for (int i = 0; i < tam; i++) {
            cout << "Codigo: " << cod[i] << ", Estoque: " << tEst[i] << "\n";
        }
    }
    return 0;
}

