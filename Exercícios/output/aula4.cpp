#include <iostream>

using namespace std;

int main(){
	
	//tipo, nome, valorPadr�o ("=" atribuir, inserir)
	
	int exemplos=0; //n�meros inteiros
	
	char exemploLetra='B'; //char => caractere, caractere 'B' com ap�strofro
	//ex: char letras[10]"10 caracteres" � um vetor, armazena um texto, por�m cada caractere em uma posi��o
	
	double exemploDecimal=0.1; //n�meros reais
	
	float exemploDecimalMenos=0.1; //semelhante ao double, por�m, menos preciso
	//ex: double="4.99999", float="5.0"
	
	bool exemploSimples=true; //true=Verdadeiro=1 ou false=falso=0, booleano, sim ou n�o
	//testes condicionais
	
	string exemploText="Isaac"; //diferente do char, armazena um texto ao inv�s de apenas um caractere
	
	cout << exemplos << "\n";
	cout << exemploLetra << "\n";
	cout << exemploDecimal << "\n";
	cout << exemploDecimalMenos << "\n";
	cout << exemploSimples << "\n";
	cout << exemploText << "\n";
	
	return 0;
}
