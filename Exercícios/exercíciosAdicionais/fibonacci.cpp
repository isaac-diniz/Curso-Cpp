
#include <iostream>
using namespace std;
void fibo(int i)
int main(){

    return 0;
}
void fibo(int i){
    if(i==0) return 0;
    if(i==1) return 1;
    return fibo(i-1)+fibo(i-2);
}

/*
#include <iostream>
using namespace std;

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    // Caso base: Fibonacci(0) = 0, Fibonacci(1) = 1
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Chamada recursiva para calcular os dois termos anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Digite um número: ";
    cin >> n;

    // Exibe o n-ésimo termo da sequência de Fibonacci
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
*/