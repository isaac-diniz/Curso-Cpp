#include <iostream>

// teste2.h
void sub_rotina1() {
    std::cout << "mostrando uma mensagem" << std::endl;
}

void sub_rotina2() {
    int a, b, c;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    c = a - b;
    std::cout << "Resultado = " << c << std::endl;
}

int sub_rotina3(int x, int y) {
    int res;
    res = x * y;
    return res;
}

// teste21.cpp
int main() {
    int num1, num2, res;
    sub_rotina1();
    sub_rotina2();
    std::cout << "Digite um número: ";
    std::cin >> num1;
    std::cout << "Digite outro número: ";
    std::cin >> num2;
    res = sub_rotina3(num1, num2);
    std::cout << "resultado = " << res << std::endl;
    std::cin.ignore();
    return 0;
}
