#include <iostream>
using namespace std;

//aula de constantes "diretiva #define"

//variavel global (fora da função
//pi é um exemplo de constante, sempre será esse valor
#define pi 3.14159
//basicamente uma troca, permutação, eu tenho pi e ele troca a minha constante por um valor definitivo

#define exemplo1 cout << "Insira um valor: ";



int main(){
	
	//exemplo de declaração em apenas 1 linha
	
	//variaveis locais (dentro da função main
	
	//int idade=17, nivel=60, quantidade=1;
	
	int isaac=0;
	
	cout << pi << "\n";
	
	exemplo1
	
	cin >> isaac;
	
	cout << "Valor recebido: " << isaac;
	
	return 0;
}
