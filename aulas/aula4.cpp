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
	
	cout << "Digite um numero inteiro para nosso exemplo: ";
	cin >> exemplos;
	
	cout << "Digite uma letra: ";
	cin >> exemploLetra;
	
	cout << "Digite um numero real para nosso exemplo: ";
	cin >> exemploDecimal;
	
	cout << "Digite um numero real nao tao preciso para nosso exemplo: ";
	cin >> exemploDecimalMenos;
	
	//n�o faz sentido receber um valor bool do usu�rio, j� que n�o seria uma afirma��o ou nega��o
	
	cout << "Digite um texto para nosso exemplo: ";
	cin >> exemploText;
	
	cout << "\nInteiro: " << exemplos << "\nLetra: "<< exemploLetra << "\nDecimal: " << exemploDecimal << "\nDecimal 2: " << exemploDecimalMenos << "\nBool: " << exemploSimples << "\nTexto: "<< exemploText << "\n";
	
	return 0;
}
