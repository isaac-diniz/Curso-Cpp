#include <iostream>
using namespace std;

//aula de constantes "diretiva #define"

//variavel global (fora da fun��o
//pi � um exemplo de constante, sempre ser� esse valor
#define pi 3.14159
//basicamente uma troca, permuta��o, eu tenho pi e ele troca a minha constante por um valor definitivo

#define exemplo1 cout << "Insira um valor: ";



int main(){
	
	//exemplo de declara��o em apenas 1 linha
	
	//variaveis locais (dentro da fun��o main
	
	//int idade=17, nivel=60, quantidade=1;
	
	int isaac=0;
	
	cout << pi << "\n";
	
	exemplo1
	
	cin >> isaac;
	
	cout << "Valor recebido: " << isaac;
	
	return 0;
}
