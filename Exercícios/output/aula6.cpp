#include <iostream>

using namespace std;

//a vari�vel global pode ser usada para qualquer parte do nosso c�digo
//enquanto uma vari�vel local � utilizada somente em uma �rea espec�fica (fun��o

int n1, n2;  //vari�veis globais

int main(){
	
	int n3, n4;  //vari�veis locais
	
	int result;
	
	cout << "Insira valor para n1: ";
	cin >> n1;
	cout << "\nInsira valor para n2: ";
	cin >> n2;
	cout << "\nInsira valor para n3: ";
	cin >> n3;
	cout << "\nInsira valor para n4: ";
	cin >> n4;
	
	//operadores matem�ticos
	
	result = n1 * (n4+n3) - n2 /n1;
	
	cout << "\nO resutado final foi: " << result;
	
	return 0;
}
