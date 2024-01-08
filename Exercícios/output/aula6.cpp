#include <iostream>

using namespace std;

//a variável global pode ser usada para qualquer parte do nosso código
//enquanto uma variável local é utilizada somente em uma área específica (função

int n1, n2;  //variáveis globais

int main(){
	
	int n3, n4;  //variáveis locais
	
	int result;
	
	cout << "Insira valor para n1: ";
	cin >> n1;
	cout << "\nInsira valor para n2: ";
	cin >> n2;
	cout << "\nInsira valor para n3: ";
	cin >> n3;
	cout << "\nInsira valor para n4: ";
	cin >> n4;
	
	//operadores matemáticos
	
	result = n1 * (n4+n3) - n2 /n1;
	
	cout << "\nO resutado final foi: " << result;
	
	return 0;
}
